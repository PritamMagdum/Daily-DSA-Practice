class LFUCache {
public:
    int cap;
    int size;

    unordered_map<int, list<vector<int>>::iterator> mp; // key->address
    map<int, list<vector<int>>> freq; // freq->{key,value,counter}

    LFUCache(int capacity) {
        cap = capacity;
        size = 0;
    }

    void makeMostlyFreqUsed(int key) {
        auto& vec = *(mp[key]);

        int value = vec[1];
        int f = vec[2];

        freq[f].erase(mp[key]);

        if (freq[f].empty()) {
            freq.erase(f);
        }
        f++;
        freq[f].push_front({key, value, f});
        mp[key] = freq[f].begin();
    }

    int get(int key) {
        if(mp.find(key) == mp.end()){
            return -1;
        }

        auto vec = (*(mp[key]));

        int value = vec[1];
        makeMostlyFreqUsed(key);
        return value;
    }

    void put(int key, int value) {
        if(cap == 0) return;

        if(mp.find(key) != mp.end()){
            auto &vec = (*(mp[key]));
            vec[1] = value;

            makeMostlyFreqUsed(key);
        }else if(size < cap){
            size++;

            // if fresh or new
            freq[1].push_front(vector<int>({key,value,1}));
            mp[key]= freq[1].begin();
        }else{
            auto &whichList = freq.begin()->second;
            int keyToDelete = (whichList.back())[0];
            whichList.pop_back();

            if(whichList.empty()){
                freq.erase(freq.begin()->first);
            }

            freq[1].push_front(vector<int>({key,value,1}));
            mp.erase(keyToDelete);
            mp[key] = freq[1].begin();
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
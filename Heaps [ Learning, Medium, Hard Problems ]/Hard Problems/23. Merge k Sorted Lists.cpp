/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // create heap
    priority_queue<ListNode*,vector<ListNode*>,compare> minHeap;

    int k = lists.size();

    if(k == 0){
        return NULL;
    }

    // step1:
    for(int i =0;i<k;i++){
        if(lists[i] != NULL){
            minHeap.push(lists[i]);
        }
    }

    ListNode* head = NULL;
    ListNode* tail = NULL;

    while(minHeap.size() > 0){
        ListNode* top = minHeap.top();
        minHeap.pop();

        if(top->next != NULL){
            minHeap.push(top->next);
        }

        if(head == NULL){
            // answer LL is empty
            head = top;
            tail = top;
        }else{
            // insert at linked list
            tail->next = top;
            tail = top;
        }
    }
    return head;
    }
};
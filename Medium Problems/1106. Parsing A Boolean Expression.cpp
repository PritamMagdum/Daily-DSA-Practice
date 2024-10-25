class Solution {
public:
    char solveOperator(vector<char>& values, char op) {
        if (op == '!') {
            return values[0] == 't' ? 'f' : 't';
        }

        if (op == '&') {
            // for(char &ch : values){
            //     if(ch == 'f'){
            //         return 'f';
            //     }
            //     return 't';
            // }
            // for alernate logic without for() loop and one line code
            return any_of(begin(values), end(values),
                          [](char ch) { return ch == 'f' ;})
                       ? 'f'
                       : 't';
        }

        if (op == '|'){
            return any_of(begin(values), end(values),
                          [](char ch) { return ch == 't' ;})
                       ? 't'
                       : 'f';
        }

        return 't'; // don't worry it will never execute this code
    }
    bool parseBoolExpr(string expression) {
        stack<char> st;

        for (int i = 0; i < expression.length(); i++) {
            if (expression[i] == ',') {
                continue;
            }
            if (expression[i] == ')') {
                vector<char> values;

                while (st.top() != '(') {
                    values.push_back(st.top());
                    st.pop();
                }
                st.pop();
                char op = st.top();
                st.pop();

                st.push(solveOperator(values, op));
            }else{
            st.push(expression[i]);
            }
        }
        return st.top() == 't'? true : false;
    }
};
// Approach 1 - Less Optimized (Multiple if else Statement)
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st; // create an empty stack to store opening brackets
        for (char c : s)
        { // loop through each character in the string
            if (c == '(' || c == '{' ||
                c == '[')
            {               // if the character is an opening bracket
                st.push(c); // push it onto the stack
            }
            else
            {                     // if the character is a closing bracket
                if (st.empty() || // if the stack is empty or
                    (c == ')' &&
                     st.top() != '(') || // the closing bracket doesn't match
                                         // the corresponding opening bracket at
                                         // the top of the stack
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '['))
                {
                    return false; // the string is not valid, so return false
                }
                st.pop(); // otherwise, pop the opening bracket from the stack
            }
        }
        return st.empty(); // if the stack is empty, all opening brackets have
                           // been matched with their corresponding closing
                           // brackets, so the string is valid, otherwise, there
                           // are unmatched opening brackets, so return false
    }
};

// Approach 2 - High Optimized (Switch Case Statement and Odd Length)
class Solution
{
public:
    bool isValid(string s)
    {
        if (s.length() % 2 != 0)
            return false; // early return for odd length strings

        stack<char> st;
        for (char c : s)
        {
            switch (c)
            {
            case '(':
            case '{':
            case '[':
                st.push(c);
                break;
            case ')':
                if (st.empty() || st.top() != '(')
                    return false;
                st.pop();
                break;
            case '}':
                if (st.empty() || st.top() != '{')
                    return false;
                st.pop();
                break;
            case ']':
                if (st.empty() || st.top() != '[')
                    return false;
                st.pop();
                break;
            default:
                return false; // In case the input contains any invalid characters
            }
        }
        return st.empty();
    }
};

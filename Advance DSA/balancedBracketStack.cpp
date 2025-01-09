#include <iostream>
#include <stack>
using namespace std;
// it is interview quetion
bool balancedBracket(string s)
{
    int n = s.size();
    stack<char> st;
    bool result = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                result = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                result = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                result = false;
                break;
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    return result;
}
int main()
{
    bool result=balancedBracket("{([])}");
    if (result)
    {
        cout << "valid string";
    }
    else
    {
        cout << "invalid string";
    }
}
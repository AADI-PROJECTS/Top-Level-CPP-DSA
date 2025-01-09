#include <iostream>
#include <stack>
using namespace std;

void buttomvalue(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int topele = st.top();
    st.pop();
    buttomvalue(st, element);
    st.push(topele);
}
void reverIntstack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int element = st.top();
    st.pop();
    reverIntstack(st);
    buttomvalue(st, element);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverIntstack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}
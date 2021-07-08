//  stack : last in first out
//
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    cout << "Top element = " << st.top() << endl;
    cout << "Before pop size of stack = " << st.size() << endl;

    st.pop();

    cout << "After pop Top element = " << st.top() << endl;
    cout << "After pop size of stack = " << st.size() << endl;
    cout << "ALl the stack elements are : " << endl;
   
       while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
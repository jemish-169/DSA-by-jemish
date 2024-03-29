/*
Stack : It is a data structure wich follows LIFO characteristics.
*/
#include <bits/stdc++.h>
using namespace std;
int size = -1;
void push(vector<int> &vec, int n)
{
    vec.push_back(n);
    size++;
}
void pop(vector<int> &vec)
{
    if (size < 0)
        return;
    size--;
}
int top(vector<int> &vec)
{
    if (size < 0)
        return -1;
    return vec[size];
}

int main()
{
    // declartion of stack

    stack<int> st;

    st.push(2);
    st.push(8);
    st.push(6);

    while (!st.empty())
    {
        int x = st.top();
        st.pop();
        cout << x << " ";
    }

    // creating our own stack with vector
    vector<int> vec;
    push(vec, 0);
    push(vec, 2);

    cout << top(vec) << " ";

    push(vec, 9);
    push(vec, 8);
    push(vec, 5);

    cout << top(vec) << " ";

    pop(vec);
    pop(vec);
    pop(vec);

    cout << top(vec) << " ";
    return 0;
}
/*

    --------  Time complexity analysis  --------
    inserting and deleting complexity is : O(1)

    --------  Space complexity analysis  --------
    Space complexity is : O(n) for n sized vector

*/
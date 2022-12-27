/*
Queue : It is a data structure wich follows FIFO characteristics.
*/
#include <bits/stdc++.h>
using namespace std;
int size = -1, fsize = 0;
void push(vector<int> &vec, int n)
{
    vec.push_back(n);
    size++;
}
void pop(vector<int> &vec)
{
    if (size < fsize)
        return;
    fsize++;
}
int top(vector<int> &vec)
{
    if (size < 0)
        return -1;
    return vec[fsize];
}

int main()
{
    // declartion of stack

    queue<int> q;

    q.push(2);
    q.push(8);
    q.push(6);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
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

    pop(vec);

    cout << top(vec) << " ";

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
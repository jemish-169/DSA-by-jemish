/*
Recursion search
*/
#include <bits/stdc++.h>
using namespace std;
int find(vector<int> &vect, int k, int p)
{
    if (p == vect.size())
        return -1;
    if (vect[p] == k)
        return p;
    return find(vect, k, ++p);
}
int main()
{
    // Your code goes here

    vector<int> vec = {1, 8, 6, 2, -9, 4, 0, 89, -65, 42, 12};
    int key = -9, pos = 0;
    // cin >> key;
    cout << find(vec, key, pos);
    return 0;
}
/*

    --------  Time complexity analysis  --------
                    O(n)

    --------  Space complexity analysis  --------
                    O(1)
*/
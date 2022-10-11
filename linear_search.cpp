/*
Linear Search
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Your code goes here
    vector<int> vec = {0, 20, 10, 30, 44, 132, -45, 12, -12};
    int key = -45, n = vec.size();
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == key)
        {
            cout << "Key element Found at position: " << i + 1;
            return 0;
        }
    }
    cout << "Key element Not Found position.";

    return 0;
}
/*

    --------  Time complexity analysis  --------
In worse case we iterare in whole array so worst case time complexity is : O(n)

    --------  Space complexity analysis  --------
    In this searching algorithm we do not need any auxilary space.

*/
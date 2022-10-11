/*
Arrays
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Your code goes here

    // Array declaration
    array<int, 5> arr = {9, -52, 0, 53, 7}; // Array is created of size 5(starting from 0 to 4)
    array<int, 5> b;                        // Array is created of size 5(starting from 0 to 4)
    int a[4];                               // Array is created of size 4(starting from 0 to 3)

    // Here we storing random elements in array.
    for (int i = 0; i < 4; i++)
        a[i] = rand();

    // Printing array
    cout << "Printing an Array a" << endl;
    for (int i = 0; i < 4; i++)
        cout << a[i] << " ";
    cout << endl;

    // We can access the array elements by index
    cin >> a[1]; // it will overwrite the value of a[1]
    cout << a[1] << endl;

    // Sort an array
    sort(a, a + 3);
    sort(arr.begin(), arr.end());

    // Printing sorted array
    cout << "Printing an Array a" << endl;
    for (int i = 0; i < 4; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Printing an Array arr" << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    // some another function of array
    arr.begin();  // begining iteraror of array, if we do ++ then it goes start to end.
    arr.end();    // ending iterar of array, if we do -- then it goes end to start.
    arr.rbegin(); // reverse iterar of array from end, if we do ++ then it goes end to start.
    arr.rend();   // reverse iterar of array from start, if we do -- then it goes start to end.

    arr.size();     // number of elements
    arr.max_size(); // maximum size of array
    arr.empty();    // empty array or not?
    arr.at(2);      // will give 2nd element of array

    arr.front(); // first element
    arr.back();  // last element
    arr.fill(5); // whole array filled with 5
    arr.swap(b); // swap array arr with array back

    // reletional operations can be performed on array like,
    // "==", "!=", "<", ">", ">=" and "<="
    return 0;
}
/*

    --------  Time complexity analysis  --------
    searching and storing time complexity in linear time is O(n);
    directly accessing and storing time complexity is O(1);


    --------  Space complexity analysis  --------
    O(n) here n is number of elements in the array.
*/
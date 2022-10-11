/*
Strings : string is nothong but the array of characters.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Your code goes here

    // Declaration of strings
    string s1 = "hello", s2 = "world", str = "jemishbhai";

    // we can perform all operations of array on string
    str.begin();  // itetrator of str from beginnibg, if we do ++ then it goes start to end.
    str.end();    // itetrator of str from end, if we do -- then it goes end to start.
    str.rbegin(); // reverse itetrator of str from end, if we do ++ then it goes end to start.
    str.rend();   // reverse itetrator of str from start, if we do -- then it goes start to end.

    str.resize(s1.size() + 2, '+'); // it will print or resize str with adding ++ in last of s1
    str.resize(10);                 // it will resize str with the size 10
    str.capacity();                 // size of memory allocated to that string
    str.reserve();                  // request a change in capacity.

    str.clear();         // for clearing string memory
    str.empty();         // to check whether string is empty or not.
    str.shrink_to_fit(); // shrinking size of string.
    str[0];              // accessing 0th element in string.
    str.at(2);           // accessing 2nd element in string.

    str.front();        // for printing first element
    str.back();         // for printing last element
    str += s1;          // += is usedd for adding s1 in to str.
    str.append(s1);     // used for adding s1 into str.
    str.push_back('a'); // for pushing one elament in str at last.

    str.assign("hello"); // it works as = operator, for assign string to variable.
    str.insert(2, s2);   // for instring s2 string in str at position 2.
    str.erase(2);        // for erasing 2nd element in str
    str.erase(2, 6);     // for erasing 2 to 6 element in str.

    str.replace(1, 3, s2); // it will replace 1 to 3 elements in str with s2 string
    str.swap(s2);          // for swapping str with s2 string
    str.pop_back();        // for removing last element from str
    str.find(s2);          // for finding s2 in string, return position of first character of s2 in str
    str.rfind(s2);         // for finding s2 in string, return position of last character of s2 in str

    str.find_first_of(s1); // for finding s1 in str and returns first character's position in str.
    str.find_last_of(s1);  // for finding s1 in str and returns last character's position in str.
    str.substr(0, 3);      // it returns substring of str from str[0] to str[0+3].
    str.find("Bhai");      // for finding Bhai in string
    str.compare(s2);       // for comparing s2 with str,
    // it returns 0 if both are equal
    // <0 if value of first character of character dose not match is lower in the compared string. or compared character matched but string is shorter.
    // >0 if value of second character of character dose not match is greater in the compared string. or compared character matched but string is longer.

    getline(cin, str); // it will take whole line in input while cin just take input till blank character.
    swap(s2, s1);      // swapping s1 eith s2

    // reletional operations can be performed on string like,
    // "==", "!=", "<", ">", ">=" and "<="

    return 0;
}
/*

    --------  Time complexity analysis  --------
    linear searching will take time as O(n);
    or directly accessing element will take constant time O(1);

    --------  Space complexity analysis  --------
    storing data in string will take O(n) space.
*/
/*
Singly Linked List : it is nothing but chunk of memories which can traversable only forwarding in nature.
*/
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node() // defalut constructor
    {
        data = 0;
        next = NULL;
    }

    node(int x) // paramererised constructor
    {
        data = x;
        next = NULL;
    }
};

class LinkedList // A class to implement Linked List.
{
    node *head;

public:
    LinkedList() // defalut constructor
    {
        head = NULL;
    }
    void insertNode(int, int); // insert node at desired position
    void printLinkedList();    // print linked list
    void deleteNode(int);      // delete node from desired position
    int searchNode(int);       // search node in whole Linked List
};

void LinkedList::deleteNode(int x)
{
    node *temp = head;
    if (x == 1)
    {
        head = head->next;
        delete temp;
        return;
    }
    while (--x > 1)
    {
        temp = temp->next;
    }
    node *temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
    return;
}

void LinkedList::printLinkedList()
{
    cout << endl;

    if (head == NULL) // Check for empty list.
    {
        cout << "List empty" << endl;
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void LinkedList::insertNode(int pos, int x)
{
    node *newnode = new node(x);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (--pos > 1 && temp->next != NULL)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return;
}

int LinkedList::searchNode(int x)
{
    int pos = 0;
    node *temp = head;
    while (temp != NULL)
    {
        pos++;
        if (temp->data == x)
            return pos;
        temp = temp->next;
    }
    return -1;
}
int main()
{
    LinkedList list;

    // inserting nodes
    list.insertNode(1, 1);
    list.insertNode(2, 2);
    list.insertNode(3, 3);
    list.insertNode(4, 4);

    // printing linked list
    list.printLinkedList();

    // delete node from 3rd position
    list.deleteNode(4);

    // inserting nodes randomly
    list.insertNode(2, 4);
    list.insertNode(1, 45);
    list.insertNode(8, 8);

    // Searching in LinkedList
    cout << "Node found in LinkedList at " << list.searchNode(8) << endl;
    cout << "Node found in LinkedList at " << list.searchNode(10) << endl;

    // Printing linked list
    list.printLinkedList();
    return 0;
}
/*

    --------  Time complexity analysis  --------

//  insertion  //
    inserting node at first takes constant time : O(1)
    while inserting node at desired position takes : O(n)

// deletion  //
    deleting node at first takes constant time : O(1)
    while deleting node at desired position takes : O(n)

// Searching //
    Searching takes linear time to search that perticualr node : O(n)

    --------  Space complexity analysis  --------
    For creating n linkedList : O(n)

*/
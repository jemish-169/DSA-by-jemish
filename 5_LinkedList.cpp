/*
Linked List : it is nothing but chunk of memories which are singly or doubly linked in chain.
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

    // Printing linked list
    list.printLinkedList();
    return 0;
}
/*

    --------  Time complexity analysis  --------



    --------  Space complexity analysis  --------

*/
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

class LinkedList 
{
    private: 
    class Node
    {
        public: 
        string _data;
        Node(string str, Node* ptr)
        {
            _data = str;
            _next = ptr;
            _prev = nullptr;
        }
        Node* _next;

        Node* _prev;
    };
    Node* _head;
    Node* _tail; 
    int numberOfItems; 

    public: 
    //construtors 
    LinkedList();

    //check empty 
    bool isEmpty();

    //size of the list
    int size();

    //add to the front of the list
    void addFront(string str);

    //add to the back of the list
    void addBack(string str);

    //remove from the front of the list
    string removeFront();

    //remove from the back of the list
    string removeBack();

    //traverse the list and print the data of each node
    friend ostream& operator<<(ostream& o, LinkedList& ll);
};

#endif
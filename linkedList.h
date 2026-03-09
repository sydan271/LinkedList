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
        }
        Node* _next;
    };
    Node* _head;
    Node* _tail; 
    int numberOfItems; 
    
    public: 



};

#endif
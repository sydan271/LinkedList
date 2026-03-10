#include<iostream>
#include "linkedList.h"
using namespace std;

LinkedList::LinkedList()
{
    _head = nullptr;
    _tail = nullptr;
    numberOfItems = 0;
}

bool LinkedList::isEmpty()
{
    return numberOfItems == 0;
}

int LinkedList::size()
{
    return numberOfItems;
}

void LinkedList::addFront(string str)
{
    if(isEmpty())
    {
        _head = _tail = new Node(str, nullptr);
    }
    else
    {
        Node* newNode = new Node(str, _head);
        _head = newNode;
        numberOfItems++;
    }
}

void LinkedList::addBack(string str)
{
    if(isEmpty())
    {
        _head = _tail = new Node(str, nullptr);
    }
    else
    {
        Node* newNode = new Node(str, nullptr);
        _tail->_next = newNode;
        _tail = newNode;
        numberOfItems++;
    }
}

string LinkedList::removeFront()
{
    if(size() == 0)
    {
        return "";
    }
    
    string data = _head->_data;
    Node* deleteMe = _head;

    if(size() == 1)
    {
        _head = _tail = nullptr;
    }
    else
    {
        _head = _head->_next; 
    }

    numberOfItems--;
    delete deleteMe;
    return data;
}

string LinkedList::removeBack()
{
    if(size() == 0)
    {
        return "";
    }

    string data = _tail->_data;
    Node* deleteMe = _tail;

    if(size() == 1)
    {
        _head = _tail = nullptr;
    }
    else
    {
        _tail = _tail->_prev;
        _tail->_next = nullptr;
    }

    numberOfItems--;
    delete deleteMe;
    return data;
}

ostream& operator<<(ostream& o, LinkedList& ll)
{
    LinkedList::Node* ptr = ll._head;
    while(ptr != nullptr)
    {
        o << ptr->_data << " ";
        ptr = ptr->_next;
    }
    return o;
}

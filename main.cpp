#include<iostream>
#include "linkedList.h"
using namespace std;

int main()
{
    LinkedList ll;
    ll.addFront("Hello");
    ll.addFront("World");
    ll.addBack("!");
    cout << ll << endl;
    return 0;
}
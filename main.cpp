#include<iostream>
#include "linkedList.h"
using namespace std;

int main()
{
    LinkedList ll;
    ll.addFront("Hello");
    ll.addFront("World");
    cout << ll << endl;
    return 0;
}
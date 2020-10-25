#include "Linkedlist.h"

Node::Node(Record ipValue)
{
    value = ipValue;
    ref = nullptr;
}

Linkedlist::Linkedlist(Node value)
{
    head = new Node(value);
}


void Linkedlist::add(Node value)
{
    Node *iter = head; 
            
    Node *newEle = new Node(value);
            
    while(iter->ref != nullptr)
    {
        iter = iter->ref;
    }
    iter->ref = newEle;
}

void Linkedlist::remove()
{
    if(head->ref != nullptr)
    {
        head = head->ref;
    }
    else
    {
        head = nullptr;
    }
}

void Linkedlist::print()
{
    Node *iter = head;            
    iter->value.print();
            
    while (iter->ref != nullptr)
    {
        iter = iter->ref;
        iter->value.print();
    }
}
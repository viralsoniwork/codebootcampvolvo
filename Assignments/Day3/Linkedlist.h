#include "Record.h"

class Node
{
    public:
        Record value;
        Node *ref;
    
        Node(Record ipValue);
};

class Linkedlist
{
    public:
        Node *head;

        Linkedlist(Node value);
        

    void add(Node value);
    void remove();
    void print();

};
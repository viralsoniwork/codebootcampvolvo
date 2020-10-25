#include <iostream>

int main()
{
    struct node
    {
        int value;
        struct node *ref;

        node(int ipValue)
        {
            value = ipValue;
            ref = nullptr;
        }
    };

    struct linkedlist
    {
        struct node *head;

        linkedlist(int value)
        {
            head = new struct node(value);
        }

        void add(int value)
        {
            struct node *iter = head; 
            
            struct node *newEle = new struct node(value);
            
            while(iter->ref != nullptr)
            {
                iter = iter->ref;
            }
            iter->ref = newEle;
        }

        void remove()
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

        void print()
        {
            struct node *iter = head;
            
            std::cout<<iter->value<<std::endl;
            
            while (iter->ref != nullptr)
            {
                iter = iter->ref;
                std::cout<<iter->value<<std::endl;
            }
        }

    };

    struct linkedlist myLL = linkedlist(12);

    myLL.add(99);
    myLL.add(37);

    std::cout << "This is my linked list:" << std::endl;

    myLL.print();

    std::cout << "Now I add 20 in the end:" << std::endl;

    myLL.add(20);

    myLL.print();

    std::cout << "Now I remove an element from the front:" << std::endl;

    myLL.remove();

    myLL.print();

    std::cout << "Now I remove an element from the front:" << std::endl;

    myLL.remove();

    myLL.print();

    return 0;
}
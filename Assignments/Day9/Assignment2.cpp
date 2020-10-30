#include "Record.h"

void printAll(Record customers[], size_t count);
void test1();
void test2();
void test3();

int main()
{
    //Record customers[2];
    
    //customers[0].add("20201021", gen::REPAIR, gen::HEADLAMP, 500, gen::CARD);
    //customers[1].add("20201019", gen::REPLACE, gen::TYRE, 300, gen::CASH);

    //printAll(customers, 2);

    //std::cout<<"Testing:"<<std::endl;
    test1();
    test2();
    test3();

    return 0;
}

void printAll(Record customers[], size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        customers[i].print();
    }
}

void test1()
{
    std::cout<<"This is test 1 : "<<std::endl;
    Record customers[2];
    
    customers[0].add("20201021", gen::REPAIR, gen::HEADLAMP, 500, gen::CARD);
    customers[1].add("20201019", gen::REPLACE, gen::TYRE, 300, gen::CASH);

    printAll(customers, 2);
}

void test2()
{
    std::cout<<"This is test 2 : "<<std::endl;

    Record customers[2];

    printAll(customers, 2);
}

void test3()
{
    std::cout<<"This is test 3 : "<<std::endl;

    Record customers[1500];

    printAll(customers, 1500);
}
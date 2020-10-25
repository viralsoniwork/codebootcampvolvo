#include "Record.h"

void printAll(Record customers[], size_t count);

int main()
{
    Record customers[2];
    
    customers[0].add("20201021", gen::REPAIR, gen::HEADLAMP, 500, gen::CARD);
    customers[1].add("20201019", gen::REPLACE, gen::TYRE, 300, gen::CASH);

    printAll(customers, 2);

    return 0;
}

void printAll(Record customers[], size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        customers[i].print();
    }
}
#include "Linkedlist.h"

int main()
{
    Record customer1,customer2;
    
    customer1.add("20201021", gen::REPAIR, gen::HEADLAMP, 500, gen::CARD);
    customer2.add("20201019", gen::REPLACE, gen::TYRE, 300, gen::CASH);

    Linkedlist myLL = Linkedlist(customer1);

    myLL.add(customer2);

    myLL.print();

    return 0;
}

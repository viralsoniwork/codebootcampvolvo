#include "Payment.h"

Payment::Payment(/* args */)
{
    amount = 0;
    payMethod = gen::CASH;
}

Payment::~Payment()
{
}

void Payment::add(unsigned int am, gen::PayMethods pm)
{
    amount = am;
    payMethod = pm;
}

unsigned int Payment::getAmount()
{
    return amount;
}

gen::PayMethods Payment::getPayMethod()
{
    return payMethod;
}
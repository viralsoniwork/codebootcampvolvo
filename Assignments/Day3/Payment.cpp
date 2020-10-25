#include "Payment.h"

Payment::Payment(/* args */)
{
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
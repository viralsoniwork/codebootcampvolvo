#include "Payment.h"

class Record
{
private:
    /* data */
    std::string date;
    gen::Services service;
    gen::Parts part;
    Payment payment;
public:
    Record(/* args */);
    ~Record();
    void add(std::string ,gen::Services ,gen::Parts ,unsigned int, gen::PayMethods);
    void remove();
    void print();
};



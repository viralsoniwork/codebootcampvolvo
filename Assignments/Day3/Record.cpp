#include "Record.h"

Record::Record(/* args */)
{
}

Record::~Record()
{
}

void Record::add(std::string d, gen::Services s, gen::Parts p, unsigned int a, gen::PayMethods m)
{
    date = d;
    service = s;
    part = p;
    payment.add(a,m);
}

void Record::print()
{
    std::cout<<"Record :"<<std::endl;
    std::cout<<"Date : "<<date<<std::endl;
    std::cout<<"Service : "<<gen::servicesName[service]<<std::endl;
    std::cout<<"Part : "<<gen::partsName[part]<<std::endl;
    std::cout<<"Amount : "<<payment.getAmount()<<std::endl;
    std::cout<<"Payment method : "<<gen::payMethodsName[payment.getPayMethod()]<<std::endl<<std::endl;
}
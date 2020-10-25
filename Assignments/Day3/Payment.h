#include <iostream>

//#ifndef GEN

//#define GEN

namespace gen{
    enum PayMethods {CARD = 0, CASH};
    enum Services {REPLACE = 0, REPAIR};
    enum Parts {TYRE = 0, HEADLAMP};
    const std::string payMethodsName[] =
    {
        "Card",
        "Cash"
    };
    const std::string servicesName[] =
    {
        "Replace",
        "Repair"
    };
    const std::string partsName[] =
    {
        "Tyre",
        "Headlamp"
    };
}

//#endif

class Payment
{
private:
    /* data */
    unsigned int amount;
    gen::PayMethods payMethod;
public:
    Payment(/* args */);
    ~Payment();
    
    unsigned int getAmount();
    gen::PayMethods getPayMethod();

    void add(unsigned int, gen::PayMethods);
};
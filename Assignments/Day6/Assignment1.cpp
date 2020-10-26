#include <iostream>
#include <bitset>

struct BCMSignals
{
    uint8_t seatbelts : 5;
    uint8_t windows : 4;
    uint8_t doors : 4;
    uint8_t lights : 3;
};

void readBCMSignals(const uint16_t &);
void showSeatBeltStatus (const std::bitset<8> &);
void showWindowsStatus (const std::bitset<8> &);
void showDoorsStatus(const std::bitset<8> &);
void showLightsStatus(const std::bitset<8> &);
void printOO(const std::bitset<8> &, const std::bitset<8> &);

int main()
{
    uint16_t ipSignal = 0b1011101001011011;

    readBCMSignals(ipSignal);

    std::bitset<16> ipSignalFrame (ipSignal);

    return 0;
}

void readBCMSignals(const uint16_t &ipSignal)
{
    std::string seatbeltsM = "1111100000000000";
    std::string windowsM = "0000011110000000";
    std::string doorsM = "0000000001111000";
    std::string lightsM = "0000000000000111";

    struct BCMSignals signal;

    signal.seatbelts = (int)((std::bitset<16>(ipSignal) & std::bitset<16>(seatbeltsM)) >> 11).to_ulong();
    signal.windows = (int)((std::bitset<16>(ipSignal) & std::bitset<16>(windowsM)) >> 6).to_ulong();
    signal.doors = (int)((std::bitset<16>(ipSignal) & std::bitset<16>(doorsM)) >> 3).to_ulong();
    signal.lights = (int)(std::bitset<16>(ipSignal) & std::bitset<16>(lightsM)).to_ulong();

    showSeatBeltStatus(std::bitset<8>(signal.seatbelts));
    showWindowsStatus(std::bitset<8>(signal.windows));
    showDoorsStatus(std::bitset<8>(signal.doors));
    showLightsStatus(std::bitset<8>(signal.lights));
}

void showSeatBeltStatus(const std::bitset<8> &ipSignal)
{
    std::cout<<"Seat belt for driver is : ";
    printOO(ipSignal,std::bitset<8>("00010000"));
    std::cout<<std::endl;

    std::cout<<"Seat belt for passenger 1 is : ";
    printOO(ipSignal,std::bitset<8>("00001000"));
    std::cout<<std::endl;

    std::cout<<"Seat belt for passenger 2 is : ";
    printOO(ipSignal,std::bitset<8>("00000100"));
    std::cout<<std::endl;

    std::cout<<"Seat belt for passenger 3 is : ";
    printOO(ipSignal,std::bitset<8>("00000010"));
    std::cout<<std::endl;

    std::cout<<"Seat belt for passenger 4 is : ";
    printOO(ipSignal,std::bitset<8>("00000001"));
    std::cout<<std::endl;
}

void showWindowsStatus(const std::bitset<8> &ipSignal)
{
    std::cout<<"Window for Front Left is : ";
    printOO(ipSignal,std::bitset<8>("00001000"));
    std::cout<<std::endl;

    std::cout<<"Window for Front Right is : ";
    printOO(ipSignal,std::bitset<8>("0000100"));
    std::cout<<std::endl;

    std::cout<<"Window for Rear Left is : ";
    printOO(ipSignal,std::bitset<8>("00000010"));
    std::cout<<std::endl;

    std::cout<<"Window for Rear Right is : ";
    printOO(ipSignal,std::bitset<8>("00000001"));
    std::cout<<std::endl;
}

void showDoorsStatus(const std::bitset<8> &ipSignal)
{
    std::cout<<"Door for Front Left is : ";
    printOO(ipSignal,std::bitset<8>("00001000"));
    std::cout<<std::endl;

    std::cout<<"Door for Front Right is : ";
    printOO(ipSignal,std::bitset<8>("0000100"));
    std::cout<<std::endl;

    std::cout<<"Door for Rear Left is : ";
    printOO(ipSignal,std::bitset<8>("00000010"));
    std::cout<<std::endl;

    std::cout<<"Door for Rear Right is : ";
    printOO(ipSignal,std::bitset<8>("00000001"));
    std::cout<<std::endl;
}

void showLightsStatus(const std::bitset<8> &ipSignal)
{
    std::cout<<"Light for Front is : ";
    printOO(ipSignal,std::bitset<8>("00000100"));
    std::cout<<std::endl;

    std::cout<<"Light for Interior is : ";
    printOO(ipSignal,std::bitset<8>("0000010"));
    std::cout<<std::endl;

    std::cout<<"Light for Back is : ";
    printOO(ipSignal,std::bitset<8>("00000001"));
    std::cout<<std::endl;
}

void printOO(const std::bitset<8> &myValue, const std::bitset<8> &mask)
{
    if((myValue & mask).to_ulong())
    {
        std::cout<<"On";
    }
    else
    {
        std::cout<<"Off";
    }
}
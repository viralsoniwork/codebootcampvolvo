#include <iostream>
#include <bitset>
#include <algorithm>

struct CrashSignal{
    uint8_t speed : 4;
    uint8_t front : 3;
    uint8_t rear : 3;
    uint8_t right : 3;
    uint8_t left : 3;
};

// Encode(5 ip, 1 op)

uint16_t encodeSignal(const uint16_t &,const uint16_t &,const uint16_t &,const uint16_t &,const uint16_t &);

//detectCrash(16 bit)
//side of collision , speed

void detectCrash(const uint16_t &);

int main()
{
    //speed could be 220
    
    //750
    //150
    //450
    //450

    uint16_t speed = 220;
    uint16_t front = 750;
    uint16_t rear = 150;
    //uint16_t rear = 149;
    //uint16_t right = 450;
    uint16_t right = 145;
    uint16_t left = 450;
    
    detectCrash(encodeSignal(speed, front, rear, right, left));

    return 0;
}

uint16_t encodeSignal(const uint16_t &speed, const uint16_t &front, const uint16_t &rear, const uint16_t &right, const uint16_t &left)
{
    std::bitset<16> signal;

    signal = std::bitset<16>(speed/20) << 12;
    signal = signal | (std::bitset<16>(front/150) << 9);
    signal = signal | (std::bitset<16>(rear/150) << 6);
    signal = signal | (std::bitset<16>(right/150) << 3);
    signal = signal | (std::bitset<16>(left/150));

    //std::cout<<signal.to_string()<<std::endl;

    return (uint16_t)signal.to_ulong();
}

void detectCrash(const uint16_t & ipSignal)
{
    //speed should be greater than 1
    //one of the sides should be zero

    std::string speedM =  "1111000000000000";
    std::string frontM =  "0000111000000000";
    std::string rearM  =  "0000000111000000";
    std::string rightM =  "0000000000111000";
    std::string leftM  =  "0000000000000111";

    uint8_t minDistance;

    struct CrashSignal signal;

    signal.speed = (int)((std::bitset<16>(ipSignal) & std::bitset<16>(speedM)) >> 12).to_ulong();
    signal.front = (int)((std::bitset<16>(ipSignal) & std::bitset<16>(frontM)) >> 9).to_ulong();
    signal.rear = (int)((std::bitset<16>(ipSignal) & std::bitset<16>(rearM)) >> 6).to_ulong();
    signal.right = (int)((std::bitset<16>(ipSignal) & std::bitset<16>(rightM)) >> 3).to_ulong();
    signal.left = (int)(std::bitset<16>(ipSignal) & std::bitset<16>(leftM)).to_ulong();

    if(signal.speed == 0)
    {
        std::cout << "No Crash :)";
    }
    else
    {
        //minDistance = std::min(std::min(signal.front, std::min(signal.right, signal.left)),signal.rear);

        if(signal.front == 0)
        {
            std::cout << "The crash is from the Front!!!"<<std::endl;
        }
        else if(signal.rear == 0)
        {
            std::cout << "The crash is from the Rear!!!"<<std::endl;
        }
        else if(signal.right == 0)
        {
            std::cout << "The crash is from the Right!!!"<<std::endl;
        }
        else if(signal.left == 0)
        {
            std::cout << "The crash is from the Left!!!"<<std::endl;
        }
        else
        {
            std::cout << "No Crash :)" << std::endl;
        }
    }
    
}
#include <iostream>
#include <string.h>

void decrypt(int, std::string);

int main()
{
    decrypt(7, "OLSSV");
    decrypt(19, "VKRIMHZKTIAR");
    return 0;
}

void decrypt(int key, std::string cipher)
{
    int shift;

    //std::cout<< cipher.length();

    for (size_t i = 0; i < cipher.length(); i++)
    {
        shift = cipher[i]  - key;

        if (shift < 65)
        {
            shift = 65 - shift;
            shift = 91 - shift;
        }

        std::cout << static_cast<char>(shift);
    }
    
}
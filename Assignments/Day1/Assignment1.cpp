#include <iostream>
#include <climits>

int main()
{
    unsigned int posNum;
    unsigned int randomArray [8][9][11];
    
    std::cout << "Please enter a positive number :";

    std::cin >> posNum;

    if(posNum < 3)
    {
        for (size_t i = 0; i < 8; i++)
        {
            for (size_t j = 0; j < 9; j++)
            {
                for (size_t k = 0; k < 11; k++)
                {

                    randomArray[i][j][k] = 1;
                }
            
            }
        
        }    
    }
    else
    {
        for (size_t i = 0; i < 8; i++)
        {
            for (size_t j = 0; j < 9; j++)
            {
                for (size_t k = 0; k < 11; k++)
                {
                    randomArray[i][j][k] = rand() % (posNum - 1) + 1;
                }
            }
        }    
    }

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 9; j++)
        {
            for (size_t k = 0; k < 11; k++)
            {
                std::cout << randomArray[i][j][k];
                std::cout << " ";
            }
            std::cout << "\t";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
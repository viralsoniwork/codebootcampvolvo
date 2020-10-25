#include <iostream>
#include <climits>

int main()
{
    unsigned int posNum;
    
    unsigned int depthLen;
    unsigned int columnLen;  
    unsigned int rowLen;

    unsigned int*** array;

    std::cout << "Please enter a positive number :";
    std::cin >> posNum;

    std::cout << "Please enter the number of rows:";
    std::cin >> columnLen;

    std::cout << "Please enter the number of columns:";
    std::cin >> rowLen;

    std::cout << "Please enter the number of depths:";
    std::cin >> depthLen;

    array = new unsigned int**[depthLen];

    for (size_t i = 0; i < depthLen; i++)
    {
        array[i] = new unsigned int* [columnLen];
        for (size_t j = 0; j < columnLen; j++)
        {        
            array[i][j] = new unsigned int [rowLen];
            for (size_t k = 0; k < rowLen; k++)
            {
                array[i][j][k] = 0;      
            }        
        }
    }

    if(posNum < 3)
    {
        for (size_t i = 0; i < depthLen; i++)
        {
            for (size_t j = 0; j < columnLen; j++)
            {
                for (size_t k = 0; k < rowLen; k++)
                {
                    array[i][j][k] = 1;
                }         
            }
        }  
    }
    else
    {
        for (size_t i = 0; i < depthLen; i++)
        {
            for (size_t j = 0; j < columnLen; j++)
            {
                for (size_t k = 0; k < rowLen; k++)
                {
                    array[i][j][k] = rand() % (posNum - 1) + 1;   
                }
            }
        }
    }

    for (size_t i = 0; i < depthLen; i++)
    {
        for (size_t j = 0; j < columnLen; j++)
        {       
            for (size_t k = 0; k < rowLen; k++)
            {
                std::cout << array[i][j][k];
                std::cout << "\t";
            }
            std::cout << std::endl;
                   
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }
    //rows = array;
    
    return 0;
}
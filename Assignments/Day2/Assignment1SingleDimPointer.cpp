#include <iostream>
#include <climits>

int main()
{
    unsigned int posNum;
    
    unsigned int *rows, rowLenght;
    
    unsigned int columnLength;
    
    unsigned int depthLenght;
    unsigned int totalNoOfElements;
    unsigned int *array;

    std::cout << "Please enter a positive number :";
    std::cin >> posNum;

    std::cout << "Please enter the number of rows:";
    std::cin >> rowLenght;

    std::cout << "Please enter the number of columns:";
    std::cin >> columnLength;

    std::cout << "Please enter the number of depths:";
    std::cin >> depthLenght;

    totalNoOfElements = rowLenght * columnLength * depthLenght;

    rows = new unsigned int(totalNoOfElements);
    array = rows;
    
    if(posNum < 3)
    {
        for (size_t k = 0; k < depthLenght; k++)
        {
            
            for (size_t j = 0; j < columnLength; j++)
            {
                
                for (size_t i = 0; i < rowLenght; i++)
                {
                    *(rows + i) = 1;
                    
                }
                rows = rows + rowLenght;          
            }
            rows = rows + rowLenght;
        }
        rows = array;   
    }
    else
    {
        for (size_t k = 0; k < depthLenght; k++)
        {
            for (size_t j = 0; j < columnLength; j++)
            {
                for (size_t i = 0; i < rowLenght; i++)
                {
                    *(rows + i) = rand() % (posNum - 1) + 1;
                    
                }
                rows = rows + rowLenght;
            }
            rows = rows + rowLenght;
        }
        rows = array;   
    }

    for (size_t k = 0; k < depthLenght; k++)
    {
        
        for (size_t j = 0; j < columnLength; j++)
        {
            
            for (size_t i = 0; i < rowLenght; i++)
            {
                std::cout << *(rows + i);
                std::cout << "\t";
            }
           rows = rows + rowLenght;
           std::cout << std::endl;
                   
        }    
        rows = rows + rowLenght;
        std::cout << std::endl;
        std::cout << std::endl;
    }
    //rows = array;
    
    return 0;
}
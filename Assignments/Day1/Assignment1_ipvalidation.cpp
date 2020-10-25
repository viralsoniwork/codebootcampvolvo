#include <iostream>
#include <climits>

int main()
{
    unsigned int posNum;
    unsigned int randomArray [8][9][11];
    unsigned int maxValue = UINT_MAX;
    bool result;

    bool validInp = true;

    std::cout << maxValue << std::endl;

    //std::cin >> posNum;

    //result = std::cin.fail();

    //std::cout << result << std::endl;

    
    
    do
    {
        if(validInp == true) 
        {
            std::cout << "Please enter a positive number :";    
        }
        else
        {
            std::cout << "the number is either negative, zero or too large! Please enter a positive number :";
            validInp = true;
        }
        std::cin.clear();
        std::cin >> posNum;
        //std::cin.clear();

        result = std::cin.fail();

        std::cout << result << std::endl;

        std::cout << posNum << "\n";

        if((posNum == 0) || (posNum >= maxValue))
        {
            std::cout<<"i am in loop\n";
            validInp = false;
        }

    } while (false == validInp);
    
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
                //std::cout << randomArray[i][j][k];
                //std::cout << " ";
            }
            //std::cout << "\t";
        }
        //std::cout << std::endl;
    }
    
    return 0;
}
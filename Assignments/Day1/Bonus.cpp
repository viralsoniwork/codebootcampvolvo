#include <iostream>
#include <math.h>

char askQuestion(int);

int main()
{
    char response;
    int assumption = static_cast<int>(pow(2,7));    // setting it 128
    int maxPossible = assumption;                   // 128
    int minPossible = 0;                            // 0

    std::cout << "Please guess a number between 1 to 128." << std::endl;

    maxPossible = assumption;       //128
    assumption = assumption / 2;    //64

    response = askQuestion(assumption);     //Q1

    if(response == 'y')
    {
        assumption = (assumption  + maxPossible ) / 2;  //96

        response = askQuestion(assumption);     //Q2

        if(response == 'y')
        {
            assumption = (assumption  + maxPossible ) / 2;  //112

            response = askQuestion(assumption);     //Q3

            if(response == 'y')
            {
                assumption = (assumption  + maxPossible ) / 2;  //120

                response = askQuestion(assumption);     //Q4

                if(response == 'y')
                {
                    assumption = (assumption  + maxPossible ) / 2;  //124

                    response = askQuestion(assumption);     //Q5

                    if(response == 'y')
                    {
                        assumption = (assumption  + maxPossible ) / 2;  //126

                        response = askQuestion(assumption);     //Q6

                        if(response == 'y')
                        {
                            assumption = (assumption  + maxPossible ) / 2;  //127

                            response = askQuestion(assumption);     //Q7

                            if(response == 'y')
                            {
                                std::cout << "You guessed " << maxPossible << std::endl;
                            }
                            else
                            {
                                /* code */
                            }
                            
                        }
                        else
                        {
                            /* code */
                        }
                        
                    }
                    else
                    {
                        /* code */
                    }
                    
                }
                else
                {
                    /* code */
                }
                
            }
            else
            {
                /* code */
            }
            
        }
        else
        {
            /* code */
        }
        
    }
    else
    {
        maxPossible = assumption;                       //64
        assumption = (assumption + minPossible) / 2;    //32

        response = askQuestion(assumption);     //Q2
        
        if(response == 'y')
        {   
            assumption = (assumption + maxPossible) / 2;    //48

            response = askQuestion(assumption);     //Q3

            if(response == 'y')
            {
                assumption = (assumption + maxPossible) / 2;    //56

                response = askQuestion(assumption);     //Q4

                if(response == 'y')
                {
                    assumption = (assumption + maxPossible) / 2;    //60

                    response = askQuestion(assumption);     //Q5

                    if(response == 'y')
                    {

                    }
                    else
                    {
                        /* code */
                    }
                    
                }
                else
                {
                    /* code */
                }
                
            }
            else
            {
                /* code */
            }
        }
        else
        {
            /* code */
        }
        
    }
    
    return 0;
}

char askQuestion(int assumption)
{
    char response;
    
    std::cout << "Is your number greater than " << assumption << ". y/n?";
    std::cin >> response;
    
    return response;
}
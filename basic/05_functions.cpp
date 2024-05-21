//for std::cout
#include <iostream>

//user defined function
int addNumbers(int num1, int num2){     
    return num1 + num2 ;                
}

//void function do not return any value
void printHelloworld()
{
    std::cout << "Hello World!\n";
}

//special function from where the execution starts with
int main(){                            

    int num1 {10};                      
    int num2 {20};

    printHelloworld();

    std::cout << "First Num: " << num1 << std::endl;
    std::cout << "Second Num: " << num2 << std::endl;

    int sum = num1 + num2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Sum of 5 and 15 is: " << addNumbers(5,15) << std::endl;

    /*
    nested function is not allowed
    eg:
    main()
    {
        fuc()
        {
            
        }
    }
    */

    return 0; 
}
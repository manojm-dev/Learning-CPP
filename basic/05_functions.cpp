//for std::cout
#include <iostream>

// Forward function declaration
void printHelloWorld();
void printSquare(int value);
int  getValueFromUser();
int  addNumbers(int num1, int num2);

//special function from where the execution starts with
int main()
{                         
    int num{};                          //variable declartion

    printHelloWorld();                  //print welcome message

    num = getValueFromUser();           //get value from user to a variable method1
    int value { getValueFromUser() };   //function return a value back to the function’s caller variable.
    
    std::cout << "The square of number is: " << num * num << std::endl; // dispaly square normally
    printSquare(value);                                                 // dispaly square using functions

    return 0; 
}

//user defined functions

int addNumbers(int num1, int num2){     
    return num1 + num2 ;                
}

int getValueFromUser()
{
    int num{};

    std::cout << "Enter a number: \n";
    std::cin >> num;

    return num;
}

void printSquare(int value)
{
    std::cout << "The square root of the number is: " << value * value << std::endl;
}

//void function do not return any value
void printHelloWorld()
{
    std::cout << "Hello World!\n";
}

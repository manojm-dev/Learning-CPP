//This is the input/output library which is part of c++ standard library
#include <iostream>

int main()
{
  //variables
  int x = 10;
  int y{};

  //std::cout
  //1 (<<insertion operator)
  std::cout << "hello word";
  std::cout << "\n";
  //2
  std::cout << "print constant:";
  std::cout << 3; 
  //3
  std::cout << " print variable:";
  std::cout << x;
  std::cout << "\n";
  //4 
  std::cout << "hello" << "world" << "\n";


  //std::endl
  std::cout << "Hi !" << std::endl;
  std::cout << "using stdendl to output a newline" << std::endl;

  /*
  endl vs \n:
  std::endl is often inefficient, as it actually does two jobs: 
  1) it outputs a newline (moving the cursor to the next line of the console).
  2) it flushes the buffer (which is slow)
  where \n  output a newline without flushing the output buffer
  */

  // usage of \n
  std::cout << "line one" << "\n";
  std::cout << "line two\n";

  /*
  best practice:
  prefer \n over std::endl when outputting text to the console.
  */

  //std::cin
  //1 (>> is extractor operator)
  std::cout << "enter a number: \n";
  std::cin >> y;
  std::cout << "the given number is: " << y << "\n";
  //2
  std::cout << "Enter two numbers separated by a space: ";
  std::cin >> x >> y;
  std::cout << "the given numbers are " << x << " & " << y << "\n";

  /*
  1) decimal input are rounded off due to int keyword
  2) string input is considered as 0
  */

  return 0;
}
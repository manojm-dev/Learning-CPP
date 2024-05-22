#include <iostream>

#define NAME "Manoj"
#define MORNING

using namespace std;

//conditional compilation
int main()
{
    cout << "Hello " << NAME << endl;

#ifdef MORNING                  //if defined then compile   
    cout << "Good Morning\n";
#endif

#ifdef EVENING                 //if defined then compile        
    cout << "Good Night\n";
#endif

#ifndef MORNING                //if not defined then compile
    cout << "Good Morning\n";
#endif

#if 0                          //if 0 do not compile if 1 then compile
    cout << "do not print\n";
#endif

    return 0;
}
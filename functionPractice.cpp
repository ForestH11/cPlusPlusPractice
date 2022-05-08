#include <iostream>

void noReturn()
{
    std::cout << "This function runs, but doesn't return anything\n";
}

int returnInt()
{
    std::cout << "This function runs and returns an integer\n";
    return 5;
}

char takeReturnChar(char myChar)
{
    std::cout << "This function is passed the character variable, \'" << myChar <<"\' changes it, and then returns it\n";
    myChar = 'a';
    return myChar;
}

int main()
{
    std::cout << "Hello World\n";
    noReturn();
    std::cout << returnInt() << " is the integer that was returned\n";
    std::cout << takeReturnChar('b') << " is the character that was returned\n";

    return 0;
}
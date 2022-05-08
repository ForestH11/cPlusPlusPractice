#include <iostream>



int main()
{
    int x = 0;
    int y = 0;

    std::cout << "Input a number: ";
    std::cin >> x;
    std::cout << "Input a number again: ";
    std::cin >> y;

    if (x > y) std::cout << "x is bigger than y";


    else if (y > x) std::cout<< "y is bigger than x";

    else std::cout << "They are the same size";
    
    

    return 0;
}
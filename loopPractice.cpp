#include <iostream>

void linearVsExp()
{
    //declare variables
    int linear = 20;
    float exp = 0;
    float distanceLi = 0;
    float distanceEx = 0;
    int seconds = 0;

    //print out an explanation of what we're doing here
    std::cout << "\nIt's a race between linear and exponential!"
    <<" How long will it take for acceleration to catch up "
    << " with instant speed?\n\nSECONDS\t| LINEAR |EXPONENTIAL\n";

    //the do while loop. It runs the code inside the brackets once, and then checks against the while condition.
    do
    {
        //add the "speed" to each of the distances an increment the exp and seconds variables
        distanceLi += linear;
        distanceEx += exp;
        exp ++; //speed of 1 more than last time
        seconds ++; // time goes forwards!

        //print our results with some nice formatting
        std::cout << seconds << "\t| " << distanceLi << "\t | " << distanceEx << std::endl;
        
    } while (distanceEx < distanceLi);
    
}

void doesForgive()
{
    std::cout << "We're supposed to forgive until seventy times seven, which is 490 ";
    for(int i = 0; i <= 490; ++i)
    {
        if(i % 70 == 0)
        std::cout << "You've done it " << i << " times, I forgive you.\n";
    }

    std::cout << "You did it again, you've reached your limit, I will no longer forgive you.\n";
}

int main()
{
    //declare variables
    int x = 0;
    int y = 0;
    //an example of a while loop, in this case, while the variable
    //x is less than 100, it runs the code inside the curly braces
    while(x < 100) 
    {
        //print out what x's value is
        std::cout << x << std::endl;
        // add to x so that this doesn't go on forever.
        x += 17;
    }
    //this is my do While loop function
    linearVsExp();
    doesForgive();
}
/** 
 * Exercise 2.18: Write code to change the value of a pointer. Write code to
 * change the value to which the pointer points.
**/

#include <iostream>

int main(int argc, char const *argv[])
{
    int number = 9;
    int *p;
    *p = number;
    p = &number;

    return 0;
}

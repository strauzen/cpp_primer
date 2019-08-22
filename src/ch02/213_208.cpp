/** 
 * Exercise 2.8: Using escape sequences, write a program to print 2M followed
 * by a newline. Modify the program to print 2, then a tab, then an M, followed
 * by a newline.
**/

#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "2M\n" << std::endl;
    std::cout << "2\tM\n" << std::endl;

    return 0;
}

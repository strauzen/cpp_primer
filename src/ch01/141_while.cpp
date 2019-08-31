#include <iostream>

int main()
{
    int v1 = 0, v2 = 0, sum = 0, i = v1;

    std::cout << "Please input two values:" << std::endl;
    std::cin >> v1 >> v2;

    while (i <= v2)
    {
        sum += i;
        ++i;
    }

    std::cout << "The sum of " << v1 << " to " << v2 << " inclusive is: " << sum << std::endl;

    return 0;
}
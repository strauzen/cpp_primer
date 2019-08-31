#include <iostream>

int main()
{
    int currVal = 0, val = 0;

    if (std::cin >> currVal)
    {
        int count = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
                count++;
            else
            {
                std::cout << currVal << " occurs " << count << " times." << std::endl;
                count = 1;
                currVal = val;
            }
        }

        std::cout << currVal << " occurs " << count << " times." << std::endl;
    }

    return 0;
}
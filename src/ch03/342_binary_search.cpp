#include <vector>

using namespace std;

int main()
{
    vector<int> text;
    int sought;
    // text must be sorted
    // beg and end will denote the range we're searching
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2; // original midpoint
    // while there are still elements to look at and we haven't yet found sought
    while (mid != end && *mid != sought)
    {
        if (sought < *mid)              // is the element we want in the first half?
            end = mid;                  // if so, adjust the range to ignore the second half
        else                            // the element we want is in the second half
            beg = mid + 1;              // start looking with the element just after mid
        mid = beg + (end - beg) / 2;    // new midpoint
    }

        return 0;
}
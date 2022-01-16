#include <algorithm>
#include <vector>
class solution
{
public:
    int flips(std::vector<int> &A)
    {
        int change0 = 0, change1 = 0;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] == 1 - (i % 2))
            {
                change0++;
            }
            if (A[i] == i % 2)
            {
                change1++;
            }
        }
        return std::min(change0, change1);
    }
};
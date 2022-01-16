/* There is a machine that can fix all potholes along a road 3 units in length. 
A unit of Road will be represented with a period in a String. For example, "..." = one section of road 3 units in length. 
Potholes are marked with an "X" in the road, and also count as a unit of length. 
The task is to take a road of length N and fix all potholes with the fewest possible sections repaired by the machine. 
This problem is concerned with performance over correctness. */
#include <algorithm>
#include <iostream>
#include <string>

int solution(std::string &S)
{
    int numPatches = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'X')
        {
            numPatches++;
            i += 2;
        }
    }
    return numPatches;
}

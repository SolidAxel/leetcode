// *****************************************************
// big O(n^2)
// *****************************************************
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};
// *****************************************************
// big O(n)
// *****************************************************
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            //Find what number you are looking for in relation to number at num[index]
            int numToFind = target - nums[i];
            //If number is found in mapping, push_back current index you are looking at and mapped value of number you are trying to find.
            if (map.find(numToFind) != map.end())
            {
                result.push_back(map[numToFind]);
                result.push_back(i);
            }
            //If number is not found in mapping, add it to map with it's value being its index in num[].
            map[nums[i]] = i;
        }
        return result;
    }
};

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        //Sort so that duplicates in the vector are next to each other.
        sort(nums.begin(), nums.end());
        bool dupeFlag = false;
        for (int i = 0; i < nums.size(); i++)
        {
            // Check if iterator not at end of vector and if number at current index is same as one right next to it.
            if (i != nums.size() - 1 && nums[i] == nums[i + 1])
                // Change flag to true and break since we don't want to keep iterating through vector.
                dupeFlag = true;
            break;
        }
        return dupeFlag;
    }
};
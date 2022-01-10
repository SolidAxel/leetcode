// *****************************************************
// O(nlogn)
// *****************************************************
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
// *****************************************************
// O(n)
// *****************************************************
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Initialize hash table
        unordered_set<int> map;
        // Grab number from vector
        for(int i: nums){
            // If number is found in table return true
            if(map.find(i) != map.end()){
                return true;
            }
            // If not found in table, insert to table
            map.insert(i);
        }
        // If all numbers in vector are inserted, return false.
        return false;
    }
};
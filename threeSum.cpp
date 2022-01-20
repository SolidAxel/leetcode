class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res = {};
        sort(nums.begin(), nums.end());
        if(nums.size() < 3){
            return res;
        }
        for(int i = 0; i < nums.size() && nums[i] <= 0; i++){
            int left = i + 1;
            int right = nums.size() - 1;
            int target = -nums[i];
            
            while(left < right){
                int sum = nums[right] + nums[left];
                
                if(sum < target){
                    left++;
                }
                else if(sum > target){
                    right--;
                }
                else{
                    vector<int> triplets = {nums[i], nums[left], nums[right]};
                    res.push_back(triplets);
                    
                    while(left < right && nums[left] == triplets[1]){
                        left++;
                    }
                    while(left < right && nums[right] == triplets[2]){
                        right--;
                    }
                }
            }
            while(i + 1 < nums.size() && nums[i+1] == nums[i]){
                i++;
            }
        }
        return res;
    }
};
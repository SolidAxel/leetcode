class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int beginning = 1, behind = 1;
        vector<int> products(nums.size(),1);
        for(int i = 0; i < nums.size(); i++){
            products[i] *= beginning;
            beginning *= nums[i];
        }
        for(int i = nums.size() - 1; i >= 0; i--){
            products[i] *= behind;
            behind *= nums[i];
        }
        return products;
    }
};
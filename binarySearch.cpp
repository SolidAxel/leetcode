class Solution {
public:
    int searchHelper(vector<int>& nums, int left, int right, int target){
        if(left > right){
            return -1;
        }
        int mid = (left + right) / 2;
        if(nums[mid] == target){
            return mid;
        }
        while(left < right){
            if(nums[left] <= target && nums[mid] > target){
                return searchHelper(nums, left, mid-1, target);
            }
            else
                return searchHelper(nums, mid + 1, right, target);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        if(nums.size() == 1 && nums[0] != target){
            return -1;
        }
        return searchHelper(nums, left, right, target);
    }
};
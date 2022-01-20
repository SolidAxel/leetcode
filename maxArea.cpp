class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size()-1;
        int maximum = 0;
    
        while (low < high){
            int currMax = min(height[low], height[high]) * (high - low);
            maximum = max(maximum, currMax);
            if(height[low] > height[high]){
                high--;
            }
            else{
                low++;
            }
        }
        return maximum;
    }
};
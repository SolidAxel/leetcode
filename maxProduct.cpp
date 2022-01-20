class Solution {
public:
    int maxProduct(vector<int>& A) {
        int ans = A[0], dpMin = A[0], dpMax = A[0];
        for(int i = 1; i < A.size(); i++) {
            int prevDpMin = dpMin, prevDpMax = dpMax;
            if(A[i] >= 0){
                dpMin = min(A[i], A[i] * prevDpMin);
                dpMax = max(A[i], A[i] * prevDpMax);
            }
            else{
                dpMin = min(A[i], A[i] * prevDpMax);
                dpMax = max(A[i], A[i] * prevDpMin);
            }
           
            ans = max(ans, dpMax);
        }
        return ans;
    }
};
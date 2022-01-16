// you can use includes, for example:
#include <algorithm>
#include <unordered_set>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unordered_set<int> uset;
    int ans = 1;
    for(uint i = 0; i < A.size(); i++){
        if(A[i] < 0){
            continue;
        }
        else if(uset.insert(A[i]).second == true){
            while(uset.find(ans) != uset.end()){
                ans++;
            }
        }
    }
    return ans;
}

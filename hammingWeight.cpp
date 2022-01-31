class Solution {
public:
    int hammingWeight(uint32_t n) {
        int oneBits = 0;
        uint32_t mask = 1;
        
        for(uint32_t i = 0; i < 32; i++){
            if((n & mask) != 0){
                oneBits++;
            }
            mask = mask<<1;
        }
        return oneBits;
    }
};
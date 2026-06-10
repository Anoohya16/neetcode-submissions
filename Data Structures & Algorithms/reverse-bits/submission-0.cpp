class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i=0;
        int k=21;
        uint32_t ans=0;
        int c;
        for(int i=0;i<32;i++){
            c=(n &1);
            ans=(ans<<1)|c;
            n>>=1;
        }
        return ans;
    }
};

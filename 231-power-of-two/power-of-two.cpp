class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        return 0;
        for(int i=n;i!=1;i/=2){
            if(i%2==1)
            return 0;
            
        }
        return 1;
    }
};
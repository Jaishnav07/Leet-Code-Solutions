class Solution {
public:
    int reverse(int x) {
        int ans=0,rem,m=10;
        for(int i=x;i!=0;i/=10){
            rem=i%10;
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return 0;
            }
            ans=(ans*m)+rem;
        }
        return ans;
    }
};
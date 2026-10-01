class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        long long ans=0,m=1;
        while(n!=0){
            int rem;
            rem=n%2;
            rem^=1;
            ans=ans+(rem*m);
            n=n/2;
            m*=2;

        }
        return ans;
    }
};
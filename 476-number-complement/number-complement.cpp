class Solution {
public:
    int findComplement(int num) {


        if(num==0){
            return 1;
        }
        long long ans=0,m=1;
        while(num!=0){
            int rem;
            rem=num%2;
            rem^=1;
            ans=ans+(rem*m);
            num=num/2;
            m*=2;

        }
        return ans;
    }
};
        
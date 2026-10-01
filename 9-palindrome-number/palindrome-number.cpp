class Solution {
public:
    bool isPalindrome(int x){
        if (x<0){
            return 0;
        }
        if(x>INT_MAX || x<INT_MIN){
            return 0;
        }

    
long long ans=0;
int rem,m=1;

for(int i=x;i!=0;i/=10){ 
rem=i%10;
ans=(ans*10)+rem;

}
if(ans==x){
    return true;
}else{
    return false;
}

}
};
          
  
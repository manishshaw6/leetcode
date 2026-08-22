class Solution {
public:
    bool checkDivisibility(int n) {
        int a=n;
        int sum=0,prod=1;
        while(n!=0){
            int r=n%10;
            sum=sum+r;
            prod=prod*r;
            n=n/10;
        }
        int res=a%(sum+prod);
        if(res==0)return true;
        return false;
    }
};
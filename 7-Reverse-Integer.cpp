class Solution {
public:
    long reverse(int x) {
       int r;
       long long s=0;
        while(x!=0)
        {
            r=x%10;
            s=(s*10)+r;
            x=x/10;
        }
        if(s>INT_MAX || s<INT_MIN){
            return 0;
        }
        else return s;
    }
};
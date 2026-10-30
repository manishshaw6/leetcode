class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long res=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0)nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i<n/2){
                res=res-nums[i]*nums[i];
            }
            else
            res=res+nums[i]*nums[i];
        }
        return res;
    }
};
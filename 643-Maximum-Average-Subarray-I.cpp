class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,maxi=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        maxi=sum;
        for(int i=k;i<nums.size();i++){
            sum=sum-nums[i-k]+nums[i];
            maxi=max(sum,maxi);
        }
        return (double)maxi/k;

    }
};
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s(arr.begin(),arr.end());
        int zcount=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)zcount++;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                if(zcount>1){
                    return true;
                }
            }
            else if(s.count(arr[i]*2))return true;
        }
        return false;
        
    }
};
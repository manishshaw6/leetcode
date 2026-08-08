class Solution {
public:
    bool isVowel(char a){
        a=tolower(a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')return true;
        return false;
    }
    string reverseVowels(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(!isVowel(s[l]))l++;
            if(!isVowel(s[r]))r--;
            if(isVowel(s[l])&&isVowel(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};
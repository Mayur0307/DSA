class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int ans=0,curAns=0;
        for(int i=0;i<n;i++){
            curAns=(columnTitle[i]-'A')+1;
            ans=ans*26+curAns;
        }
    return ans;
    
    }
    
};
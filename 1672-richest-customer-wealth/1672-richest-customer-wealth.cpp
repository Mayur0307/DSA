class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        int curMax;
        for(int i=0;i<accounts.size();i++){
            curMax=0;
            for (int j=0;j<accounts[i].size();j++){
                curMax+=accounts[i][j];
            }
            if(curMax>max){
                max=curMax;
            }
        }
        return max;
        
    }
};
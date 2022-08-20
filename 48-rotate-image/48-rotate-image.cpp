class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // int j=n-1;
        for (int i=0;i<n;i++){
            vector<int> cur;
            cout<<i;
            for(int j = n-1;j>=0;j--){
                // cout<<matrix[i][j]<<" ";
                cur.push_back(matrix[j][i]);
            }
            
            matrix.push_back(cur);
        }
        
         matrix.erase(matrix.begin(),matrix.begin()+(n));
        
    }
};
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void helper(int i,vector<int> &arr,int N,int curSum,vector<int> &ans){
        if(i==N){
            ans.push_back(curSum);
            return;
        }        
        
        //pick
        helper(i+1,arr,N,curSum+arr[i],ans);
        
        //notpick
        helper(i+1,arr,N,curSum,ans);
        return;
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        // set<int>ans;
        vector<int>ans;
        helper(0,arr,N,0,ans);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
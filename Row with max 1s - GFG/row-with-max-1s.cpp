//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max=0;
	    int maxi=-1;
	    for(int i=0;i<n;i++){
	        int sum=0;
	        for(int j=0;j<m;j++){
	            sum+=arr[i][j];
	        }
	        if(sum>max){
	            max=sum;
	            maxi=i;
	        }
	       // cout<<max<<maxi<<endl;
	    }
	    return maxi;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
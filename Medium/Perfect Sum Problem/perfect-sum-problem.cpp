//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// don't copy pase understand the concept 

#define mod 1000000007
class Solution{
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
     vector<vector<long long >>dp(n + 1 , vector<long long>(sum + 1 , 0));
     dp[0][0] = 1;
     
    for(int i=1;i<sum+1;i++) 
      dp[0][i] = 0;
    
    for(int i=1;i<n+1;i++) {
        for(int j=0;j<sum+1;j++){
            // not include the element 
            if(arr[i - 1] > j)
                {
                    dp[i][j] = dp[i-1][j]%mod;
                }
            // include the element 
                else
                {
                    dp[i][j] = (dp[i-1][j]%mod + dp[i-1][j-arr[i-1]]%mod)%mod;
                }
        }
    }
     return dp[n][sum];   
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
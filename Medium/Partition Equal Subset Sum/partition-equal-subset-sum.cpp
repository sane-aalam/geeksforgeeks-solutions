//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
   bool subsetSum(int arr[],int n, int sum){
       int dp[n+1][sum+1];
       
          for(int i =0; i<n+1; i++){
           for(int j=0; j<sum+1; j++){
               if(i==0){
                   dp[i][j] = false;
               }
               if(j==0){
                   dp[i][j] = true;
               }
           }
       }
       
       // subset sum code variation 
       for(int i = 1; i<n+1; i++){
           for(int j = 1; j<sum+1; j++){
             if(arr[i-1] <= j){
                 dp[i][j] = dp[i-1][j] or dp[i-1][j-arr[i-1]];
             }else{
                 dp[i][j] = dp[i-1][j];
             }
           }
       }
       // return calculation of the all the sub-problem into the last-col last row
      return dp[n][sum];
   }
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        
        for(int i = 0; i<N; i++){
            sum +=arr[i];
        }
        
        if(sum % 2 == 0){
           return subsetSum(arr,N,sum/2);
        }else{
            return false;
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
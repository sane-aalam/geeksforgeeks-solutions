//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int fun1(int arr[],int n, int x){
        int start = 0;
        int end = n - 1;
        int mid = start + (end- start)/2;
        
        int result = -1;
        while(start <= end){
            if(arr[mid] == x){
                result = mid;
                end = mid -1;
            }else if(arr[mid] < x){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end- start)/2;
        }
        return result;
    }
    
    int fun2(int arr[],int n, int x){
        int start = 0;
        int end = n - 1;
        int mid = start + (end- start)/2;
        
        int result = -1;
        while(start <= end){
            if(arr[mid] == x){
                result = mid;
               start = mid + 1;
            }else if(arr[mid] < x){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end- start)/2;
        }
        return result;
    }
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int first = fun1(arr,n,x);
        int last = fun2(arr,n,x);
        
        if(first == -1 && last == -1){
            return {first,last};
        }else{
            return {first,last};
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
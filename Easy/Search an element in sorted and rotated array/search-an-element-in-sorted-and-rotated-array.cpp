//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends



int getPivot (vector<int> arr, int n){
   int start = 0, end = n - 1;
   int mid = start + (end - start) / 2;
   while ( start < end){
       if (arr[mid] >= arr[0]){
           start = mid + 1;
       }
       else{
           end = mid;
       }
       mid = start + (end - start) / 2;
   }
   return start;
}

int binarySearch (vector<int> arr, int s, int e, int k){
   int start = s, end = e, mid = start + (end - start) / 2;
   while ( start <= end){
       if (arr[mid] == k){
           return mid;
       }
       else if (k > arr[mid]){
           start = mid + 1;
       }
       else{
           end = mid - 1;
       }
       mid = start + (end - start) / 2;
   }
   return -1;
}

int Search(vector<int> arr, int k)
{
    int n = arr.size();

    // find out the minielement index value - called pivot index value 
    int pivot = getPivot (arr, n);
    
   if ( k >= arr[pivot] && k <= arr[n-1]){
       return binarySearch(arr,  pivot, n - 1, k);
   }
   else{
       return binarySearch(arr, 0, pivot - 1, k);
   }
}
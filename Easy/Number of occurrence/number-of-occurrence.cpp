//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
private:
   int occurrenceFirst(int arr[],int n, int target){
       
       int start = 0;
       int end = n - 1;
       
       int mid = start + (end - start)/2;
       
       int result = -1;
       
       while(start <= end){
           if(arr[mid] == target){
               result = mid;
               end = mid - 1;
           }else if(arr[mid] < target){
               start = mid + 1;
           }else{
               end = mid - 1;
           }
           // we have to update the mid index
           mid = start + (end - start)/2;
       } 
       return result;
   }
   int occurrenceLast(int arr[],int n, int target){
       
       int start = 0;
       int end = n - 1;
       
       int mid = start + (end - start)/2;
       
        int result = -1;
       
       while(start <= end){
           if(arr[mid] == target){
               result = mid;
               start = mid + 1;
           }else if(arr[mid] < target){
               start = mid + 1;
           }else{
               end = mid - 1;
           }
           // we have to update the mid index
           mid = start + (end - start)/2;
       } 
       return result;
   }
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int firstPostion = occurrenceFirst(arr,n,x);
	    int lastPostion = occurrenceLast(arr,n,x);
	    
	    int numberOccurrence = lastPostion - firstPostion + 1;
	    
	    if(lastPostion == -1 && firstPostion == -1){
	        return 0;
	    }else{
	        return numberOccurrence;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
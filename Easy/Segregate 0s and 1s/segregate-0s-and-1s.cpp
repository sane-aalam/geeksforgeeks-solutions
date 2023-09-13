//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


// bruthforce appraoch - use sort method
// better apparoch - store the 0,1 into the vector
// use Two pointer Algorithm (best)


class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int start = 0;
        int end = n - 1;
        
        while(start < end){
            if(arr[start] == 0 && start<end){
                start ++;
            }else if(arr[end] == 1 && start<end){
                end --;
            }else if(arr[start] != 0 && arr[end] != 1 && start < end){
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start ++;
                end --;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
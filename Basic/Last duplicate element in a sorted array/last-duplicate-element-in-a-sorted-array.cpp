//{ Driver Code Starts
// To print last duplicate element and its
// index in a sorted array
#include<bits/stdc++.h>
using namespace std;

vector<int> dupLastIndex(int arr[], int n) ;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> v;
        v = dupLastIndex(a,n);
        for(int i:v)
            cout << i << " ";
        cout << endl;
        
    }
return 0;
}


// } Driver Code Ends


vector<int> dupLastIndex(int arr[], int n) {
    // Complete the function
        // Complete the function
//     vector<int>nums;
//     unordered_map<int,int>m;
    
//     // storing the mapping the array element
//     for(int i=0;i<n;i++){
//         m[arr[i]]++;
//     }
    
//     // checkout which number comming greater and equal to 2 times
//     // we have to store number with index value 
//     for(int i=n-1;i>=0;i--){
//         if(m[arr[i]]>=2){
//             nums.push_back(i);
//             nums.push_back(arr[i]);
//             return nums;
//         }
//     }
//   return {-1}; 


    for(int i = n-1; i>=0; i--) {
        // cur
        if(arr[i] == arr[i-1]) {
            return {i , arr[i]};
        }
    }
    return {-1};

}

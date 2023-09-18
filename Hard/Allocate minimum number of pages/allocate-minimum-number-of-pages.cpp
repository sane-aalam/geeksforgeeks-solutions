//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    private:
    bool isPossibleToAllocate(int arr[],int n, int student, int capacityToRead){
        
        int studentCount = 1;
        int sum = 0;
        
        for(int i = 0; i<n; i++){
            if(sum + arr[i] > capacityToRead){
                studentCount = studentCount + 1;
                sum = arr[i];
            }else{
                sum = sum + arr[i];
            }
        }
        
        // Allocation possible between 2 student YES
        if(studentCount <= student){
            return true;
        }
        
        return false;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        
        // EDGE CASE - number of student greater than to array elements
        if(M > N){
            return -1;
        }
        
        //code here
        int maxiElement = INT_MIN;
        int TotalSum = 0;
        
        for(int i = 0; i<N; i++){
            maxiElement = max(maxiElement,A[i]);
            TotalSum += A[i];
        }
        
        int start = maxiElement;
        int end = TotalSum;
        
        int mid = start + (end - start)/2;
        
        int result = -1;
        
        while(start <= end){
            
            if(isPossibleToAllocate(A,N,M,mid) == true){
                result = mid;
                end = mid -1;
            }else{
                start = mid + 1;
            }
            // we have to update the mid value
            mid = start + (end - start)/2;
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
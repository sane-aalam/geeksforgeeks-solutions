//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> result;
        
        // EDGE case - what size is only 1 
        if(n == 1){
            result.push_back(1);
            return result;
        }
        
        // first element of the fib seris and second element of the fib seies we are just storing 
        result.push_back(1);
        result.push_back(1);
        
        for(long long i = 2; i<n; i++){
            long long lastElement = result[i-1];
            long long nextlastElement = result[i-2];
            long long ans = lastElement + nextlastElement;
            result.push_back(ans);
        }
        
        // end of the day we have fibnacci series in the vector of the result 
        return result;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends
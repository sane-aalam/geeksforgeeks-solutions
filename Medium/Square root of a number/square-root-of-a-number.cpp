//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int start = 0;
        long long int end = x;
        
        long long int mid = start + (end - start)/2;
        
        long long int result = -1;
        long long int squre = 0;
        
        while(start <= end ){
            squre = mid * mid;
            
            if(squre == x){
                return mid;
            }else if(squre < x){
                result = mid;
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // update the mid
            mid = start + (end - start)/2;
        }
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends
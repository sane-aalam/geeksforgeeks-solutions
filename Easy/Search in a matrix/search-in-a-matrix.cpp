//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	   
	   // if(arr[mid] == key) return mid;
	   // if(ar[mid] < key) start = mid +1;
	   // if(arr[mid] > key ) end = mid -1;
	   
	    
	    int start = 0;
	    int end = mat[0].size() - 1;
	    
	    int key = X;
	    
	    // not of the boundary the matrix
	    while(start >= 0 && start < N && end >= 0 && end < M ){
	        
	        if(mat[start][end] == key){
	            return 1;
	            
	        }else if(mat[start][end] < key){
	            start ++;
	            
	        }else if(mat[start][end] > key){
	            end --;
	        }
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends
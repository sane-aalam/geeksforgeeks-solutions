//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>> st;
       vector<int> result;
       
       for(int i = 0; i<n; i++){
           
           //case-1 stack is empty
           if(st.size() == 0){
               result.push_back(-1);
           }
           //case-2 stack top is greater 
           else if(st.size() > 0 && st.top().first > price[i]){
               result.push_back(st.top().second);
           }
           //case-3 stack top is not greater
           else if(st.size() > 0 && st.top().first <= price[i]){
               while(st.size() > 0 && st.top().first <= price[i]){
                   st.pop();
               }
               
               if(st.size() == 0){
                   result.push_back(-1);
               }else{
                   result.push_back(st.top().second);
               }
           }
           st.push({price[i],i});
       }
       
       for(int i = 0; i<n; i++){
           result[i] = i - result[i];
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends
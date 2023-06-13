//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
          // Your code here
        vector<long long> right;
        vector<long long> left;
        vector<long long> width(n);
        vector<long long> area(n);
        stack <pair<long long,long long>> stk;
        
        for(long long i = n-1 ; i >= 0 ; i--){
            while(!stk.empty() && stk.top().first >= arr[i]){
                stk.pop();
            }
            if(stk.empty()){
                right.push_back(n);
            }else{
                right.push_back(stk.top().second);
            }
            stk.push(make_pair(arr[i],i));
        }
        reverse(right.begin(),right.end());
        
        while(!stk.empty()) stk.pop();
        
        for(long long i = 0 ; i < n ; i++){
            while(!stk.empty() && stk.top().first >= arr[i]){
                stk.pop();
            }
            if(stk.empty()){
                left.push_back(-1);
            }else{
                left.push_back(stk.top().second);
            }
            stk.push(make_pair(arr[i],i));
        }
        for(long long i = 0 ; i < n ; i++){
            width[i] = right[i] - left[i] - 1;
        }
        for(long long i = 0 ; i < n ; i++){
            area[i] = arr[i] * width[i];
        }
        long long max = INT_MIN;
        for(auto i: area){
            if(i > max){
                max = i;
            }
        }
        return max;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends
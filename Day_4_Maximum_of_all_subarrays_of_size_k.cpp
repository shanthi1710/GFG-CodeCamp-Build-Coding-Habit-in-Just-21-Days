//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>v;
       int max=0;
       int i=0;
       int j=k-1;
       max=*max_element(arr, arr + k);
       v.push_back(max);
       i++;
       j++;
       while(j<n){
           if(arr[i-1]!=max){
               if(arr[j]>max)
               max=arr[j];
               v.push_back(max);
           }
          else  {
              if(arr[j]>max)
              max=arr[j];
              else
              max=*max_element(arr+i, arr+(j+1));
              
              v.push_back(max);
          }
           i++;
           j++;
       }
          
      
    
    return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
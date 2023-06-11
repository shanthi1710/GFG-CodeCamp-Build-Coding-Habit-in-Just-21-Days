#include<bits/stdc++.h>
using namespace std;
 

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jumps=0;
    int pos=0;
    while(pos<n)
      {
        if(arr[pos]==0)
        return -1;
        else 
        {
            
            pos=pos+arr[pos];
            jumps++;
        }
      }
      return jumps;
    }
};


 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
 
 
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
      
    int majorityElement(int a[], int size)
    {
        
        int el=0,cnt=0;
        
        for(int i=0;i<size;i++)
        {
            if(cnt==0)
                el=a[i];
            if(el==a[i])
                cnt++;
            else
                cnt--;
        }
        int cnt2=0;
        for(int i=0;i<size;i++)
        {
            if(el==a[i])
                cnt2++;
            if(cnt2>size/2)
                return el;
        }
        return -1;
        
    }


};
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends
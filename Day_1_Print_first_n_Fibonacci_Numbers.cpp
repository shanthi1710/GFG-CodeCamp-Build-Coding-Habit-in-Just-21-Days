#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
     
    vector<long long> printFibb(int n) 
    {
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            if(i==1||i==0)
            v[i]=1;
            else
               v[i]=(v[i-1]+v[i-2]);
        }
        return v;
    }
};
int main()
 {
      
    int t;
    cin>>t;
    while(t--)
    {
         
        int n;
        cin>>n;
        Solution obj;
        vector<long long> ans = obj.printFibb(n);
        
         
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}
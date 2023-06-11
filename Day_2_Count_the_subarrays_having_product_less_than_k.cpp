 
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int l=0, r=0, ans=0;
        long long prod=1;
        for( ; r<n; r++){
            prod*=a[r];
            for( ; prod>=k; l++){
                prod/=a[l];
            }
            ans+=r-l+1;
        }
        return ans;
    }
};

 
int main() {
    int t;
    cout<<"Enter your test case-"<<endl;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

 
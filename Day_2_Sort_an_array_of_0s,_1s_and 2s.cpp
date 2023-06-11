 
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int i=0;
        int j=n-1;
        int mid=0;
        while(mid<=j){
            if(a[mid]==2){
            swap(a[mid],a[j]);
            j--;
            }
             if(a[mid]==0){
                  swap(a[mid],a[i]);
            i++;
            mid++;
            }
            if(a[mid]==1) mid++;
        }
    }
    
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
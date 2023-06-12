#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        string str="";
        while(head != NULL)
        {
            str+=head->data-'0';
            head=head->next;
             
        }
        int l=0,r=str.size()-1;
        while(l<r)
        {
            if(str[l++] != str[r--])
            {
                return false;
            }
        }
        return true;
    }
};



 
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
         
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
         
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

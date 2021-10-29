#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Listnode{
    int val;
    Listnode *next;
};
int main()
{
    int n;
    cin>>n;
    Listnode *head,*temp,*nn;
    head=new Listnode;
    temp=head;
    cin>>temp->val;
    while(n-1)
    {
        nn=new Listnode;
        temp->next=nn;
        temp=temp->next;
        cin>>temp->val;
        n--;
    }
    while(head!=NULL)
    {
        cout<<head->val<<' ';
        head=head->next;
    }
}

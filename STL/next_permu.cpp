#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={1,4,53};
     int n=sizeof(ar)/sizeof(ar[0]);
     sort(ar,ar+n);   
     do{
         for(int i=0;i<n;i++) cout<<ar[i]<<" ";cout<<"\n";
     }while(next_permutation(ar,ar+n));
    return 0;
}
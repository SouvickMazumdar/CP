//https://codeforces.com/problemset/problem/450/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int> ar;int max=INT_MIN,pos=-1,k;
    for(int i=0;i<a;i++)
    {
        cin>>k;
        if(max<=k)
        {
            max=k;
            pos=i;
        }
    }
    cout<<pos+1<<endl;
return 0;
}
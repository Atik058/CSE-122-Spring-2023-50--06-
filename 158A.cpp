#include<iostream>
using namespace std;
int main()
{
    int n,k,i,a[100],c=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>0&&a[i]>=a[k])
            c++;
    }
    cout<<c;
    return 0;
}

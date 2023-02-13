#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, j=0, n, p=0;
    string s;
    string a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>> s;
        if (s[0]!='Y'&&s[0]!='y')
        {
            a[j]='n';
            j++;

        }
        else if(s[1]!='E'&&s[1]!='e')
        {
            a[j]='n';
            j++;

        }
        else if(s[2]!='S'&&s[2]!='s')
        {
            a[j]='n';
            j++;
        }
        else
        {
            a[j]='y';
            j++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]=='y')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;


}

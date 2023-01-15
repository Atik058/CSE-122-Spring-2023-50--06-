#include <iostream>
using namespace std;
int main()
{
    int n,x=0,i,c=0;
    cout<<"Enter the number of problems`";
    cin>>n;

    int ns[n*3];
    for(i=1;i<=n*3;i++)
    {
        cin>>ns[i];

    }
    for(i=1;i<=n*3;i++)
    {
        x=x+ns[i];
        if(i%3==0)
        {
            if(x>1)
            {
                c++;
            }
            x=0;
        }
    }
    cout<<c;
    return 0;
}

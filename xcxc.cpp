#include<iostream>
using namespace std;
int main()
{
   int i,temp=0,r,sum=0;
   for(i=1;i<=10000;i++){
   temp=i;
   while(temp!=0){
    r=temp%10;
    sum=sum+r*r*r;
    temp=temp/10;
   }
   if(sum==i){
    cout<<"ARMSTRONG number is:"<<i<<endl;
   }
   sum=0;
   }

}

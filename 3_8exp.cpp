#include<iostream.h>
void main()
{
int a,b,y;
cout<<"Ender a and b��"<<endl;
cin>>a>>b;
if(a%b==0)
{	
y=a/b;
cout<<a<<"/"<<b<<"="<<y<<endl;
}
else
{
y=a/b;
cout<<a<<"/"<<b<<"="<<y<<"��"<<a%b<<endl;
}
}
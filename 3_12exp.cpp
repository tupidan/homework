#include <iostream.h>
void main()
{
int x;
cout<<"Please input x:"<<endl;
cin>>x;
if(x>=1000)
cout<<":����ֵ��1000����"<<endl;
else
if(x>=100)
cout<<":����ֵ��100999"<<endl;
else
if(x>=10)
cout<<":����ֵ��1099"<<endl;
else
cout<<":����ֵС��10"<<endl;
}
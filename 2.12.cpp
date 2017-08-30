#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,d;
cout<<"enter principal";
cin>>a;
cout<<"enter time";
cin>>b;
cout<<"enter rate";
cin>>c;
d=a*pow((100+(c/2))/100,2*b);
cout<<"the compound interest is"<<d;
return 0;
}



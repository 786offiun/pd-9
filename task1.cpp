#include<iostream>

using namespace std;
int checkindex(string name);
main()
{ 
string name;
int result;
int price;
cout<<"enter the movi name:";
cin>> name;
result=checkindex(name);
if(result%2==0)
{
  price=500-(500*0.1);
}
else
{


  price=500-(500*0.05);
}
cout<<"price is :"<<price;
}
int checkindex(string name)
{
  string movi[5]={"movione","movitwo","movithree","movifour","movifive"};
for(int index=0; index<5; index++ )
{
    if(movi[index]==name)
    {
      return index;
    
    }



}
}
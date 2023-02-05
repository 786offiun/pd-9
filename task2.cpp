#include<iostream>

using namespace std;
int checkindex(string name);
main()
{  int quantity,price;
    string name;
string fruit[4]={"peach","apple","0gova","watermelon"};
int pric[4]={60,70,40,30 };
cout<<"enter the name of fruit"<<endl;
cin>>name;
cout<<"enter the quantity:"<<endl;
cin>>quantity;
if(name=="peach")
{
  
price=quantity*pric[0];



}

if(name=="apple")
{
  
price=quantity*pric[1];



}
if(name=="gova")
{
  
price=quantity*pric[2];



}
if(name=="watermelon")
{
  
price=quantity*pric[3];



}
cout<<price;
}
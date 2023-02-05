#include<iostream>

using namespace std;
int checkindex(string name);
main()
{ 
int size=10000;
int array[size];
int time;
cout<<"enter the no of tranforms:";
cin>>time;
int idx=0;
for(int index=0; index<size; index++)
{     cout<<"if you wnat to enter valur press y and if you not enter valur press z"<<endl;
       char a;
       cin>>a;
       if(a=='y')
       {
     cout<<"enter the valur"<<" "<<index+1<<endl;
     cin>>array[index];
       if(array[index]%2==0)
{

array[index]=array[index]-(time*2);



}
else
{

array[index]=array[index]+(time*2);

}
idx=idx+index;
       }
       else
       
       {
         break;
       } 

}
 


for(int index=0; index<idx; index++)
{  

cout<<array[index];
cout<<endl;

}
 












}
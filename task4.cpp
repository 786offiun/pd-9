#include<iostream>

using namespace std;
int checkindex(string name);
main()
{ 
int size=10000;
int array[size];
bool check=false;
for(int index=0; index<size; index++)
{     cout<<"if you wnat to enter valur press y and if you not enter valur press z"<<endl;
       char a;
       cin>>a;
       if(a=='y')
       {
     cout<<"enter the valur"<<" "<<index+1<<endl;
     cin>>array[index];
    
       }
       else
       
       {
         break;
       } 

}



for(int index=0; index<size; index++)
{ 
    if(array[index]==7)
    {

        check=true;
        break;
    }
    
 
}

if(check==true)
{
    cout<<"boom";
}
else
{
   cout<<"7 is not present ";
}


}
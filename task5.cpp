#include<iostream>

using namespace std;
int checkindex(string name);
main()
{
     string array[4];
          for(int index=0; index<4; index++)
     {
     cout<<"enter a string :";
     cin>>array[index];
     }

  
          if(array[0]==array[1]&&array[1]==array[2]&&array[2]==array[3])        
     
    {
        cout<<"tarue";
    }
else
{
    cout<<"false";
}





}
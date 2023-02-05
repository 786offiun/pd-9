#include<iostream>

using namespace std;
int checkindex(string name);
main()
{ 
 int index=0;
string name;
cout<<"enter the line:";
getline(cin,name);
while(name[index] != '\0')
{
   
      index=index+1;



}
if(index%2==0)
{


     cout<<"true";
}
else
{

    cout<<"false";
}

}
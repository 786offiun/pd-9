#include<iostream>

using namespace std;
int checkindex(string name);
main()
{ 
    string s1, s2;
    cout<<"enter the firs string :";
    cin>>s1;
    cout<<"enter thr second string :";
    cin>>s2;
    int idx=0;
    int count=0;
    int no=0;
    while(s1[idx]!='\0')
    {   
       count=count+1;
        idx=idx+1;
    }
cout<<count<<endl;
int a=0;
for(int a=0; a<count; a++)
{

     for(int b=0; b<count; b++)
     {
           if(s1[a]==s2[b])
           {

              no=no+1;
              s2[b] =' ';
           }


     }







}



cout<<no-1;



}
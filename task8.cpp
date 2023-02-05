#include<iostream>

using namespace std;
int checkindex(string name);
main()
{   int n; 
  
  int counter=0;
  cout<<"eneter the no  color;";
  cin>>n;
  int nocolor,nomove,total;
  string color[n];
  for(int i=0; i<n; i++)
  {
     cout<<"enter the color name:";
     cin>>color[i];

  }



  for(int i=0; i<n; i++)
  {
     if(color[i]!=color[i+1] )
{
    counter=counter+1;



}
  }

nocolor=n*2;
nomove=counter*1;
total=nocolor+nomove;
cout<<total-1;












}
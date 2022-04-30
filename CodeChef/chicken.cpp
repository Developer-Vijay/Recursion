#include<iostream>

using namespace std;

int main(){

int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int x,y,z;
   
    
    cin>>x>>y>>z;
  int chic=z-x;
  int duc=z-y;
  int chans=chic+x;
  int ducans=duc+y;

if(z%x==0 && y%z==0)
{
    cout<<"Any"<<endl;
}

else   if(z%x==0)
  {
      cout<<"Chicken"<<endl;
  }
  else if(z%y==0)
  {
      cout<<"Duck"<<endl;
  }
  
  else{
      cout<<"None"<<endl;
  }
 
}
    return 0;
}
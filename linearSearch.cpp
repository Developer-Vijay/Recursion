#include<iostream>

using namespace std;
int finded(int arr[],int n,int find){
    if(n==0)
    {
        return 0;
    }
if(arr[0]==find)
{
    return arr[0];
}
if(arr[0] !=find)
{
    return -1;
}
else{
int ans=finded(arr+1,n-1,find);
  return  ans;
    
}
}



int main(){
int n,find;
cin>>n>>find;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int index=finded(arr,n,find);
cout<<finded<<endl;
    return 0;
}
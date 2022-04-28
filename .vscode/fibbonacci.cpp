#include<iostream>

using namespace std;

int fibbonacci(int n)
{
if(n==0)
{
return 0;
}

if(n==1)
{
return 1;
}


int ans=fibbonacci(n-1) +fibbonacci(n-2);
return ans;


}

int main(){

int n;
cin>>n;

cout<<fibbonacci(n)<<endl;
    return 0;
}
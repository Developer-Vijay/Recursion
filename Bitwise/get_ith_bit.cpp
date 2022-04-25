#include<iostream>

using namespace std;

int getithBit(int n,int i)
{
int mask=(1<<i);
return (n & mask) > 0 ? 1 : 0;   
}

int main(){

int n=5,i;
cin>>i;
cout<<getithBit(n,i)<<endl;

    return 0;
}
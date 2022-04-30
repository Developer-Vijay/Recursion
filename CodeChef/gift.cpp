#include<iostream>

using namespace std;

int main(){

int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n;
    cin>>n;
int q=n/5;
int r=n%5;


cout<<q*4+r<<endl;
}
    return 0;
}
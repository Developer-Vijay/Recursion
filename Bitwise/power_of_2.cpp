#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;

if((n &(n-1))==0)
{
    cout<<"Yes it is power of 2"<<endl;
}
else{
    cout<<"No it is not the powert of 2"<<endl;
}
    return 0;
}
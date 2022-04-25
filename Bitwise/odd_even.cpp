#include<iostream>
#include<algorithm>
using namespace std;

int main(){
// bitwise
int x;
cin>>x;
if(x&1)
{
    cout<<"odd"<<endl;
}
else{
    cout<<"Even"<<endl;
}
    return 0;
}
#include<iostream>

using namespace std;

int factorail(int n)
{
    if(n==1)
    return 1;

    // factorail(n-1);
    return n*factorail(n-1);
    
}

int main(){
    int ans=factorail(1);
    cout<<ans<<endl;
    return 0;
}
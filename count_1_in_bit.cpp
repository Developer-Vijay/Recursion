#include<iostream>

using namespace std;

int count_bits_hack(int n)
{
    int ans=0;
    while(n>0)
    {
        n=n&(n-1);
        ans++;
    }
    return ans++;
}
int countBits(int n)
{
    int count;

    if((n&1))
    {
        count++;
    }
    else{
        n>>1;
    }
    return count;
    
}

int main(){
int n;
cin>>n;

cout<<count_bits_hack(n)<<endl;
    return 0;
}
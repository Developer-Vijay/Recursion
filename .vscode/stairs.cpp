#include<iostream>

using namespace std;

int nStairs(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }

    int ans=nStairs(n-1)+nStairs(n-2);

    return ans;
}
int main()
{
int n;
cin>>n;
cout<<nStairs(n)<<endl;
    return 0;
}
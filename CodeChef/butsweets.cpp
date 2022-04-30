#include<iostream>

using namespace std;

int main(){

int t;
cin>>t;

for(int i=0;i<t;i++)
{
    int n,r;
    cin>>r>>t;
    int arr[n];
    int cb=0;
    int count=0;
    int amount=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(amount<=r)
            {
              amount=arr[i]-r+1;
            }
            
        }
    }
}
    return 0;
}
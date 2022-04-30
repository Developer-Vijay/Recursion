#include<iostream>

using namespace std;

bool isSorted(int arr[],int n)
{
if(n==0 || n==1)
{
    return true;
}
if(arr[0]>arr[1])
{
    return false;
}
else{
    bool ans=isSorted(arr+1,n-1);
    return ans;
}
}
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){4
    cin>>arr[i];
}
bool ans=isSorted(arr,n);
if(ans)
    {
        cout<<"is Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}
#include<iostream>

using namespace std;

void sort(int arr[],int n){

for(int i=0;i<n-1;i++)
{


int current=i;

for(int j=i+1;j<n;j++)
{
    if(arr[j]<arr[current])
    current=j;
}

swap(arr[i],arr[current]);
}
}

void printArrays(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[]={5,7,3,2,56,35};

    int n=sizeof(arr)/sizeof(arr[0]);

printArrays(arr,n);

sort(arr,n);
printArrays(arr,n);



    return 0;
}
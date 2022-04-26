#include<iostream>
#include<vector>
using namespace std;

int unique(vector<int>v)
{
    int n=v.size();
int xor_c=0;
for(int i=0;i<n;i++)
{
    xor_c=xor_c ^ v[i];
}
return xor_c;

}

int main(){

vector<int>v;
int n;
cin>>n;
int num;

for(int i=0;i<n;i++)
{
    cin>>num;
    v.push_back(num);
}

cout<<unique(v)<<endl;
    return 0;
}
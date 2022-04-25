#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> &v,int temp)
{
    if( (v[v.size()]==1 || v[v.size()-1] <=temp))
    {
        v.push_back(temp);
        return;
    }
    int value=v[v.size()-1];
    v.pop_back();
    // here size koh reduce kardiya hai 
    insert(v,temp);
    v.push_back(value);
    return;
    
}
void sort(vector<int> &v)
{
    if(v.size()==1)
    {
        return;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    // here size koh reduce kardiya hai
    sort(v);
    insert(v,temp);


}


int main()
{
    int n;
    cin>>n;
    vector<int> v;

    int temp;

    for(int i=0;i<n;i++)
   {
    cin>>temp;
    v.push_back(temp);
    
   }
sort(v);

for(int i =0;i<n;i++)
{
    cout<<v.at(i)<<" ";
}


    return 0;
}
#include<iostream>
#include<stack>
using namespace std;


void sortStack(stack<int> &s)
{
if(s.top()==-1)
{
    return;
}
int value=s.top();
s.pop();
sortStack(s);
insert(s,value);
}

void insert(stack<int> &s,int value)
{
//f(s.top()==-1 ||s.)
}

int main(){

stack<int> s;

int n;
cin>>n;
int temp;
for(int i=0;i<n;i++)
{
    cin>>temp;
    s.push(temp);
}

    return 0;
}
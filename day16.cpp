#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v;
cout<<"Capacity="<<v.capacity()<<endl;
v.push_back(10);
cout<<"Capacity="<<v.capacity()<<endl;
v.push_back(12);
cout<<"Capacity ="<<v.capacity()<<endl;

v.push_back(14);
cout<<"Capacity="<<v.capacity()<<endl;
cout<<"size="<<v.size()<<endl;

cout<<"first element ="<<v.front()<<endl;
cout<<"last element ="<<v.back()<<endl;

cout<<"before pop"<<endl;
for(int i:v)
{
cout<<i<<" ";
}
cout<<endl;
v.pop_back();
cout<<"after pop="<<endl;
for(int i:v)
{
cout<<i<<" ";
}
cout<<"before clear size="<<v.size()<<endl;
cout<<"after clear size="<<endl;
}

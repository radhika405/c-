#include<iostream>
#include<array>
using namespace std;
int main()
{
    //normal array
    //int a[]={};
    //sti array
    array<int,4> a={3,4,2,7};
    int size = a.size();
    cout<<size<<endl;
    for (int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"element at index="<<a.at(3)<<endl;
    bool truefalse=a.empty();
    cout<<"true of false="<<truefalse;
    bool empty=a.empty();
    cout<<"is array is empty or not ="<<empty;
    cout<<"first element ="<<a.front()<<endl;
    cout<<"last element="<<a.back()<<endl;
    return 0;
}
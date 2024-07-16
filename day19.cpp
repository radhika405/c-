#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("ajay");
    s.push("ajab");
    s.push("gajab");
    s.push("sajab");
    cout<<"top element :"<<s.top()<<endl;
    s.pop();
    cout<<"element after pop:"<<s.top()<<endl;
    return 0;
}


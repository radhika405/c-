#include<iostream>
using namespace std;
void example(){
    static int count = 0;
    count++;
    cout<<"count:"<<count<<endl;
}
int main ()
{
    example();
    return 0;
}
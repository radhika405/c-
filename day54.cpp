#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream my_file("example.txt", ios::app);
    if(!my_file){
        cout<<"failed to open the file for appending."<<endl;
        return 1;
    }
my_file<<"subhash 40"<<endl;
my_file<<"rutuja 50"<<endl;
my_file<<"rajesh 60"<<endl;
my_file.close();
return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream my_file("example.txt");
    if(!my_file){
        cout<<"error: unable to open the file."<<endl;
        return 1;
    }

my_file<<"mohan 30"<<endl;
my_file<<"mayuri 40"<<endl;
my_file<<"jitu 50"<<endl;
my_file.close();
return 0;
}

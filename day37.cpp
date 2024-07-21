#include<iostream>
using namespace std;
int main(){
    int arr[8] ={1,0,1,1,0,1,1,1};
    int count = 0;
    int max = 0;
    for(int i= 0;i<=8;i++){
    if (arr[i]==1){
        count++;
    }
    else{
        if(count>max){
            max = count;
        }
        count=0;
    }

}
cout<<" the maximum consecutive ones are:"<<max<<endl;
}


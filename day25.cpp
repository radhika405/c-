#include<iostream>

int main(){
    int x= 10;
    auto modifyx = [x]() mutable {
        x= 20; // this modify the local copy of x; not the original x
        std::cout<<"inside lambda, x="<<x<<std::endl;
    };
    modifyx();
    std::cout<<"outside lambda,x="<<x<<std::endl;
    return 0;
    
}
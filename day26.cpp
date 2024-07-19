#include<iostream>
int main()
{
    auto divide = [](int a, int b) ->double {
        if(b==0){
            return 0;

            
        }
        return static_cast<double>(a) / b;

    };
    std::cout<<"division result:"<<divide(10,2)<<std::endl;
    std::cout<<"division by zero result:"<<divide(10,0)<<std::endl;
    return 0;
}



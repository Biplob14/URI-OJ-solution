#include<iostream>
#include<iomanip>
int main(){
    float x,tax=0.0;
    std::cin>>x;
    if(x>4500.00){
        tax += (x-4500.00)*0.28;
        tax += 1500.00 * 0.18;
        tax += 1000.00 * 0.08;
        std::cout<<std::fixed<<std::setprecision(2)<<"R$ "<<tax<<std::endl;
    }
    else if(x>3000.00){
        tax += (x-3000.00)*0.18;
        tax += 1000.00 * 0.08;
        std::cout<<std::fixed<<std::setprecision(2)<<"R$ "<<tax<<std::endl;
    }
    else if(x>2000.00){
        tax += (x-2000.00)*0.08;
        std::cout<<std::fixed<<std::setprecision(2)<<"R$ "<<tax<<std::endl;
    }
    else
        std::cout<<"Isento"<<std::endl;
    return 0;
}

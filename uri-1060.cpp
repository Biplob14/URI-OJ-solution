#include<iostream>
int main(){
    double x;
    int n=0;
    for(int i=0;i<6;i++){
        std::cin>>x;
        if(x>=0)
            n++;
    }
    std::cout<<n<<" valores positivos"<<std::endl;
    return 0;
}

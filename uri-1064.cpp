#include<iostream>
#include<iomanip>
int main(){
    double x,total=0.0,average=0.0;
    int n=0;
    for(int i=0;i<6;i++){
        std::cin>>x;
        if(x>=0){
            n++;
            total+=x;
        }
    }
    if(total>0.0)
        average = total/n;
    std::cout<<n<<" valores positivos"<<std::endl;
    std::cout<<std::fixed<<std::setprecision(1)<<average<<std::endl;
    return 0;
}

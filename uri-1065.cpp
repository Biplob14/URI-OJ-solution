#include<iostream>
int main(){
    int x,n=0;
    for(int i=0;i<5;i++){
        std::cin>>x;
        if(x==0)
            n++;
        if(x!=0 && x%2==0)
            n++;
    }
    std::cout<<n<<" valores pares"<<std::endl;
    return 0;
}

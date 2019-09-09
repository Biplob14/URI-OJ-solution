#include <iostream>
using namespace std;
int main() {
    float i=0.0,j;
    while(i<2.01){
        for(j=1;j<=3;j++){
            cout<<"I="<<i<<" J="<<j+i<<endl;
        }
        i+=0.2;
        j+=0.2;
    }
    return 0;
}

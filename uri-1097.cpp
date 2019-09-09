#include <iostream>
using namespace std;
int main() {
    int i=1,j=7,k;
    while(i<=9){
        for(k=0;k<=2;k++){
            cout<<"I="<<i<<" J="<<j<<endl;
            j--;
        }
        i+=2;
        j+=5;
    }
    return 0;
}

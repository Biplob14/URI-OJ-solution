#include <iostream>
using namespace std;
int main() {
    int p;
    cin>>p;
    while(p!=2002){
        cout<<"Senha Invalida"<<endl;
        cin>>p;
    }
    cout<<"Acesso Permitido"<<endl;
    return 0;
}

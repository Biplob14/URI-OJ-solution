#include<iostream>
using namespace std;
int main(){
    int n=0,i,g,iw=0,gw=0,draw=0,total=0;
    while(n!=2){
        cin>>i>>g;
        total++;
        if(i>g)
            iw++;
        else if(g>i)
            gw++;
        else
            draw++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>n;
    }
    cout<<total<<" grenais"<<endl;
    cout<<"Inter:"<<iw<<endl;
    cout<<"Gremio:"<<gw<<endl;
    cout<<"Empates:"<<draw<<endl;
    if(iw>gw)
        cout<<"Inter venceu mais"<<endl;
    else if(gw>iw)
        cout<<"Gremio venceu mais"<<endl;
    else
        cout<<"Nao houve vencedor"<<endl;
    return 0;
}

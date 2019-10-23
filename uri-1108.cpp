#include<iostream>
using namespace std;

int main()
{
    int n, i, y;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    y=x[0];
    for(i=0;i<n;i++){
        if(x[i]<y) y=x[i];
    }
    i=1;
    while(x[i]!=y){
        i++;
    }
    cout<<"Menor valor: "<<y<<endl<<"Posicao: "<<i<<endl;
    return 0;
}

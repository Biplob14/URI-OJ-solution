#include<iostream>
using namespace std;

int main()
{
    int t, numb, div, x=0, y=0, i, j;

    cin>>t;

    for(i=0;i<t;i++){
        cin>>numb;
        if(numb == 2){
            cout<<numb<<" eh primo"<<endl;
        }
        else{
        div = numb/2;
        for(j=2;j<=div+1;j++){
            if(numb%j == 0){
                x++;
            }
        }
        if(x>0)
            cout<<numb<<" nao eh primo"<<endl;
        else
            cout<<numb<<" eh primo"<<endl;
        }
        x=0;
    }
}

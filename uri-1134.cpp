#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alco = 0, gaso = 0, die = 0, inp;

    while(true){
    cin>>inp;
    if(inp == 1)
        alco++;
    if(inp == 2)
        gaso++;
    if(inp == 3)
        die++;
    if(inp == 4)
        break;

    else
        continue;
    }
    cout<<"MUITO OBRIGADO"<<endl<<"Alcool: "<<alco<<endl<<"Gasolina: "<<gaso<<endl<<"Diesel: "<<die<<endl;

    return 0;
}

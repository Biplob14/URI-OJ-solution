#include<iostream>
using namespace std;

int main()
{
    int input, inCount=0, evn[5], odd[5], e=0, o=0,outIndex=0;
    string output[15];
    
    while(inCount<15){
        cin>>input;
        
        if(input%2==0){
            evn[e] = input;
            e++;
        }
        else{
            odd[o] = input;
            o++;
        }
        
        if(e==5){
            for (int i=0; i<e;i++) {
                output[outIndex]="par["+to_string(i)+"] = "+to_string(evn[i]);
                outIndex++;
            }
            e=0;
        }
        
        if(o==5){
            for (int i=0; i<o;i++) {
                output[outIndex]="impar["+to_string(i)+"] = "+to_string(odd[i]);
                outIndex++;
            }
            o=0;
        }
        inCount++;
    }
    
    for (int i=0; i<o;i++) {
                output[outIndex]="impar["+to_string(i)+"] = "+to_string(odd[i]);
                outIndex++;
            }
            
    for (int i=0; i<e;i++) {
                output[outIndex]="par["+to_string(i)+"] = "+to_string(evn[i]);
                outIndex++;
            }
    
    for(int out=0;out<15;out++){
        cout<<output[out]<<endl;
    }

    return 0;
}

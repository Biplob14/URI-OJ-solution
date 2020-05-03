#include<iostream>
using namespace std;

void sort_marbel(int arrn[], int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arrn[j-1]>arrn[j]){
            swap(arrn[j], arrn[j-1]);
            j--;
        }
    }
}

int main()
{
    int n, q, flag = -1, cs = 1;
    while(cin>>n>>q){
        if(n==0 && q==0) break;
        int arrn[n], arrq[q];
        for(int i=0; i<n; i++){
            cin>>arrn[i];
        }
        for(int i=0; i<q; i++){
            cin>>arrq[i];
        }
        sort_marbel(arrn, n);   //function to sort array
        /*for(int i=0;i<n;i++){
            cout<<arrn[i]<<" ";
        }*/
        cout<<"CASE# "<<cs<<":"<<endl;
        cs++;
        for(int i=0;i<q;i++){
            for(int j=0;j<n;j++){
                if(arrq[i]==arrn[j]){
                    flag=j;
                    break;
                }
            }
            if(flag == -1){
                cout<<arrq[i]<<" not found"<<endl;
            }else{
                cout<<arrq[i]<<" found at "<<flag+1<<endl;
                flag = -1;
            }

    }
    }

    return 0;
}

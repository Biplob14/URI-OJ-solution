#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int arr[n];
        //array initialization
        for(int i=0; i<n;i++)
            arr[i]=3;

        int z=n;
        int i=0, j=n-1, k=n;
        while(n--){         //n times printing loop


            arr[j]=1;
            if(arr[j+1] == 1)
                arr[j+1] = 3;
            j--;

            arr[i] = 2;
            if(arr[i-1]==2)
                arr[i-1] = 3;
            i++;

            while(k--)
                cout<<arr[k];
            k=z;
            cout<<endl;

        }

    }

    return 0;
}

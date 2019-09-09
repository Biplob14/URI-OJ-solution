#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int item, quantity;
    float total, val;

    cin>>item>>quantity;
    if(item == 1)
        val = 4.00;
    else if(item == 2)
        val = 4.50;
    else if(item == 3)
        val = 5.00;
    else if(item == 4)
        val = 2.00;
    else if(item == 5)
        val = 1.50;

    total = quantity*val;
    printf("Total: R$ %.2f\n", total);
    return 0;
}

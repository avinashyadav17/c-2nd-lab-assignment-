#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10;
    int b=20;
    cout<<"before swapping:"<<a<<endl<<b<<endl;
    swap(&a,&b);
    cout<<"after swapping:"<<a<<endl<<b;
    return 0;
}

#include<iostream>
using namespace std;
void Swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int position(int e,int p){
    return ((e%p)-((e%p)%(p/10)))/(p/10);
}
void bubble_sort(int a[],int n,int m)
{
    for(int k=0;k<n-1;k++)
    {
        for(int i=0;i<n-k-1;i++)
        {
            if(position(a[i],m)>position(a[i+1],m))
            {
               Swap(&a[i],&a[i+1]);
            }
        }
    }
}
void Radix_sort(int a[],int n,int bit)
{
    int m=10;
    for(int i=0;i<bit;i++)
    {
        bubble_sort(a,n,m);
        m=m*10;
    }
    cout<<"Sorted array:"<<endl;
    for (int i=0; i<n; i++)
    {
      cout<< a[i]<<endl;
    }

}
int main()
{
    int n,bit;
    cout<<"Enter  number of digits : "<<endl;
   cin>>bit;
   cout<<"Enter  number of element : "<<endl;
   cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter  "<<i+1<<":"<<endl;
        cin>>a[i];
    }
    Radix_sort(a,n,bit);
    return 0;
}

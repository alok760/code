#include<iostream>
using namespace std;
int main()
{
    long long int a[5],max,min;
    cin>>a[0];
    max=a[0];
    min=a[0];
    for(int i=1;i<5;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    cout<<a[0]+a[1]+a[2]+a[3]+a[4]-max<<" "<<a[0]+a[1]+a[2]+a[3]+a[4]-min;
    return 0;


}

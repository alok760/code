#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long int inp,input;
    cin>>input;
    inp=input;
    int count=0,digit;
    while(inp!=0)
    {
        digit=inp%10;
        inp=inp/10;
        if(digit==0)
            continue;
        if(input%digit==0)
            count++;

    }
    cout<<count<<endl;
    }
    return 0;
}

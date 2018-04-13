#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int year,h=1;
        cin>>year;
        for(int i=1;i<=year;i++)
        {
            if(i%2!=0)
                h*=2;
            else
            ++h;
        }
        cout<<h<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int h;
    char m,m1,s,s1;
    char c,c1,t,t1;
    cin>>h>>c>>m>>m1>>c1>>s>>s1>>t>>t1;
    if(t=='P')
        {
            if (h==12)
                cout<<h<<":"<<m<<m1<<":"<<s<<s1;
            else
            {h+=12;
            cout<<h<<":"<<m<<m1<<":"<<s<<s1;
            }
        }
    else if(t=='A')
    {
        if(h==12)
            {
                h=0;
                cout<<0<<h<<":"<<m<<m1<<":"<<s<<s1;
            }
        else
            cout<<0<<h<<":"<<m<<m1<<":"<<s<<s1;
    }


    return 0;
}

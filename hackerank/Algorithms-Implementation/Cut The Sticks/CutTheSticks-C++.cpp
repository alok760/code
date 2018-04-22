#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int a[s],count,min,max=-1;
    for(int i=0;i<s;i++)
        {
            cin>>a[i];
        }

    for(int i=0;i<s;i++)
        {
            if(a[i]>max)
                max=a[i];
        }

    while(1)
    {
         min=max;
        for(int i=0;i<s;i++)
        {
            if(a[i]<min&&a[i]>0)
                min=a[i];
        }
        count=0;
        for(int i=0;i<s;i++)
        {
            if(a[i]>0)
            {
                a[i]-=min;
                count++;
                if(a[i]<=0)
                    a[i]=NULL;
            }
        }
        if(count==0)
            break;
        cout<<count<<endl;

    }
    return 0;
}

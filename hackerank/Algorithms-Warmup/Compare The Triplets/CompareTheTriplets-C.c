#include<stdio.h>
int main()
{

    int a[3],b[3],ca=0,ba=0;
    for(int i=0;i<3;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<3;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
            ca++;
        else if(a[i]<b[i])
            ba++;
    }
    printf("%d %d",ca ,ba);
    return 0;
}

#include<stdio.h>
int main()
{
    int x1,x2,v1,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    float x;
    x=(x2-x1+0.0)/(v1-v2);

    if(x-(int)x==0&&x>=0)
        printf("YES");
    else
        printf("NO");
    return 0;
}

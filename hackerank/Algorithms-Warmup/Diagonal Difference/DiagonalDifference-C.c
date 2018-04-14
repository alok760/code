#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    const int a = size;
    int arr[a][a];
    int srl=0,srr=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            srl+=arr[i][j];
            if((i+j)==(a-1))
            srr+=arr[i][j];
        }
    }
    int s=srl-srr;
    if(s>=0)
    printf("%d",s);
    else if(s<0)
        printf("%d",s*(-1));

return 0;
}

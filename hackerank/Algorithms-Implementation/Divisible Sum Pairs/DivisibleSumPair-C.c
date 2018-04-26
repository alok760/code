#include<stdio.h>
int main()
{
    int size,d,count=0;
    scanf("%d%d",&size ,&d );
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<size;i++)
        for(int j=i+1;j<size;j++)
            if((arr[i]+arr[j])%d==0)
               ++count;
    printf("%d",count);
    return 0;
}

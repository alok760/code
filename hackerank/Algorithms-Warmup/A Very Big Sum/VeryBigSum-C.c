#include<stdio.h>
int main()
    {
    int size;
    scanf("%d", &size);
    long int arr[size],sum=0;
    for(int i=0;i<size;i++)
        {
        scanf("%ld", &arr[i]);
        sum+=arr[i];
    }
    printf("%ld",sum);
    return 0;
}

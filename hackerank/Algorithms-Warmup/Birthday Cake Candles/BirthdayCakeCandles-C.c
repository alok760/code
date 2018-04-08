#include <stdio.h>
int main() {
    int inp;
    scanf("%d",&inp);
    int arr[inp],max=-1,count=0;
    for(int i=0;i<inp;i++){
	    scanf("%d",&arr[i]);
	if(arr[i]>max)
	    max=arr[i];
    }
    for(int i=0;i<inp;i++)
        if(arr[i]==max)
            count++;
    printf("%d",count);
	return 0;
}

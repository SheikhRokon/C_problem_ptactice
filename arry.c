#include<stdio.h>
int main(){
    int a[3],sum = 0,i;

    printf("Enter the velo \n");
    for(i=0; i<3 ; i++){
        scanf("%d",&a[i]);
    }

    for(i=0; i<3 ; i++){
        sum= sum + a[i];
    }

    printf("Result the velo \n");
    printf("%d",sum);

return 0;

}
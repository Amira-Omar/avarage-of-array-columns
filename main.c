#include <stdio.h>
#include <stdlib.h>
//avg of cols
int main()
{
    int arr[3][4]={0};
   printf("Enter values of Array\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&arr[i][j]);
    }
   }
     for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
       printf("%d",arr[i][j]);
    }
    printf("\n\n");
   }
   int sum=0;
   int avg[4]={0};
     for(int i=0;i<4;i++){
            sum=0;
    for(int j=0;j<3;j++){
       sum+=arr[j][i];
    }

    avg[i]=sum/3;
   }
   for(int i=0;i<4;i++){
    printf("the average of column %d is %d\n",i,avg[i]);
   }
    return 0;
}

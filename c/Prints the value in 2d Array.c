#include <stdio.h>
int main()
{
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }  
        printf("\n");
    }    
    printf("\n%d",*(*(arr+0)+0));
    printf("\n%d",*(*(arr+0)+1));
    printf("\n%d",*(*(arr+0)+2));

    printf("\n%d",*(*(arr+1)+0));
    printf("\n%d",*(*(arr+1)+1));
    printf("\n%d",*(*(arr+1)+2));
    
    printf("\n%d",*(*(arr+2)+0));
    printf("\n%d",*(*(arr+2)+1));
    printf("\n%d",*(*(arr+2)+2));

    return 0;
}

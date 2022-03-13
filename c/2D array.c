#include <stdio.h>

int main()
{
    int arr[2][2]={{10,20},{30,40}};
    int a,b;
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            // printf("%d ",arr[a][b]);
            printf("%d ",*(*(arr+a)+b));
        }  
        // printf("\n");
    }

    // printf("\n%d",*(*(arr+0)+0));
    // printf("\n%d",*(*(arr+0)+1));
    // printf("\n%d",*(*(arr+0)+2));
    // printf("\n%d",*(*(arr+0)+3));

    return 0;
}

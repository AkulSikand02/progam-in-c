#include <stdio.h>
int main()
{   
    
    int data[2][2]={{1,2},{3,4}};
    int a,b;
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            printf("%d ",data[a][b]);
        }  
        printf("\n");
    }

    printf("\n");
    printf("\n");


    int x,y;
    int hello[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            printf("%d ",hello[x][y]);
        }  
        printf("\n");
    }
    
    
    printf("\n");
    printf("\n");
    
    
    int arr[4][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120},{130,140,150,160}};
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }  
        printf("\n");
    }

    // printf("\n%d",*(*(arr+0)+0));
    // printf("\n%d",*(*(arr+0)+1));
    // printf("\n%d",*(*(arr+0)+2));
    // printf("\n%d",*(*(arr+0)+3));

    // printf("\n%d",*(*(arr+1)+0));
    // printf("\n%d",*(*(arr+1)+1));
    // printf("\n%d",*(*(arr+1)+2));
    // printf("\n%d",*(*(arr+1)+3));
   
    // printf("\n%d",*(*(arr+2)+0));
    // printf("\n%d",*(*(arr+2)+1));
    // printf("\n%d",*(*(arr+2)+2));
    // printf("\n%d",*(*(arr+2)+3));
    
    // printf("\n%d",*(*(arr+3)+0));
    // printf("\n%d",*(*(arr+3)+1));
    // printf("\n%d",*(*(arr+3)+2));
    // printf("\n%d",*(*(arr+3)+3));

    return 0;
}
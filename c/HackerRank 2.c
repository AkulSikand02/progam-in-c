#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int n,r,sum=0,temp;
    scanf("%d", &n);
    temp=n;
    
    while(temp>0){
        r=temp %10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}

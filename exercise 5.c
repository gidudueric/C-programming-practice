#include <stdio.h>
#include <stdlib.h>

int main()
{
    //4.11
    int m, sum;

    for (m=1;m<=100;m++){
        if (m%7==0){
        printf("%d\n", m);
        sum+=m;
    }
    }
    printf("The sum of multiples of 7 from 1 to 100 is %d\n", sum);
    return 0;
}

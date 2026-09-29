#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3.38
    int  i, nine, digit;
    printf("Enter an integer (5 digits or less):");
    scanf("%d", &i);
    while  (i>0){
        digit=i%10;
        if(digit == 9){
            nine++;
        }
        i=i/10;
    }
    printf("The number contains %d nines\n",nine);

    return 0;
}

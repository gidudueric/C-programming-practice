#include <stdio.h>
#include <stdlib.h>

int main()
{
    //4.9
    int count=0, sum=0, value=0;
    float Average;
    printf("How many numbers?:");
    scanf("%d", &count);
    int i;
    for (i = 1;i <= count; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &value);
        sum += value;
    }
    Average= sum/count;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", Average);
    return 0;
}

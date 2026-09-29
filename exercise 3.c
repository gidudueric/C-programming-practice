#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3.43
    int a, b, c;
    printf("Enter side one:");
    scanf("%d", &a);
    printf("Enter side two:");
    scanf("%d", &b);
    printf("Enter side three:");
    scanf("%d", &c);

    if (a+b>c && a+c>b && c+b>a){
        printf("\nThese sides can form a triangle.\n");
    }else {
        printf("These sides cannot form a triangle.\n");
    }
    return 0;
}

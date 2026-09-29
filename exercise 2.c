#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2.17
    float u, a, t, v, s;
    printf("Enter initial velocity (mps):");
    scanf("%f", &u);
    printf("Enter acceleration (mpsqs):");
    scanf("%f", &a );
    printf("Enter time taken (s):");
    scanf("%f", &t);
    v = u + (a*t);
    s = (u*t) + ((1/2)*(a*(t*t)));
    printf("The final velocity is %.2f (mps)\n", v);
    printf("The distance covered is %.2f (m)\n", s);

    return 0;
}

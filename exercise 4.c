#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3.24
    int N;
    printf("N\tN^2\tN^3\tN^4\n\n");
    for (N=1;N<=10;N++){
        printf("%d\t%d\t%d\t%d\n", N, N*N, N*N*N, N*N*N*N);

    }

    return 0;
}

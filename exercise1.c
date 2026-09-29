#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3.39
    int row, col;
    for (row=1;row<=8;row++){
        if (row%2 == 0){
            printf(" ");
        }
        for(col=1;col<=8;col++){
            printf("%s", "* ");
        }
        puts("");
    }


    return 0;
}

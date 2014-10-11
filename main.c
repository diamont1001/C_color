#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0;
    for(i=0; i<16; i++){
        for(j=0; j<16; j++){
            JR_SetColor(i, j);
            printf("%d %d ,", i, j);
        }
    }

    getch();
    return 0;
}

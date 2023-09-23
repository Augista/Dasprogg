#include <stdio.h>

int main() 
{
    int b1, b2, b3, b4;
    printf("Masukkan angka biner = ");
    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);
    
    if(b1 == 0 && b2 == 0 && b3 == 0 && b4 == 0) // 0
        {
            printf("1 1 1 1 1 1 0");
        }
    else if(b1 == 0 && b2 == 0 && b3 == 0 && b4 == 1) // 1
        {
            printf("0 1 1 0 0 0 0");
        }
    else if(b1 == 0 && b2 == 0 && b3 == 1 && b4 == 0) // 2
        {
            printf("1 1 0 1 1 0 1");
        }
    else if(b1 == 0 && b2 == 0 && b3 == 1 && b4 == 1) // 3
        {
            printf("1 1 1 1 0 0 1");
        }
    else if(b1 == 0 && b2 == 1 && b3 == 0 && b4 == 0) // 4
        {
            printf("0 1 1 0 0 1 1");
        }
    else if(b1 == 0 && b2 == 1 && b3 == 0 && b4 == 1) // 5
        {
            printf("1 0 1 1 0 1 1");
        }
    else if(b1 == 0 && b2 == 1 && b3 == 1 && b4 == 0) // 6
        {
            printf("1 0 1 1 1 1 1");
        }
    else if(b1 == 0 && b2 == 1 && b3 == 1 && b4 == 1) // 7
        {
            printf("1 1 1 0 0 0 0");
        }
    else if(b1 == 1 && b2 == 0 && b3 == 0 && b4 == 0) // 8
        {
            printf("1 1 1 1 1 1 1");
        }
    else if(b1 == 1 && b2 == 0 && b3 == 0 && b4 == 1) // 9
        {
            printf("1 1 1 1 0 1 1");
        }
    else
        {
            printf("0 0 0 0 0 0 0");
        }

return 0;
}

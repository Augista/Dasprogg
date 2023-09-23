#include <stdio.h>

int main() 
{
    //
    int T,a,b,c;
    printf("");
    scanf("%d",&T);

    while (T--){
        scanf("%d %d %d",&a,&b,&c);

    if (a == b && b == c) 
    {
        printf("Segitiga sama sisi\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Segitiga sama kaki\n");
    }
    else 
    {
        printf("Segitiga sembarang\n");
    }
    }//
    
}
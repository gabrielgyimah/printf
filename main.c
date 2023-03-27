#include "main.h"
#include <stdio.h>

int main(){

    int len = 0, len2 = 0;
    int num = -5937, num2 = -67;

    len += _printf("Holy God, King of the world\n");
    len2 += printf("Holy God, King of the world\n");
    len += _printf("%d\n", num2);
    len2 += printf("%d\n", num2);
    len += _printf("%i\n", num);
    len2 += printf("%i\n", num);
    
    printf("%d\n", len);
    printf("%d\n", len2);
    return 0;
}

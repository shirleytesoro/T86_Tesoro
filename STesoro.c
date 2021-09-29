#include<stdio.h>

int main()
{
    int var1=3000;
    int var2=60;
    int var3=360;
    int result;
    printf("Enter var1 %d\n");
    scanf(" %d\n", &var1);
    
    printf("Enter var2 %d\n");
    scanf("%d\n", &var2);
    
    printf("Enter var3 %d\n");
    scanf("%d\n", &var3);
    
    //Solution
    result = var1/var2*var3;
    printf("%d divide %d times %d is %d\n ",var1, var2, var3, result);
    return 0;
}
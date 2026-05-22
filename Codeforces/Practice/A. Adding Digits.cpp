#include <stdio.h>
int main(void)
{
    int a, b, n;
    
    scanf("%d %d %d", &a, &b, &n);
    
    
    int temp = 0;
    
    for (int i = 0; i <= 9; i++){
        if((a * 10 + i) % b == 0){
            printf("%d%d", a, i);
            temp = 1;
            break;
        }
    }
    if (temp){
        
        for (int j = 0; j < n -1; j++){
            printf("0");
        }
        printf("\n");
    }
    else {
        printf("-1\n");
    }
    
    return 0;
}
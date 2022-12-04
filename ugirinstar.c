#include <stdio.h>

int main_star_project(void) {
    // for (int i = 0; i<5; i++)
    // {
    //     for (int j = 0; j<=i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i<5; i++)
    // {
    //     for (int j = 0; j<4-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 0; k<=i; k++)
    //     {
    //         printf("*");
    //     }
        
    //     printf("\n");
//ss*
//s***
//*****

    // }
    int floor, i, j, k;
    printf("몇 층의 피라미드를 쌓을까요?");
    scanf("%d", &floor);
    for(i=0; i<floor; i++)
    {
        for(j=0; j<floor-i-1; j++)
        {
            printf("s");
        }
        for(k=0; k<2*i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
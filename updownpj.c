#include <stdio.h>
#include <time.h>
#include <stdlib.h>


// updown , 기회 총  5회
int main_updown(void)
{
    srand(time(NULL));
    int answer = 0;
    int chance = 5;
    int num = rand() % 100 + 1;
    while(1)
    {
        printf("남은 기회는 %d번입니다.\n", chance--);
        printf("숫자를 맞춰보세요.(1~100)\n");
        scanf("%d", &answer);
        if(answer > num)
        {
            printf("\nDOWN\n");
        }
        else if(answer < num)
        {
            printf("\nUP!\n");
        }
        else if(answer == num)
        {
            printf("\nCONGRATUALATION!\n");
            break;
        }
        else
        {
            printf("ERROR!\n");
        }
        if(chance == 0)
        {
            printf("모든 기회를 다 사용하셨습니다.\n");
            break;
        }
    }
    return 0;
}
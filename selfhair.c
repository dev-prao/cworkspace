#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 발모제 - 발모제 병 개수, 투약 횟수, 이전 보여줄 병, 현재 병
int main(void)
{
    srand(time(NULL));
    printf(" ==========자라나라 머리머리!!!==========\n\n");
    int answer = 0;
    int treatment = rand() % 4;
    int cntShowBottle = 0;
    int prevCntShowBottle = 0;

    for (int i = 1; i <= 3; i++)
    {
        int bottle[4] = {0, 0, 0, 0};
        do
        {
            cntShowBottle = rand() % 2 + 2;
        } while (cntShowBottle == prevCntShowBottle);
        prevCntShowBottle = cntShowBottle;
        int isIncluded = 0;
        printf("%d번째 시도: ", i);

        for(int j=0; j<cntShowBottle; j++)
        {
            int randBottle = rand() % 4;
            if(bottle[randBottle] == 0)
            {
                bottle[randBottle] = 1;
                if(randBottle == treatment)
                {
                    isIncluded = 1;
                }
            }
            else
            {
                j--;
            }
        }
        for(int k = 0; k < 4; k++)
        {
            if(bottle[k] == 1)
                printf("%d ", k+1);                
        }
        printf("물약을 머리에 바릅니다.\n\n");
        if(isIncluded == 1)
        {
            printf(">> 성공!! 머리가 나따나따!! \n\n");
        }
        else
        {
            printf(">> 실패!! 머리가 안나따아!! \n\n");
        }
        printf("\n ...계속하려면 아무 키나 누르세요...\n\n");
        getchar();
    }
    printf("\n\n발모제는 몇번일까요?");
    scanf("%d", &answer);

    if(answer == treatment + 1)
    {
        printf("\n\n >> 정답입니돠! \n\n");
    }
    else
    {
        printf("\n\n >> 오답입니돠! 정답은 %d입니돠! \n\n", treatment + 1);
    }
    return 0;
}
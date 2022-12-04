#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

	// 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제 (랜덤)
	// 맞히면 통과, 틀리면 실패
int main_stgpj(void)
{
    srand(time(NULL));
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        // x * y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        showQuestion(i, num1, num2);

        int answer;
        scanf("%d", &answer);
        if (answer == -1)
        {
            printf("프로그램을 종료합니다.\n");
            exit(0); // 프로그램 종료
        }
        else if (answer == num1 * num2)
        {
            success();
            count++;
        }
        else
        {
            fail();
        }
    }
    printf("\n\n 당신은 5개의 비밀번호 중 %d개를 맞추셨습니다.\n\n", count);


    return 0;
}

int getRandomNumber(int level)
{
    return rand() % (level * 10) + 1;
}

void showQuestion(int level, int num1, int num2)
{
    printf("==========%d번째 비밀번호==========\n\n", level);
    printf("\n\t %d x %d = ?\n", num1, num2);
    printf("================================\n\n");
    printf("비밀번호를 입력하세요.(종료: -1)\n\n");
}

void success()
    {
        printf("정답입니다.\n\n");

    }

void fail()
    {
        printf("오답입니다.\n\n");
    }
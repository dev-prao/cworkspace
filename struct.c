#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct GameInfo {
    char * name;
    int year;
    int price;
    char * company;



};

int main(void)
{
    // [게임 출시]
    // 이름 : 라오게임
    // 발매년도 : 2022년
    // 가격 : 50원
    // 제작사 : 라오회사

    char * name = "라오게임";
    int year = 2022;
    int price = 50;
    char * company = "라오회사";


    // [또다른 게임 출시]
    // 이름 : 러오게임
    // 발매년도 : 2022년
    // 가격 : 100원
    // 제작사 : 러오회사


    char * name2 = "러오게임";
    int year2 = 2022;
    int price2 = 100;
    char * company2 = "러오회사";

    // 구조체 사용
    struct GameInfo gameInfo1;
    gameInfo1.name = "라오게임";
    gameInfo1.year = 2022;
    gameInfo1.price = 50;
    gameInfo1.company = "라오회사";

    // 구조체 출력
    printf("-- 게임 출시 정보 --\n");
    printf("   게임명   : %s\n", gameInfo1.name);
    printf("   발매년도 : %d\n", gameInfo1.year);
    printf("   가격     : %d\n", gameInfo1.price);
    printf("   제작사   : %s\n", gameInfo1.company);

    // 구조체를 배열처럼 초기화
    struct GameInfo gameInfo2 = {"러오게임", 2022, 100, "러오회사"};
    printf("\n\n-- 또다른 게임 출시 정보 --\n");
    printf("   게임명   : %s\n", gameInfo2.name);
    printf("   발매년도 : %d\n", gameInfo2.year);
    printf("   가격     : %d\n", gameInfo2.price);
    printf("   제작사   : %s\n", gameInfo2.company);

    // 구조체 배열
    struct GameInfo gameArray[2] ={
        {"라오게임", 2022, 50, "라오회사"},
        {"러오게임", 2022, 100, "러오회사"}
    };
    
    // 구조체 포인터
    struct GameInfo * gamePtr; // 미션맨
    gamePtr = &gameInfo1;
    printf("\n\n-- 미션맨의 게임 출시 정보 --\n");
    // printf("   게임명   : %s\n", (*gamePtr).name); // *ptr
    // printf("   발매년도 : %d\n", (*gamePtr).year);
    // printf("   가격     : %d\n", (*gamePtr).price);
    // printf("   제작사   : %s\n", (*gamePtr).company);

    printf("   게임명   : %s\n", gamePtr->name); // *ptr
    printf("   발매년도 : %d\n", gamePtr->year);
    printf("   가격     : %d\n", gamePtr->price);
    printf("   제작사   : %s\n", gamePtr->company);


    return 0;
}
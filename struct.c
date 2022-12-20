#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct GameInfo {
    char * name;
    int year;
    int price;
    char * company;
    
    struct GameInfo * friendGame; // 연관 업체 게임


};

typedef struct GameInformation {
    char * name;
    int year;
    int price;
    char * company;
    
    struct GameInfo * friendGame; // 연관 업체 게임
} GAME_INFO;

int main_struct(void)
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


    // 연관 업체 게임 소개
    gameInfo1.friendGame = &gameInfo2;
    printf("\n\n-- 연관업체의 게임 출시 정보 --\n");
    printf("   게임명   : %s\n", gameInfo1.friendGame->name);
    printf("   발매년도 : %d\n", gameInfo1.friendGame->year);
    printf("   가격     : %d\n", gameInfo1.friendGame->price);
    printf("   제작사   : %s\n", gameInfo1.friendGame->company);

    // typedef
    // 자료형에 별명 지정
    int i = 1;
    typedef int 정수;
    typedef float 실수;
    정수 정수변수 = 3; // int i = 3;
    실수 실수변수 = 3.14f; // float f = 3.23f;
    printf("\n\n정수변수 : %d, 실수변수 %.2f\n\n", 정수변수, 실수변수);

    typedef struct GameInfo 게임정보;
    게임정보 game1;
    game1.name = "한글 게임";
    game1.year = 2022;
    game1.price = 50;

    GAME_INFO game2;
    game2.name = "한글 게임2";
    game2.year = 2021;
    game2.price = 500;

    struct GameInformation game3;
    game3.name = "한글 게임3";
    game3.year = 2020;
    game3.price = 5000;

    return 0;
}
//헤더파일로, RussianRoulette.cpp에서 구현된 함수의 선언을 포함.

#include <stdio.h>   //printf, scanf 같은 입출력 기능 사용.
#include <stdlib.h>  //rand(), srand() 같은 난수 기능 사용.
#include <time.h>    //srand(time(NULL))로 난수 시드 초기화.
extern int playRussianRoulette(int nTurns = 2, int nBullets=1);
                //기본값으로 게임인원 2, 총알개수 1 설정
                //extern :함수가 다른 파일에 정의되어 있다.
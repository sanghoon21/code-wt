#include "RussianRoulette.h"
int main()
{
  int nTurn, nBullets;
  //rand()의 시드를 설정하여 실행할 때마다 다른 난수 생성
  srand((unsigned)time(NULL));  //현재 시간을 기반으로 시드를 설정

  printf("게임 인원 (예:2) ==> ");
  scanf("%d", &nTurn);   //사용자가 입력한 게임 인원을 저장
  printf("총알 개수 (6미만) ==> ");
  scanf("%d", &nBullets);  //사용자가 입력한 총알 개수를 저장
  getchar();  //scanf() 이후 남아 있는 개행 문자 제거

  //playRussianRoulette() 함수를 호출하여 게임 실행
  int bang = playRussianRoulette(nTurn, nBullets);
    //게임인원, 총알개수를 함수에 넣고 돌려서 나온 결과(총에 맞은 사람의 번호)를 bang에 저장
  printf("\n -----> %d번 참가자가 총에 맞았습니다.\n", bang);  //총에 맞은 사람 번호 출력
}
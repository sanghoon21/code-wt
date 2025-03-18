#include <iostream>  //cout를 사용하려면 필요한 헤더
using namespace std;   //std::cout를 줄여서 cout으로 사용 가능
      //cout: c++에서 화면에 값을 출력해주는 객체.
      //cout은 <<연산자를 사용하여 여러 개의 값을 연속해서 출력할 수 있음
int main() {
    int number;  //사용자에게 숫자를 입력받음
    cout << "정수를 입력하세요 (100000 미만): ";
    cin >> number;

            //입력값이 0보다 작거나 100000 이상이면 오류 메시지를 출력하고
            //프로그램 종료.
    if (number < 0 || number >= 100000) {
        cout << "입력값이 범위를 벗어났습니다." << endl;
        return 1;
    }


    // 입력값을 각 자리별로 분해
    int 만 = number / 10000; //number를 10000으로 나눠서 만자리 구함
    //number를 10000으로 나눈 나머지, 12345%10000 = 2345
    //그 나머지에서 천 단위를 추출함 2345/1000 = 2
    int 천 = (number % 10000) / 1000; // 1천 단위
    int 백 = (number % 1000) / 100; // 1백 단위
    int 십 = (number % 100) / 10; // 1십 단위
    int 일 = number % 10; // 1일 단위

    // 만 단위 (1일 경우 '1만'이 아니라 '만'만 출력)
    if (만 > 0) cout << (만 == 1 ? "만 " : to_string(만) + "만 ");

    // 천 단위
    if (천 > 0) cout << (천 == 1 ? "천 " : to_string(천) + "천 ");

    // 백 단위
    if (백 > 0) cout << (백 == 1 ? "백 " : to_string(백) + "백 ");

    // 십 단위
    if (십 > 0) cout << (십 == 1 ? "십 " : to_string(십) + "십 ");

    // 일 단위 (0이면 출력하지 않음)
    if (일 > 0) cout << 일;

    cout << endl;
    
    return 0;
}
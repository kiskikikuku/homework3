#include<stdio.h>

void print1 (int *ptr, int rows);

int main(){
    printf("[----- [Park Taehyun] [2018068040] -----]\n\n");
    int one[] = {1,2,3,4,5 }; //1차원 배열 선언 및 초기화

    printf("one     = %p\n", one); // one값 출력(배열의 시작주소)
    printf("&one     = %p\n", &one); // &one의 값 출력(배열의 시작주소)
    printf("&one[0]     = %p\n", &one[0]); //&one[0]의 값 (배열의 시작주소)
    printf("\n");

    print1(&one[0], 5); // one[0]~one[4]까지 주소와 그 주소가 담은 값이 대응되어 출력된다.

    return 0;
}

void print1(int *ptr, int rows){ // 1차원 배열의 시작주소, 원소갯수를 넘겨받아 주소, 그 주소가 담은 값을 출력해주는 함수

    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
    {
        printf("%p \t %5d\n", ptr+i, *(ptr+i));
    }
    printf("\n");

}
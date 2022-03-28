#include<stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main(void){
    printf("[----- [Park Taehyun] [2018068040] -----]\n\n");
    for (i = 0; i < MAX_SIZE; i++)
    {
        input[i] = i; //배열에 0~99까지의 숫자를 차례대로 대입
    }

    printf("address of input = %p\n", input); // 배열의 시작주소 출력

    answer = sum(input, MAX_SIZE); // answer에 합 구하여 대입
    printf("The sum is: %f\n", answer); // 합 출력 (0~99까지 정수의 합 -> 4950)
}

float sum(float list[], int n){ //float형 배열과 배열 크기 n을 받아 합을 계산하여 반환하는 함수

    printf("value of list = %p\n", list); //인자로 받은 배열의 시작주소 출력
    printf("address of list = %p\n\n", &list); // 인자 배열의 주소를 받아 저장할 매개변수의 주소 출력

    int i;
    float tempsum = 0;

    for (i = 0; i < n; i++)
        tempsum +=list[i]; // 합 구하기
     
    return tempsum; // 합 반환 
}
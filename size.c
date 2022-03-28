#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("[----- [Park Taehyun] [2018068040] -----]\n\n");
    int **x; // int형 이중포인터 선언

    printf("sizeof(x) = %lu\n", sizeof(x)); // x는 int형 포인터를 가리키는 이중포인터이므로 4바이트이다(32bit 컴파일러)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // *x는 int형 변수를 가리키는 포인터 이므로 4바이트이다(32bit 컴파일러)
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x는 int형 변수이므로 4바이트이다.

}
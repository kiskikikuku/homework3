#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("[----- [Park Taehyun] [2018068040] -----]\n\n");
    int list[5]; // 정수 배열 list 선언
    int *plist[5]; // 정수 포인터 배열 plist 선언

    list[0]=10; 
    list[1]=11; // list[0], list[1]에 값 대입

    plist[0] = (int *)malloc(sizeof(int)); // 포인터 배열의 첫 원소에 int*형 (4바이트) 동적할당

    printf("list[0] \t = %d\n", list[0]); // 10 출력
    printf("address of list \t = %p\n", list); // list값 (=&list, &list[0]) -> 배열의 시작주소가 출력된다/
    printf("address of list[0] \t = %p\n", &list[0]); // line15와 동일
    printf("address of list + 0 \t = %p\n", list+0); // line15와 동일
    printf("address of list + 1 \t = %p\n", list+1); // &list[1]과 같은 값이 출력된다.
    printf("address of list + 2 \t = %p\n", list+2); // &list[2]과 같은 값이 출력된다.
    printf("address of list + 3 \t = %p\n", list+3); // &list[3]과 같은 값이 출력된다.
    printf("address of list + 4 \t = %p\n", list+4); // &list[4]과 같은 값이 출력된다.
    printf("address of list[4] \t = %p\n", &list[4]); // line21과 동일

    free(plist); // plist에 할당했던 메모리 해제

}

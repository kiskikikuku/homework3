#include<stdio.h>

struct student {
    char lastName[13]; // 13bytes + 3bytes (padding)
    int studentId; // 4 bytes
    short grade; // 2bytes + 2bytes (padding)
};

int main(){
    printf("[----- [Park Taehyun] [2018068040] -----]\n\n");
    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student)); // 24 -> struct의 각 멤버가 차지하는 메모리의 크기를 4byte 배수로 맞추기 위해 크기가 커짐(채워넣기)
    printf("size of int = %ld\n", sizeof(int)); // int 형 크기인 4 출력
    printf("size of short = %ld\n", sizeof(short)); // short형 크기인 2 출력

    return 0;
}
#include<stdio.h>

struct student1 { //구조체 student1 선언
    char lastName;
    int studentId;
    char grade;
};

typedef struct // typedef로 student2 구조체 선언
{
    char lastName;
    int studentId;
    char grade;

}student2;

int main(){
    printf("[----- [Park Taehyun] [2018068040] -----]\n\n");

    struct student1 st1 = {'A', 100, 'A'}; // typedef을 쓰지 않으면 앞에 struct를 붙여줘야함을 확인, student1 구조체 st1 선언 및 초기화

    printf("st1.lastName = %c\n", st1.lastName); 
    printf("st1.studentId = %d\n", st1.studentId); 
    printf("st1.grade = %c\n", st1.grade); // st1의 원소들을 차례로 출력

    student2 st2 = {'B', 200, 'B'}; // student2형 변수 st2 선언(typedef으로 선언하여 struct 붙일 필요 X)

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade); // st2의 원소들을 차례로 출력


    student2 st3; // student2형 st3 선언

    st3 = st2; //st3에 st2 대입

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade); // st3의 원소들을 차례로 출력, 구조체간의 대입연산 성립 확인

    /* if(st3 == st2)
        printf("equal");
    else
        printf("not equal"); 구조체 간 직접 비교연산은 불가능함을 확인 (문법 오류 발생)
    */
    return 0;
}
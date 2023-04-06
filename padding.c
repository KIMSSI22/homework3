#include <stdio.h>
struct student {  //구조체 선언
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};
int main()
{
    printf("-------2022040010 김민서--------\n");
    struct student pst;  //구조체 호출 
    printf("size of student = %ld\n", sizeof(struct student));  //구조체 크기
    printf("size of int = %ld\n", sizeof(int));  //int의 크기
    printf("size of short = %ld\n", sizeof(short));  //short의 크기
    return 0;
}
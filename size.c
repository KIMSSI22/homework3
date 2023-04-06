#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("-------2022040010 김민서--------\n");
    int **x;  //더블 포인터 선언
    printf("sizeof(x) = %lu\n", sizeof(x));  //포인터 변수의 크기
    printf("sizeof(*x) = %lu\n", sizeof(*x));  //더블 포인터 변수의 크기
    printf("sizeof(**x) = %lu\n", sizeof(**x));  //출력 불가능
}
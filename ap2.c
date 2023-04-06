#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];  //배열 선언
    int *plist[5];  //포인터 배열 선언

    list[0] = 10;
    list[1] = 11;
    plist[0] = (int*)malloc(sizeof(int));  //동적 메모리 할당

    printf("list[0] \t= %d\n", list[0]);  //list[0]의 값
    printf("list \t\t= %p\n", list);  //list의 주소
    printf("&list[0] \t= %p\n", &list[0]);  //list의 주소
    printf("list + 0 \t= %p\n", list+0);  //list[0+0]의 주소
    printf("list + 1 \t= %p\n", list+1);  //list[0+1]의 주소
    printf("list + 2 \t= %p\n", list+2);  //list[0+2]의 주소
    printf("list + 3 \t= %p\n", list+3);  //list[0+3]의 주소
    printf("list + 4 \t= %p\n", list+4);  //list[0+4]의 주소
    printf("&list[4] \t= %p\n", &list[4]);  //list[4]의 주소

    free(plist[0]);  //동적 메모리 해제
}
#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("--------2022040010 김민서--------\n");
    int list[5];  //배열 선언
    int *plist[5] = {NULL,};  //포인터 배열로 선언하고 초기화

    plist[0] = (int *)malloc(sizeof(int));  //동적 메모리 할당
    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;

    printf("list[0] = %d\n", list[0]);  //list[0]의 값
    printf("&list[0] = %p\n", &list[0]);  //list[0]의 주소
    printf("list = %p\n", list);  //list 배열의 주소, 즉 list[0]
    printf("&list = %p\n", &list);  //list 배열의 주소, 즉 list[0]
    printf("----------------------------------------\n\n");
    
    printf("list[1] = %d\n", list[1]);  //list[1]의 값
    printf("&list[1] = %p\n", &list[1]);  //list[1]의 주소
    printf("*(list+1) = %d\n", *(list + 1));  //list[0+1]의 주소가 가르키는 값
    printf("list+1 = %p\n", list+1);  //list[0+1]의 주소
    printf("----------------------------------------\n\n");

    printf("*plist[0] = %d\n", *plist[0]);  //plist[0]의 값
    printf("&plist[0] = %p\n", &plist[0]);  //plist[0]의 주소
    printf("&plist = %p\n", &plist); //plist 배열의 주소, 즉 plist[0]
    printf("plist = %p\n", plist);  //plist 배열의 주소, 즉 plist[0]
    printf("plist[0] = %p\n", plist[0]);  //plist[0]이 가르키는 곳의 메모리 주소
    printf("plist[1] = %p\n", plist[1]);  //null
    printf("plist[2] = %p\n", plist[2]);  //null
    printf("plist[3] = %p\n", plist[3]);  //null
    printf("plist[4] = %p\n", plist[4]);  //null

    free(plist[0]);  //동적 메모리 해제
}
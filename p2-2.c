#include <stdio.h>
void print_one(int *ptr, int rows);  //함수 선언
int main()
{
    printf("-------2022040010 김민서--------\n");
    int one[] = {0, 1, 2, 3, 4};

    printf("one = %p\n", one);  //one의 주소
    printf("&one = %p\n", &one);  //one의 주소
    printf("&one[0] = %p\n", &one[0]);  //one[0]의 주소
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); 
    printf("------------------------------------\n");
    print_one(&one[0], 5);  //함수 호출

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5);  //함수 호출
    return 0;
}
void print_one(int *ptr, int rows)  //함수
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)  //반복문
        printf("%p \t %5d\n", ptr + i, *(ptr + i));  //ptr이 가르키는 주소와 그 주소가 가지고 있는 값
    printf("\n");
}
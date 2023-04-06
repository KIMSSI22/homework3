#include <stdio.h>
#define MAX_SIZE 100

float sum1(float list[], int);  //함수 선언
float sum2(float *list, int);  //함수 선언
float sum3(int n, float *list);  //함수 선언

float input[MAX_SIZE], answer;  //배열과 변수 선언
int i;

void main(void)
{
    printf("-------2022040010 김민서--------\n");
    for(i=0; i < MAX_SIZE; i++)  //반복문으로 intput 배열 값
        input[i] = i;

    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");  
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);  //input 주소
    answer = sum1(input, MAX_SIZE);  //함수 sim1 호출
    printf("The sum is: %f\n\n", answer);  

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);  //input 주소
    answer = sum2(input, MAX_SIZE);  //함수 sim2 호출
    printf("The sum is: %f\n\n", answer);

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);  //input 주소
    answer = sum3(MAX_SIZE, input);  //함수 sim3 호출
    printf("The sum is: %f\n\n", answer);
}

float sum1(float list[], int n) {  //함수 sum1
    printf("list\t= %p\n", list);  //list의 주소
    printf("&list\t= %p\n\n", &list); //list의 주소
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++)  //n은 100
        tempsum += list[i];  //0부터 99까지의 합
    return tempsum;
}

float sum2(float *list, int n) {  //함수 sum2
    printf("list\t= %p\n", list);  //list의 주소
    printf("&list\t= %p\n\n", &list);  //list의 주소
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++)  //n은 100
        tempsum += *(list +i);  //0부터 99까지의 합의 주소가 가르키는 값
    return tempsum;
}

float sum3(int n, float *list) {  //함수 sum3
    printf("list\t= %p\n", list);  //list의 주소
    printf("&list\t= %p\n\n", &list);  //list의 주소
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++)  //n은 100
        tempsum += *(list +i);  //0부터 99까지의 합의 주소가 가르키는 값
    return tempsum;
}
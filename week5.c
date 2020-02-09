#include <stdio.h>
int main()
{
    //int x = 100;
    //int a = 0144;
    //int b = 0x64;
    //printf("x = %d", x);
    //printf("reference of x = %lu\n", &x);
    //printf("reference of x = %p\n", &x);

    //int number[] = {7, 8, 9, 10, 11};
    //int number[100] = {7, 8, 9, 10, 11};
    //int number[5] ;
    //number[3000] = 200;
    //printf("index 3 = %d\n", number[3000]);
    //printf("reference index 3 = %p\n", &number[3]);
    //printf("reference index 0 = %p\n", &number[0]);
    //printf("reference index 0 = %p\n", number + 3000);

    //int *ptr = &x;
    //int *arrPtr;
    //arrPtr = number; // &number[0] 
    //arrPtr = arrPtr + 1;
    //*arrPtr = *arrPtr +1;
    // * dereferencing
    //printf("arrPtr = %p, *arrPtr = %d\n", arrPtr, *arrPtr);
    //printf("number[1] = %p, number[1] = %d\n", &number[1], number[1]);


    //&x = 50; ทำไมได้
    //ptr = x;
    //*ptr = 50;

    //int number[] = {7, 8, 9, 10, 11};
    //char input[50];
    //for (int *ptr = number; ptr <= &number[4]; ptr++);{
    //    printf("[%p] = %d\n", ptr, *ptr);
    //}

    //char input[50];
    //int count = 0;
    //char c;
    //while ((c = getchar()) != '\n')
    //{
    //    input[count] = c;
    //    ++count;
    //}
    //input[count] = '\0';
    //printf("input = %s\n", input);
    //for (char *cPtr = &input[0]; *cPtr != '\0'; cPtr++)
    //{
    //    printf("%c\n", *cPtr);
    //}

    int a;
    char c;
    char s[50];
    
    scanf("%c-%d-%s", &c, &a, s);
    printf("%c    %d    %s", c, a, s);
}
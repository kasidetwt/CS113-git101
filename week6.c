#include <stdio.h>
//void addTen(int nmbers[], int n)
void addTen(int *numbers, int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf("numbers + %d addr = %p, %d\n", i , numbers + i, *(numbers + i));
        *(numbers + i) += 10;
    }
}
int addTwenty(int *n){
    *n += 20;
    return 1;
}
int main()
{
    int numbers[] = {5, 6, 7, 8, 9, 0};
    int n = 6;
    int *ptr = &n;
    addTen(&numbers[0] , n);
    for(int i = 0; i < 6; i++){
        printf("number[%d] = %d\n", i , numbers[i]);
    }
    addTwenty(ptr);
    printf("n = %d\n", n);
}
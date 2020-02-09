#include <stdio.h>
int addTen(int x)
{
    printf("addTen in main = %d\n", x);
    x = x + 10;
    return x;
}
int addTwenty();
int x = 300;
int main()
{
    int x = 10;
    int y = addTen(x);
    printf("addTen in main = %d\n", y);
    printf("x in main = %d\n", x);
    int z = addTwenty();
    printf("addTwenty in main = %d\n", z);
    printf("x in main = %d\n", x);
}
int addTwenty()
{
    printf("x in addTwenty = %d\n", x);
    x = x + 20;
    return x;
}

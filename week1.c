#include <stdio.h>
#define for 20
int f;
int main()
{
    int a = 10; //-21000000 - 21000000
    unsigned long long b = 4000000000;
   
    float c = 10.22;
    double d = 111.112;

    char e = 'a';
    char name[] = "owen";
     
    //printf("%f %lf %c %s", c, d, e, name);
    
    //int ans1 = a + e * 200;
    //float ans2 = a + c * e;
    int ans = 13%15;
    printf("%d\n", ans);
}
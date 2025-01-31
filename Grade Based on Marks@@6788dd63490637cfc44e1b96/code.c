#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=90)
    {printf("%d",a);
    printf("A");}
    else if(a>=80&&a<90)
    {printf("%d",a);
    printf("B\n");}
    else if(a>=70&&a<80)
    {printf("%d",a);
    printf("C\n");}
    else if(a>=60&&a<70)
    {printf("%d",a);
    prinf("D\n");}
    else if(a<60)
    {printf("%d",a);
    printf("F\n");}
    else
    {printf("%d",a);
    printf("");}
    return 0;
}
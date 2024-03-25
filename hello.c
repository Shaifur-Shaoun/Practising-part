#include<stdio.h>
int main(void)

{
    int mark;

    printf("Enter the mark: ");
    scanf("%d", &mark);

    printf("Aquired GRADE:\n");
    
    if(mark>=90 && mark<=100)
    {
        printf("A");
    }
    else if(mark>=80 && mark<=89)
    {
         printf("B");
    }
    else if(mark>=70 && mark<=79)
    {
         printf("C");
    }
    else if(mark>=60 && mark<=69)
    {
         printf("D");
    }
    else
    {
         printf("F");
    }
    return 0;
}
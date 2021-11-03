#include <stdio.h>
int main()
{
    int mao,eng,chem,bio,comp,avg;
    printf("Enter valueof mao \n");
    printf("Enter valueof eng \n");
    printf("Enter valueof chem \n");
    printf("Enter valueof bio \n");
    printf("enter valueof comp \n");
    scanf("%d%d%d%d%d,&mao,&eng,&chem,&bio,&comp");
    {
    avg=(mao+eng+chem+bio+comp)/5;
    printf("avg value is %d",avg);
    if(avg>=90&&avg>=100)
    {
        printf("Grade A");
    }
    if(avg>=80&&avg<90)
    {
        printf("Grade B");
    }
    if(avg>=70&&avg<80)
    {
        printf("Grade C");
    }
    if(avg>=60&&avg<70)
    {
        printf("Grade D");
    }
    if(avg>=50&&avg<60)
    {
        printf("Grade E");
    }
    if(avg<50)
    {
        printf("Grade Fail");
    }
        
    }
    return 0;
}

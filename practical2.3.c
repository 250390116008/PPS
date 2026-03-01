#include <stdio.h>
void display()
{
    printf("\n------------------- main menu------------------");
    printf("\n main menu:");
    printf("\n check even or odd:");
    printf("\n check positive or negative:");
    printf("\n find max three numbers:");
    printf("\n sum of digit:");
    printf("\n exit:");
}
void even_odd()
{
    int num;
    printf ("enter a numbers");
    scanf("%d",&num);
    if(num%2==0)
        printf("\n number is even");
    else
        printf("\n number is odd");
}
void pos_neg(int num)
{
    if (num>0)
            printf("\n number is positive");
    else if(num<0)
        printf("\n number is negative");
    else
        printf("\n number is zero");
}
int largest()
{
    int num1,num2,num3;
    printf ("enter three numbers");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>=num2 && num1>=num3)
    {
        printf("\n max no is %d ,num 1");
        return num1;
    }
    else if (num2>=1 && num2>=3 )
    {
        printf("\n max no is %d ,num 2");
        return num2;
    }
    else
    {
        printf("\n max no is %d ,num 3");
        return num3;
    }
}
int find_sum(int num)
{
    int sum=0,digit;
    while (num!=0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
   printf("\n usm of digit is %d",sum);
}
int main()
{
    int choice;
    int num,num1,num2,num3;
    do
    {
        display();
        printf("\n enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                even_odd();
                break;
            case 2:
                printf ("enter a numbers");
                scanf("%d",&num);
                pos_neg(num);
                break;
            case 3:
                int ans=largest();
                break;
            case 4:
                printf ("enter a numbers");
                scanf("%d",&num);
                 printf ("sum=%d\n,find_sum(num)");
                 break;
            case 5:
                printf ("exiting program");
                break;
            default:
             printf ("\n invalid choice! please try again");
        }
    }while (choice !=5);
    return 0;
}
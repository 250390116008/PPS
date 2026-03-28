#include<stdio.h>
int main()
{
    char str[100];
    int i,length,choice;
    do
    {
        printf("\n main menu");
        printf("\n 1. reverse a string");
        printf("\n 2. convert string to uppercase");
        printf("\n 3. convert string to lowercase");
        printf("\n 4. find the length of a string");
        printf("\n 5. exit");
        printf("\n enter your choice:");
        scanf("%d",&choice);
        if (choice >=1 && choice<=4)
        {
            printf("\nenter string");
            scanf("%s",str);
            length=0;
            while(str[length]!='\0')
            {
                length++;
            }
        }
        switch(choice)
        {
            case 1 :
            printf("\n orignal string :%s",str);
            for(i=length-1;i>=0;i--)
            {
                printf("\t%c",str[i]);
            }
            printf("\n");
            break;
            case 2 :
            printf("\n enter string :");
            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    str[i]=str[i]-32;
                }
            }
            printf("\n uppercase:%s",str);
            break;
            case 3 :
            printf("\n enter string :");
            for(i=0;str[i]!=0;i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                {
                    str[i]=str[i]+32;
                }
            }
            printf("\n lowercase:%s",str);
            break;
             case 4 :
            printf("\n enter string :");
            length=0;
            while (str[length]!='\n' && str[length]!='\0')
            {
                length++;
            }
            printf("\n length = %d",length);
            break;
            case 5 :
            printf("\n exit...........");
            break;
            default:
            printf("\n invalide choice");
            }
        }while(choice!=5);
        return 0;
    }
    
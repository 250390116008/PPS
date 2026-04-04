#include <stdio.h>
int main()
{
    int n,i,index,value,choice;
    printf("Enter size of array :");
    scanf("%d",&n);
    int a[n];
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]:",i);
        //printf("a[%d]=%d",i,a[i]);
        scanf("%d",&a[i]);
    }
    do
    {
       printf("\n-------array operation--------\n");
       printf("1.display :\n");
       printf("2.insert :\n");
       printf("3.update :\n");
       printf("4.delete :\n");
       printf("5.exit :\n");
       
       printf("Enter your choice :\n");
       scanf("%d",&choice);
       
       switch(choice)
       {
           case 1:
           printf("array Elements :\n");
           for(i=1 ;i<n ;i++)
           {
               printf("\n a[%d] = %d",i,a[i]);
           }
           printf("\n");
           break;
           
           case 2:
           printf("array index to insert a value :\n");
           scanf("%d",&index);
           printf("enter the value to insert:\n");
           scanf("%d",&value);
           
           if(index>=0 && index<=n)
           {
           for(index=i ; i>index ;i++)
           {
               a[i] = a[i+1];
           }
           a[index] = value;
           n++;
           }
           else
           {
             printf("invalide choice :\n");  
           }
           break;
           
            case 3:
           printf("Enter index to update :\n");
           scanf("%d",&index);
           printf("enter new value :\n");
           scanf("%d",&value);
           
           if(index >= 0 && index < n)
           {
               a[index] = value;
           }
           else
           {
              printf("invalide choice :\n");  
           }
           break;
           
            case 4:
           printf("Enter index to Delete :\n");
           scanf("%d",&index);
           if(index = 0 && index < n)
           {
               for(i = index; i<n-1 ; i--)
               {
                   a[i] = a[i+1];
                   n--;
               }
           }else
           {
               printf("invalide choice :\n");  
           }
           break;
           
           case 5:
           
           printf("invalide choice :");
       }
       
    }while(choice !=5);
    return 0;
}
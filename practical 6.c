#include <stdio.h>
#include <string.h>
#define MAX 100
struct student 
{
    char name[MAX];
    int rollno;
    float marks;
    char grade;
};
int main()
{
    int n,i;
    printf("\n Enter value of n: ");
    scanf("%d",&n);
    struct student s[n];
    printf("\n student details : ");
    for (i=0 ; i<n ; i++)
    {
        printf("\n %d students details : ",i+1);
        printf("\n enter student name : ");
        scanf("%s",s[i].name);
        printf("\n enter rollno : ");
        scanf("%d",&s[i].rollno);
        printf("\n enter marks : ");
        scanf("%f",&s[i].marks);
        printf("\n enter grade: ");
        scanf(" %C",&s[i].grade);
    }
    printf("\n==== students records ====");
    for(i=0 ; i<n ; i++)
    {
    printf("\n student %d\n" , i+1);
    printf("name : %s \n" , s[i].name);
    printf("rollno : %d \n" , s[i].rollno);
    printf("marks : %.2f \n",s[i].marks);
    printf("grade : %C \n" , s[i].grade);
    }
    
    
}

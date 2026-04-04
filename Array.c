#include <stdio.h>
void menu()
{
 
    printf("\n****Array Operations****\n");
    printf("1. Insert an element\n");
    printf("2. Update an element\n");
    printf("3. Delete an element\n");
    printf("4. Exit the Program\n");
}

int main() {
    int n, i, index, value, choice;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[100];

    printf("\n****Enter Array Elements****\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n--- Array Elements ---\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i + 1, a[i]);
    }
    do {
    menu();
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nEnter index to insert at (1 to %d): ", n );
            scanf("%d", &index);
            printf("Enter value to insert: ");
            scanf("%d", &value);
            for (i = n; i >= index; i--) {
                a[i] = a[i - 1];
            }
            a[index - 1] = value;
            n++;
            printf("\n--- Array After Insertion ---\n");
            for (i = 0; i < n; i++)
            {
                printf("a[%d] = %d\n", i + 1, a[i]);
            }
            //menu();
            break;

        case 2:
            printf("\n Enter index to update (1 to %d): ", n);
            scanf("%d", &index);
            printf("Enter new value: ");
            scanf("%d", &value);
            a[index - 1] = value;
            printf("\n***Array After Update***\n");
            for (i = 0; i < n; i++)
            {
                printf("a[%d] = %d\n", i + 1, a[i]);
            }
            break;

        case 3:
            printf("\nEnter index to delete (1 to %d): ", n);
            scanf("%d", &index);
            for (i = index - 1; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            n--;
            printf("\n***Array After Deletion***\n");
            for (i = 0; i < n; i++)
            {
                printf("a[%d] = %d\n", i + 1, a[i]);
            }
            break;
        case 4:
             printf("Exiting the Program\n");
             break;

        default:
            printf("Invalid choice!\n");
    }
  } while(choice!=4);

    return 0;
}
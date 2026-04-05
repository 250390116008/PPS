#include <stdio.h>
#include <string.h>

void sortArray(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void searchArray(int arr[], int n, int key)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }
}

void concatStrings(char str1[], char str2[])
{
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

void compareStrings(char str1[], char str2[])
{
    if(strcmp(str1, str2) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}


int main()
{
    int mainChoice, subChoice;

    while(1)
    {
        printf("\n===== MAIN MENU =====\n");
        printf("1. Array Operations\n");
        printf("2. String Operations\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        if(scanf("%d", &mainChoice) != 1)
        {
            printf("Invalid input! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }

        if(mainChoice == 1)
        {
            int n, arr[100], i, key;

            printf("Enter number of elements: ");
            scanf("%d", &n);

            if(n <= 0 || n > 100)
            {
                printf("Invalid array size!\n");
                continue;
            }

            printf("Enter elements:\n");
            for(i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }

            printf("\n--- Array Menu ---\n");
            printf("1. Sort Array\n");
            printf("2. Search Element\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            if(subChoice == 1)
            {
                sortArray(arr, n);
            }
            else if(subChoice == 2)
            {
                printf("Enter element to search: ");
                scanf("%d", &key);
                searchArray(arr, n, key);
            }
            else
            {
                printf("Invalid choice!\n");
            }
        }

        else if(mainChoice == 2)
        {
            char str1[100], str2[100];

            printf("Enter first string: ");
            scanf("%s", str1);

            printf("Enter second string: ");
            scanf("%s", str2);

            printf("\n--- String Menu ---\n");
            printf("1. Concatenate Strings\n");
            printf("2. Compare Strings\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);

            if(subChoice == 1)
            {
                concatStrings(str1, str2);
            }
            else if(subChoice == 2)
            {
                compareStrings(str1, str2);
            }
            else
            {
                printf("Invalid choice!\n");
            }
        }

        else if(mainChoice == 3)
        {
            printf("Program exited.\n");
            break;
        }

        else
        {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
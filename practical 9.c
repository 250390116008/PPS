#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *fp;
    long size;
    char ch;
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) 
    {
        perror("Error opening file");
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    printf("File contents in reverse:\n");
    for (long i = size - 1; i >= 0; i--) 
    {
        fseek(fp, i, SEEK_SET);
        ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);
    printf("\n");
    return 0;
}
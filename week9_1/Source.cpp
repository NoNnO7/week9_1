#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    printf("Input data string:");
    FILE* fptr;
    char s[256] = "";
    fptr = fopen("data.txt", "w");
    while (1)
    {
        scanf("%s", s);
        fprintf(fptr, s);
        fprintf(fptr, "\n");
        if (s[strlen(s) - 1] == '.')
        {
            break;
        }
    }
    fclose(fptr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("\nCurrent Working Directory: ");
    system("pwd");

    printf("\nList of Files in Current Directory: ");
    system("ls -l");

    printf("\nCreating a new directory named 'Demo'...\n");
    system("mkdir Demo");

    printf("\nList of Files in Current Directory after creating 'Demo': ");
    system("ls -l");

    printf("\nRemoving the directory named 'Demo'...\n");
    system("rmdir Demo");

    return 0;
}
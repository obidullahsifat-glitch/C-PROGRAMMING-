#include <stdio.h>
#include <windows.h>

int main() {

    for (int i = 0; i < 40; i++) {
        system("cls"); 
        for (int space = 0; space < i; space++) {
            printf(" ");
        }
        printf("Go Right Slowly\n");

        
        Sleep(100); 
    }

    return 0;
}
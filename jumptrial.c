#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
void printdino(){
        printf("#####\n");
        printf("#^-^#\n");
        printf("#| |#\n");
        system("cls");
}
void printdinojump(){
    int i =0;
    while(i<200){
        printf("#^-^#\n");
        printf("#| |#\n");
        printf("#####\n");
        system("cls");
        i++;
    }
}

int main(){
    char x;
    do
    {
        if (kbhit()) { 
            x=getch();
            if(x=='w'){
                printdinojump();
            }
        }
        printdino();
    } while (x!='x');
}
#include <stdio.h>
#include <conio.h>
void createboundaries(){
    for (int y=0 ; y<=10;y++ ){
        printf("#");
        for (int x = 0; x <= 60; x++)
        {

            if (y%10==0)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
         printf("#\n");
    }
}
void dinojump(){
    
}
int main(){
    int ch;
    createboundaries();
    ch=getch();
    if(ch=='w'){
        dinojump();
    }
}
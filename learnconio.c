#include <stdio.h>
#include <conio.h>
void createboundaries(){
    for (int i=0 ; i<=10;i++ ){
        printf("#");
        for (int j = 0; j <= 10; j++)
        {
            if (i%10==0)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
            printf("#");
        }
        
    }
}
int main(){
    char c;
    c=getch();
    printf("%c",c);
    printf("%c",c);
}
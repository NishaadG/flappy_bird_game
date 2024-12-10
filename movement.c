#include <stdio.h>
#include <conio.h>
#include <windows.h> //for clearing screen using system function
void createboundaries(){
    char action;
    int ycoord =5,xcoord=10;
    do
    {
        system("cls");
            if((action=='w')&&(ycoord>1)) ycoord--;
        else if (action=='a'&&(xcoord>1))xcoord--;
        else if (action=='d'&&(xcoord<19))xcoord++;
        else if(action=='s'&&(ycoord<9))ycoord++;
        else{}
        for (int y=0 ; y<=10;y++ ){
            printf("#");
            for (int x = 0; x <= 20; x++){
                if ((x==xcoord)&&(y==ycoord))
                {
                    printf("@");
                }
                else if (y%10==0)
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
        action=getch();
    } while (action!='x');
}
int main(){
    createboundaries();
}
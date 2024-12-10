#include <stdio.h>
#include <conio.h>
#include <windows.h> //for clearing screen using system function
#include <stdlib.h>
void createboundaries(){
    char action;
    int ycoord =5,xcoord=10;
    int x , y;
    int xbad=15,ybad=7;
    do
    {
        system("cls");
            if((action=='w')&&(ycoord>1)) ycoord--;
        else if (action=='a'&&(xcoord>1))xcoord--;
        else if (action=='d'&&(xcoord<19))xcoord++;
        else if(action=='s'&&(ycoord<9))ycoord++;
        else{}
        if(xbad==xcoord&&ycoord==ybad){
            xbad=(rand()%19)+1;
            ybad=(rand()%9)+1;    
        }
        for (y=0 ; y<=10;y++ ){
            printf("#");
            for (x = 0; x <= 20; x++){
                if ((x==xcoord)&&(y==ycoord))
                {
                    printf("@");
                }
                else if(x==xbad&&y==ybad){
                    printf("*");
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
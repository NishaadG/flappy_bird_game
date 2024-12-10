#include <stdio.h>
#include <conio.h>
void createboundaries(){
    int ycoord =5,xcoord=10;
    for (int y=0 ; y<=10;y++ ){
        printf("#");
        for (int x = 0; x <= 20; x++)
        {

            if (y%10==0)
            {
                printf("#");
            }
            else if ((x==xcoord)&&(y==ycoord))
            {
                printf("@");
            }
            else
            {
                printf(" ");
            }
        }
         printf("#\n");
    }
}
int main(){
    createboundaries();
}
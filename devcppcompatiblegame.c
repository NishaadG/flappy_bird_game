#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


char map[53][11];
int wallhole=8;
char action;
int wallx=49;
int playerycoord=5,playerxcoord=5;
int gameend=1;
int score=0;
struct timespec sec, nanosec = { 0, 10000000 };


void startpage(){
    printf("Welcome to Flappy Bird!!");
}


void wallcontact(){
    if(map[playerxcoord][playerycoord]=='#'){
        gameend=0;
    }
}


void movement(){
    if(action=='w')playerycoord--;
    else if(action =='s')playerycoord++;
    else if(action=='a')playerxcoord--;
    else if(action=='d')playerxcoord++;
    else{}
}

void player(){
	int y,x;
    for ( y = 0; y <= 10; y++)
        {
            for ( x = 0; x <= 50; x++)
            {
                if(x==playerxcoord&&y==playerycoord){
                    map[x][y]='$';
                }
            }
        }
}


void inputboundaries(){
    int x=0 , y=0;
    for ( y = 0; y <=10 ; y++)
    {  
        for ( x= 0 ; x <= 50 ; x++){
            if (x==0||x==50||y==0||y==10)
            {
                map[x][y]='#';
            }
            else{
                map[x][y]=' ';
            }
        }
    }
    
}


void incomingwall(){
    int y=0;
    for ( y = 0; y <=10 ; y++)
    {
        if (y!=wallhole)
        {
            map[wallx][y]='#';
        }
    }
    wallx--;
    if(wallx==0){
        wallx=49;
        wallhole=(rand()%9)+1;
        score++;
    }
}



int main(){
    inputboundaries();
    incomingwall();
    while (gameend)
    {
        inputboundaries();
        incomingwall();
        wallcontact();
        if(kbhit()) {
            action=getch();
            movement();
        } 
        player();
        int y,x;
        for ( y = 0; y <= 10; y++)
        {
            for ( x = 0; x <= 53; x++)
            {
                printf("%c",map[x][y]);
            }
            printf("\n");
        }
        printf(" Score: %d" , score);
        system("cls");
        int response = nanosleep(&nanosec, &sec);
    }
    printf("Final Score: %d" , score);
}

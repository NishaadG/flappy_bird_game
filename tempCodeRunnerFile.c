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
        for (int y = 0; y <= 10; y++)
        {
            for (int x = 0; x <= 53; x++)
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
#include <stdio.h>
#include <stdlib.h>
int main(){
    int try=10;
    int i,num,x,y;
    printf("lets play a game together!\nenter a number :  \n");
    scanf("%d",&x);
    play:
    num=(rand()%100)+1;    
    do{
        
        if(x!=num && x>num )
        {
        printf("youre too far!\n");
        printf("enter a number :\n");
        scanf("%d",&x);
        try= try -1;
        }
        else if (x!=num && x<num)
        {
        printf("youre too close!\n");
        printf("enter a number :\n");
        scanf("%d",&x);
        try= try -1;
        }
        else {
            printf("congragulations you found the number!\n");
            break;
        }
    }while (try>0);
        printf("thank you for playing!\n"
        "the number is %d"
        "\nwould you like to play again?\n"
           "enter 1 or two (1 = yes 2 = no)\n",num);
        scanf("%d",&y);
        if(y==1){
            printf("enter a number to play again:\n");
            scanf("%d",&x);
             goto play;
            }
        else if (y==2){
            printf("thank you for playing!") ;
        }
         else{
            printf("enter 1 or 2 !");
            goto play;
        }
    return 0 ;
}
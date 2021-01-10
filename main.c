#include <stdio.h>
#include <stdlib.h>

char k[3][3]={{'1','2','3'},
              {'4','5','6'},
              {'7','8','9'}};

void gpole();

int j, x;
char z='O';

int main()
{
    void gpole()
    {
        printf(" %c  | %c  | %c  \n", k[0][0], k[0][1], k[0][2]);
        printf("-----------------\n");
        printf(" %c  | %c  | %c  \n", k[1][0], k[1][1], k[1][2]);
        printf("-----------------\n");
        printf(" %c  | %c  | %c  \n", k[2][0], k[2][1], k[2][2]);

        return;
    }
    for(j=0;j<100;j++){
        gpole();
        if(z=='O'){
            printf("Gracz kolko(O), podaj liczbe: ");
            scanf("%d",&x);
            if(x==1){
                k[0][0] = z;
            }
            else if(x==2){
                k[0][1] = z;
            }
            else if(x==3){
                k[0][2] = z;
            }
            else if(x==4){
                k[1][0] = z;
            }
            else if(x==5){
                k[1][1] = z;
            }
            else if(x==6){
                k[1][2] = z;
            }
            else if(x==7){
                k[2][0] = z;
            }
            else if(x==8){
                k[2][1] = z;
            }
            else if(x==9){
                k[2][2] = z;
            }
            z='X';
        }
        else{
            printf("Gracz krzyzyk(X), podaj liczbe: ");
            scanf("%d",&x);
            if(x==1){
                k[0][0] = z;
            }
            else if(x==2){
                k[0][1] = z;
            }
            else if(x==3){
                k[0][2] = z;
            }
            else if(x==4){
                k[1][0] = z;
            }
            else if(x==5){
                k[1][1] = z;
            }
            else if(x==6){
                k[1][2] = z;
            }
            else if(x==7){
                k[2][0] = z;
            }
            else if(x==8){
                k[2][1] = z;
            }
            else if(x==9){
                k[2][2] = z;
            }
            z='O';
        }
    }

}
#include <stdio.h>
#include <windows.h>
#include <time.h>

void loop (char c [3][3]);
void intro_primera (char c[3][3]);
void tablero (char c[3][3]);
void intro_yo(char c[3][3]);
void intro_ia(char c[3][3]);

int main(){
    char c [3][3];

    loop(c);
    return 0;
}

void loop (char c [3][3]){
    int i;
    i = 0;
    intro_primera(c);
    tablero(c);
    do{
        system("cls");
        tablero(c);
        if(i % 2 == 0){
            intro_yo(c);
        } else {
            intro_ia(c);
        }
        i++;
    } while ( i <= 9);

    printf("Juego terminado");
}

void intro_primera (char c[3][3]){
    int i, j;
    char aux;
    aux = '1';

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            c[i][j] = aux++;
        }
    }
}

void intro_ia (char c[3][3]){
    int i, j, k;
    char aux;
    srand(time(NULL));

    do{
        i = rand() % 3;
        j = rand() % 3;
        k = 0;
        if (c[i][j] == 'X' || c[i][j] == 'O'){
            k = 1;
        }
    } while ( k == 1 );
    c[i][j] = 'O';
}

void tablero (char c[3][3]){
    int i, j;

    for(i = 0; i < 3; i++){
        printf(" \n");
        for(j = 0; j < 3; j++){
            if (j < 2){
                printf(" %c |", c[i][j]);
            } else{
                printf(" %c ", c[i][j]);
            }
        }
        if (i < 2){
                printf("\n___ ___ ___\n");
            }
    }
    printf(" \n\n");
}

void intro_yo(char c[3][3]){
    int i, j, k;
    char aux;

    do{
        do{
            printf("Coloque una ficha: \n");
            fflush(stdin);
            scanf("%c", &aux);
        } while ( aux < '1' || aux > '9');
        k = 0;
        switch (aux){
            case '1':{
                i = 0;
                j = 0;
                if (c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla esta ocupada! \n");
                }
                break;
            }
            case '2':{
                i = 0;
                j = 1;
                if (c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla esta ocupada! \n");
                }
                break;
            }
            case '3':{
                i = 0;
                j = 2;
                if (c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla esta ocupada! \n");
                }
                break;
            }
            case '4':{
                i = 1;
                j = 0;
                if (c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla esta ocupada! \n");
                }
                break;
            }
            case '5':{
                i = 1;
                j = 1;
                if (c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla esta ocupada! \n");
                }
                break;
            }
            case '6':{
                i = 1;
                j = 2;
                if (c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla esta ocupada! \n");
                }
                break;
            }
            case '7':{
                i = 2;
                j = 0;
                if (c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla esta ocupada! \n");
                }
                break;
            }
            case '8':{
                i = 2;
                j = 1;
                if (c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla esta ocupada! \n");
                }
                break;
            }
            case '9':{
                i = 2;
                j = 2;
                if (c[i][j] == 'X' || c[i][j] == 'O'){
                    k = 1;
                    printf("La casilla esta ocupada! \n");
                }
                break;
            }
        }
    } while (k == 1);
    c[i][j] = 'X';
}

int ganador(char c[3][3]){
     
}
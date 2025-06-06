#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <ctype.h>

char board[3][3];
const char PLAYER='X';
const char COMPUTER='O';
void resetBoard();
void printBoard();
int checkFreeSpaces();
void computerMove();
void playerMove();
char checkWinner();
void printWinner(char winner);

int main() {
    char winner=' ';
    char response=' ';
    do
    {
        winner=' ';
        response=' ';
        resetBoard();
        while (winner==' ' && checkFreeSpaces()!=0)
        {
            printf("\n");
            printBoard();
            playerMove();
            winner=checkWinner();
            if (winner!=' ' || checkFreeSpaces()==0){
                break;
            }
            computerMove();
            winner=checkWinner();
            if (winner!=' ' || checkFreeSpaces()==0){
                break;
            }
        }
        printBoard();
        printWinner(winner);
        printf("\n\nDo you want to play again? (Y/N): ");
        scanf(" %c",&response);
        response=toupper(response);
    } while (response=='Y');
    
    
    return 0;
}

void resetBoard(){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            board[i][j]=' ';
        }
    }
}

void printBoard(){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if(j==2){
                printf("%c",board[i][j]);
            }
            else{
                printf(" %c |",board[i][j]);
            }
        }
        if(i<2){
            printf("\n---|---|---\n");
        }

    }
}

int checkFreeSpaces(){
    int freeSpaces=9;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if(board[i][j]!=' '){
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void computerMove(){
    srand(time(0));
    int x, y;
    if(checkFreeSpaces()!=0){
        do
        {
            x=rand() % 3;
            y=rand() % 3;
        } while (board[x][y]!=' ');
        board[x][y]=COMPUTER;
    }
    else{
        printWinner(' ');
    }
}

void playerMove(){
    int x, y;
    do
    {
        printf("\n\nWhich row(1-3) do you want to place your X : ");
        scanf("%d",&x);
        printf("\n");
        x--;
        printf("\n\nWhich column(1-3) do you want to place your X : ");
        scanf("%d",&y);
        printf("\n");
        y--;
        if(board[x][y]!=' '){
            printf("\n\nInvalid, square is occupied! Type another one: ");
        }
        else{
            board[x][y]=PLAYER;
            break;
        }
    } while (board[x][y]!=' ');
}

char checkWinner(){
    for (int i=0; i<3; i++){   //CHECK ROWS
        if(board[i][0]== board[i][1] && board[i][0]==board[i][2]){
            return board[i][0];
        }
    }

    for (int j=0; j<3; j++){    //CHECK COLUMNS
        if(board[0][j]==board[1][j] && board[0][j]==board[2][j] ){
            return board[0][j];
        }
    }

    if(board[0][0]==board[1][1] && board[0][0]==board[2][2] ){
        return board[0][0];
    }   

    if(board[2][0]==board[1][1] && board[2][0]==board[0][2] ){
        return board[1][1];
    }   
    return ' ';
}

void printWinner(char winner){
    if(winner==PLAYER){
        printf("\n\nYou win!");
    }
    else if(winner==COMPUTER){
        printf("\n\nPC wins!");
    }
    else {
        printf("\n\nIt's a tie!");
    }
}
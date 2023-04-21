/*Write a program that allows two players (player X and player O) to play a game of tic-tac-toe. 
Use a two- dimensional char array with three rows and three columns as the game board. Each element of the array should be initialized with an asterisk (*). 
The players take turns making moves and the program keeps track of whose turn it is. Player X moves first. The program should run a loop that:
Displays the contents of the board array (see prompts and output, below).
Prompts and allows the player whose turn it is to select a location on the board for an X in the case of player X or an O in the case of player O. 
The program should ask the player to enter the row and column number. Valid row or column numbers are 1, 2, or 3.
The loop terminates when a player has won, or a tie has occurred. If a player has won, the program should declare that player the winner and end. 
If a tie has occurred, the program should say so and end.
Player X (O) wins when there are three Xs (three Os) in a row on the game board. The Xs (Os) can appear in a row, in a column, or diagonally across the board.
A tie occurs when all of the locations on the board are full, but there is no winner.*/

#include <iostream>
using namespace std;

void showBoard(char[][3]);
bool checkWinner(char[][3], char);
void playerMove(char[][3], char);

int main()
 {

    char board[3][3] = {{'.', '.', '.'},
                        {'.', '.', '.'},
                        {'.', '.', '.'}};

    int moves = 0;


    while(true){

        showBoard(board);
		playerMove(board, 'X');



        moves++;

        if(checkWinner(board, 'X')){

            cout << "Player X wins\n";
            return 0;
        }


        if(moves == 9)
            break;

        showBoard(board);



        playerMove(board, 'O');
        moves++;

        if(checkWinner(board, 'O')){

            cout << "Player O wins\n";
            return 0;
        }
    }


    showBoard(board);
    cout << "This game is a tie!\n";


    return 0;
 }


void showBoard(char board [][3]){

    for(int row = 0; row < 3; row++){

        for(int col = 0; col < 3; col++)
            cout << board[row][col];


        cout << endl;
    }


}

bool checkWinner(char board[][3], char player){

    bool flag;

    for(int row = 0; row < 3; row++){

        flag = true;

        for(int col = 0; col < 3; col++){

            flag *= (board[row][col] == player);
        }


        if(flag)
            return true;
        else
            continue;
    }


    for(int col = 0; col < 3; col++){
        flag = true;
        for(int row = 0; row < 3; row++){
            flag *= (board[row][col] == player);
        }

        if(flag)
            return true;
        else
            continue;
    }


    flag = true;

    for(int i = 0; i < 3; i++){
        flag *= (board[i][i] == player);
    }

    if(flag)
        return true;


    flag = true;

    for(int col = 0; col < 3; col++){
        flag *= (board[2-col][col] == player);
    }

    if(flag)
        return true;


    return false;
}


void playerMove(char board[][3], char player){

    int row, col;

    cout << "Enter player "<< player << ", row and column:";
    cin >> row >> col;

    while(board[row-1][col-1] != '.' ||
          row > 3 || row < 0 ||
          col > 3 || row < 0)
            {

        cout << "Enter player " << player << ", row and column:";
        cin >> row >> col;
    }

    board[row-1][col-1] = player;
}

#include <iostream>
#include <limits>
using namespace std;
void player1(int board[]);
int identify(int board[]);
void player2(int board[]);
void printboard(int board[]);
int main(){
    
    cout<<"TIC-TAC-TOE"<<endl;
   
    int board[9] = {0,0,0,0,0,0,0,0,0};
    for (int i = 1; i <= 9; i++) {
            if (identify(board) != 0) {
                break;
            }
            if (i % 2 == 0) {
                printboard(board);
                player1(board);
            } else {
                printboard(board);
               player2(board);
            }
        }
        int x = identify(board);
    if (x == 0) {
        printboard(board);
        cout << "Draw"<<endl;
    }
    if (x == -1) {
        printboard(board);
        cout << "Player X Wins!!! O Loses"<<endl;
    }
    if (x == 1) {
        printboard(board);
        cout << "Player O Wins!!!! X Loses"<<endl;
    }
    
    cout<<"Enter Y  to play again Enter N to end"<<endl;
     char choice;cin>>choice;
     if ( choice == 'Y' || choice == 'y'){
        main();
     }else if (choice=='N'||choice=='n'){
        cout<<"END"<<endl;
     }
}
void player1(int board[]) {
    int pos;
    cout << "Enter the position from [1....9]: ";
    cin >> pos;
    if (board[pos - 1] != 0) {
        cout << "\nSorry! That place is already occupied. Try again.\n";
        exit(0);
    }
    board[pos - 1] = -1;
}

void player2(int board[]) {
    int pos;
    cout << "Enter the position from [1....9]: ";
    cin >> pos;
    if (board[pos - 1] != 0) {
        cout<<endl<<"Sorry! That place is already occupied. Try again.\n";
        exit(0);
    }
    board[pos - 1] = 1;
}
void printboard(int board[]) {
    cout << "The current state of the Board is:"<<endl<<endl;
    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0 && i > 0) {
            cout << "\n";
        }
        if (board[i] == 0) {
            cout << "_ ";
        }
        if (board[i] == -1) {
            cout << "X ";
        }
        if (board[i] == 1) {
            cout << "O ";
        }
    }
    cout << "\n\n";
}
int identify(int board[]) {
    int cb[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{2,4,6},{0,4,8}};
    for (int i = 0; i < 8; i++) {
        if (board[cb[i][0]] == board[cb[i][1]] && board[cb[i][0]] != 0 && board[cb[i][0]] == board[cb[i][2]]) {
            return board[cb[i][0]];
        }
    }
    return 0;
}
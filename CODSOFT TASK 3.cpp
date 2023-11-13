#include<iostream>
using namespace std;

char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};//declared a 2D array with initial value 1-9

int choice;//stores the user's choice for a position on the board.

int row, col;// Represent the row and column chosen by the player.

char turn = 'X';//Represents the current player ('X' or 'O').

bool draw = false;//Tracks whether the game is a draw.

void display_board()//Declared a function display_board() to display the Tic-Tac-Toe board.
{
    system("cls");//Clears the console screen (system("cls")) to update the display and Prints the Tic-Tac-Toe board with the current state.
    cout << " TIC - TAC - TOE " << endl;
    cout << "\tPlayer1 -> 'X' \n\tPlayer2 -> 'O' \n" << endl;
    cout << "\t\t  " << arr[0][0] << "   |  " << arr[0][1] << "   |  " << arr[0][2] << endl;
    cout << "\t\t______|______|_____" << endl;
    cout << "\t\t  " << arr[1][0] << "   |  " << arr[1][1] << "   |  " << arr[1][2] << endl;
    cout << "\t\t______|______|_____" << endl;
    cout << "\t\t  " << arr[2][0] << "   |  " << arr[2][1] << "   |  " << arr[2][2] << endl;
    cout << "\t\t      |      |     " << endl;
}

void player_turn()//Declared a function player_turn() to handle the player's turn.
{
    if (turn == 'X') 
	{
        cout << "Player1 -> 'X' turn \n";
    }
    if (turn == 'O') 
	{
        cout << "Player2 -> 'O' turn \n";
    }
    cout << "Enter your choice" << endl;
    cin >> choice;

    switch (choice) 
	{
    case 1: row = 0; col = 0; break;
    case 2: row = 0; col = 1; break;
    case 3: row = 0; col = 2; break;
    case 4: row = 1; col = 0; break;
    case 5: row = 1; col = 1; break;
    case 6: row = 1; col = 2; break;
    case 7: row = 2; col = 0; break;
    case 8: row = 2; col = 1; break;
    case 9: row = 2; col = 2; break;
    default:
        cout << "INVALID CHOICE!!!" << endl;
    }
    if (turn == 'X' && arr[row][col] != 'O' && arr[row][col] != 'X') 
	{
        arr[row][col] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && arr[row][col] != 'X' && arr[row][col] != 'O') 
	{
        arr[row][col] = 'O';
        turn = 'X';
    }
    else 
	{
        cout << "PLEASE TRY AGAIN!!!" << endl;
        player_turn();
    }
    display_board();
}

bool result()//Declared a function result() to check the result of the game.
{
    for (int i = 0; i < 3; i++) 
	{
        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] || arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] || arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] || arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
            return false;
    }
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            if (arr[i][j] != 'X' && arr[i][j] != 'O')
                return true;
        }
    }
    draw = true;
    return false;
}

int main()//The program execution begins from the main function.
{
    char playAgain;
    do {//The program enters a do-while loop to allow the players to play the game multiple times.
        while (result()) 
		{
            display_board();
            player_turn();
            result();
        }

        if (turn == 'X' && draw == false) 
		{
            cout << "Player 2 wins!!" << endl;
        }
        else if (turn == 'O' && draw == false) 
		{
            cout << "Player 1 wins!!" << endl;
        }
        else 
		{
            cout << "THE MATCH IS DRAW!!\n" << endl;
        }

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;

        if (playAgain == 'Y' || playAgain == 'y') 
		{
            draw = false;
            turn = 'X';
            arr[0][0] = '1'; arr[0][1] = '2'; arr[0][2] = '3';
            arr[1][0] = '4'; arr[1][1] = '5'; arr[1][2] = '6';
            arr[2][0] = '7'; arr[2][1] = '8'; arr[2][2] = '9';
        }
    } while (playAgain == 'Y' || playAgain == 'y');//Asks the players if they want to play again and If yes, resets the game state for a new round..

    return 0;
}


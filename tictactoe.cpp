#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

    char space1 = '1';
    char space2 = '2';
    char space3 = '3';
    char space4 = '4';
    char space5 = '5';
    char space6 = '6';
    char space7 = '7';
    char space8 = '8';
    char space9 = '9';
    char player = 'X';
    int wincondition = 0;


void Draw() 
{
    cout << "Welcome to Tic Tac Toe!\n";
    cout << space1 << " " << space2 << " " << space3 << "\n";
    cout << space4 << " " << space5 << " " << space6 << "\n";
    cout << space7 << " " << space8 << " " << space9 << "\n";
}

void Input()
{
    int choice;

    cout << "Choose a space (1 - 9): ";
    cin >> choice;

    if (choice == 1 && space1 == '1')
    {
        space1 = player;
    }
    else if (choice == 2 && space2 == '2')
    {
        space2 = player;
    }
    else if (choice == 3 && space3 == '3')
    {
        space3 = player;
    }
    else if (choice == 4 && space4 == '4')
    {
        space4 = player;
    }
    else if (choice == 5 && space5 == '5')
    {
        space5 = player;
    }
    else if (choice == 6 && space6 == '6')
    {
        space6 = player;
    }
    else if (choice == 7 && space7 == '7')
    {
        space7 = player;
    }
    else if (choice == 8 && space8 == '8')
    {
        space8 = player;
    }
    else if (choice == 9 && space9 == '9')
    {
        space9 = player;
    }
    else
    {
        cout << "This space is already taken. Choose another space.\n";

        return Input();
    }
}

void ChangePlayer()
{
    if (player == 'X')
    {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
}

void CheckWinCondition()
{ 
    if (space1 == 'X' && space2 == 'X' && space3 == 'X') {          //Row 1
        std::cout << "Player 1 Wins!\n";
        wincondition = 1;
    }
    else if (space4 == 'X' && space5 == 'X' && space6 == 'X') {     //Row 2
        std::cout << "Player 1 Wins!\n";
        wincondition = 1;
    }
    else if (space5 == 'X' && space6 == 'X' && space7 == 'X') {     //Row 3
        std::cout << "Player 1 Wins!\n";
        wincondition = 1;
    }
    else if (space1 == 'X' && space4 == 'X' && space7 == 'X') {     //Column 1
        std::cout << "Player 1 Wins!\n";
        wincondition = 1;
    }
    else if (space2 == 'X' && space5 == 'X' && space8 == 'X') {     //Column 2
        std::cout << "Player 1 Wins!\n";
        wincondition = 1;
    }
    else if (space3 == 'X' && space6 == 'X' && space9 == 'X') {     //Column 3
        std::cout << "Player 1 Wins!\n";
        wincondition = 1;
    }
    else if (space1 == 'X' && space5 == 'X' && space9 == 'X') {     //Diagonal 1
        std::cout << "Player 1 Wins!\n";
        wincondition = 1;
    }
    else if (space7 == 'X' && space5 == 'X' && space3 == 'X') {     //Diagonal 2
        std::cout << "Player 1 Wins!\n";
        wincondition = 1;
    }
    else if (space1 == 'O' && space2 == 'O' && space3 == 'O') {     //Row 1
        std::cout << "Player 2 Wins!\n";
        wincondition = 1;
    }
    else if (space4 == 'O' && space5 == 'O' && space6 == 'O') {     //Row 2
        std::cout << "Player 2 Wins!\n";
        wincondition = 1;
    }
    else if (space5 == 'O' && space6 == 'O' && space7 == 'O') {     //Row 3
        std::cout << "Player 2 Wins!\n";
        wincondition = 1;
    }
    else if (space1 == 'O' && space4 == 'O' && space7 == 'O') {     //Column 1
        std::cout << "Player 2 Wins!\n";
        wincondition = 1;
    }
    else if (space2 == 'O' && space5 == 'O' && space8 == 'O') {     //Column 2
        std::cout << "Player 2 Wins!\n";
        wincondition = 1;
    }
    else if (space3 == 'O' && space6 == 'O' && space9 == 'O') {     //Column 3
        std::cout << "Player 2 Wins!\n";
        wincondition = 1;
    }
    else if (space1 == 'O' && space5 == 'O' && space9 == 'O') {     //Diagonal 1
        std::cout << "Player 2 Wins!\n";
        wincondition = 1;
    }
    else if (space7 == 'O' && space5 == 'O' && space3 == 'O') {     //Diagonal 2
        std::cout << "Player 2 Wins!\n";
        wincondition = 1;
    }
    else {
        std::cout << "Next Player's Turn\n";
    }
}

int main()
{
    Draw();
    while (wincondition == 0)
    {
        Input();
        Draw();
        CheckWinCondition();
        ChangePlayer();
    }

}

#include <iostream>
#include <conio.h>
#include <windows.h>

char space1 = '1';
char space2 = '2';
char space3 = '3';
char space4 = '4';
char space5 = '5';
char space6 = '6';
char space7 = '7';
char space8 = '8';
char space9 = '9';

bool player1won = false;
bool player2won = false;
bool draw = false;

bool won = false;
bool lost = false;
bool AIselect = false;

bool infiniteloop = true;
char playagain = ' ';

char selection;

int players;

//Singleplayer is broken, couldn't figure out certain things. Breaks when the AI tries to place an O where there is an X, and when you win. If you know how to fix it, I'd love to know so I know how to do it next time.
int singleplayer() {
    do {
        int i;
        i = rand() % 9 + 1;
        system("cls");
        std::cout << "\n | " << space1 << " | " << space2 << " | " << space3 << " |\n";
        std::cout << " | " << space4 << " | " << space5 << " | " << space6 << " |\n";
        std::cout << " | " << space7 << " | " << space8 << " | " << space9 << " |\n";
        std::cout << "Select a number between 1 and 9.\n";
        std::cin >> selection;
        switch (selection) {
        case '1':
            if (space1 == '1') {
                space1 = 'X';
            }
            break;
        case '2':
            if (space2 == '2') {
                space2 = 'X';
            }
            break;
        case '3':
            if (space3 == '3') {
                space3 = 'X';
            }
            break;
        case '4':
            if (space4 == '4') {
                space4 = 'X';
            }
            break;
        case '5':
            if (space5 == '5') {
                space5 = 'X';
            }
            break;
        case '6':
            if (space6 == '6') {
                space6 = 'X';
            }
            break;
        case '7':
            if (space7 == '7') {
                space7 = 'X';
            }
            break;
        case '8':
            if (space8 == '8') {
                space8 = 'X';
            }
            break;
        case '9':
            if (space9 == '9') {
                space9 = 'X';
            }
            break;
        }
        if ((space1 == 'X' && space2 == 'X' && space3 == 'X') || (space1 == 'X' && space4 == 'X' && space7 == 'X') || (space1 == 'X' && space5 == 'X' && space9 == 'X') || (space2 == 'X' && space5 == 'X' && space8 == 'X') || (space3 == 'X' && space6 == 'X' && space9 == 'X') || (space4 == 'X' && space5 == 'X' && space6 == 'X') || (space7 == 'X' && space8 == 'X' && space9 == 'X') || (space3 == 'X' && space5 == 'X' && space7 == 'X')) {
            won = true;
        }
        system("cls");
        std::cout << "\n | " << space1 << " | " << space2 << " | " << space3 << " |\n";
        std::cout << " | " << space4 << " | " << space5 << " | " << space6 << " |\n";
        std::cout << " | " << space7 << " | " << space8 << " | " << space9 << " |\n";
        if (won == false) {
            switch (i) {
            case 1:
                if (space1 == '1') {
                    space1 = 'O';
                    AIselect = true;
                }
                break;
            case 2:
                if (space2 == '2') {
                    space2 = 'O';
                    AIselect = true;
                }
                break;
            case 3:
                if (space3 == '3') {
                    space3 = 'O';
                    AIselect = true;
                }
                else {
                }
                break;
            case 4:
                if (space4 == '4') {
                    space4 = 'O';
                    AIselect = true;
                }
                break;
            case 5:
                if (space5 == '5') {
                    space5 = 'O';
                    AIselect = true;
                }
                break;
            case 6:
                if (space6 == '6') {
                    space6 = 'O';
                    AIselect = true;
                }
                break;
            case 7:
                if (space7 == '7') {
                    space7 = 'O';
                    AIselect = true;
                }
                break;
            case 8:
                if (space8 == '8') {
                    space8 = 'O';
                    AIselect = true;
                }
                break;
            case 9:
                if (space9 == '9') {
                    space9 = 'O';
                    AIselect = true;
                }
                break;
            }
        } while (AIselect == false);
        AIselect = false;
        if ((space1 == 'O' && space2 == 'O' && space3 == 'O') || (space1 == 'O' && space4 == 'O' && space7 == 'O') || (space1 == 'O' && space5 == 'O' && space9 == 'O') || (space2 == 'O' && space5 == 'O' && space8 == 'O') || (space3 == 'O' && space6 == 'O' && space9 == 'O') || (space4 == 'O' && space5 == 'O' && space6 == 'O') || (space7 == 'O' && space8 == 'O' && space9 == 'O') || (space3 == 'O' && space5 == 'O' && space7 == 'O')) {
            lost = true;
        }
    } while (won == false && lost == false);
    if (won == true) {
        std::cout << "Player victory!";
    }
    if (lost == true) {
        std::cout << "Computer victory!";
    }
    return 0;
}

int multiplayer() {
    do {
        system("cls");
        std::cout << "Player 1";
        std::cout << "\n | " << space1 << " | " << space2 << " | " << space3 << " |\n";
        std::cout << " | " << space4 << " | " << space5 << " | " << space6 << " |\n";
        std::cout << " | " << space7 << " | " << space8 << " | " << space9 << " |\n";
        std::cout << "Select a number between 1 and 9.\n";
        std::cin >> selection;
        switch (selection) { //Checking if the number has been taken, and if not sets it to be X.
        case '1':
            if (space1 == '1') {
                space1 = 'X';
            }
            break;
        case '2':
            if (space2 == '2') {
                space2 = 'X';
            }
            break;
        case '3':
            if (space3 == '3') {
                space3 = 'X';
            }
            break;
        case '4':
            if (space4 == '4') {
                space4 = 'X';
            }
            break;
        case '5':
            if (space5 == '5') {
                space5 = 'X';
            }
            break;
        case '6':
            if (space6 == '6') {
                space6 = 'X';
            }
            break;
        case '7':
            if (space7 == '7') {
                space7 = 'X';
            }
            break;
        case '8':
            if (space8 == '8') {
                space8 = 'X';
            }
            break;
        case '9':
            if (space9 == '9') {
                space9 = 'X';
            }
            break;
        }
        if ((space1 == 'X' && space2 == 'X' && space3 == 'X') || (space1 == 'X' && space4 == 'X' && space7 == 'X') || (space1 == 'X' && space5 == 'X' && space9 == 'X') || (space2 == 'X' && space5 == 'X' && space8 == 'X') || (space3 == 'X' && space6 == 'X' && space9 == 'X') || (space4 == 'X' && space5 == 'X' && space6 == 'X') || (space7 == 'X' && space8 == 'X' && space9 == 'X') || (space3 == 'X' && space5 == 'X' && space7 == 'X')) {
            player1won = true; //Calculates all possible outcomes of victory for player 1.
        }
        if (space1 != '1' && space2 != '2' && space3 != '3' && space4 != '4' && space5 != '5' && space6 != '6' && space7 != '7' && space8 != '8' && space9 != '9' && player1won == false && player2won == false) {
            draw = true; 
        }
        system("cls");
        std::cout << "\n | " << space1 << " | " << space2 << " | " << space3 << " |\n";
        std::cout << " | " << space4 << " | " << space5 << " | " << space6 << " |\n";
        std::cout << " | " << space7 << " | " << space8 << " | " << space9 << " |\n";
        if (player1won == false) { // Is an if-condition so player 2 doesn't get to take a turn after player 1 wins.
        system("cls");
        std::cout << "Player 2";
        std::cout << "\n | " << space1 << " | " << space2 << " | " << space3 << " |\n";
        std::cout << " | " << space4 << " | " << space5 << " | " << space6 << " |\n";
        std::cout << " | " << space7 << " | " << space8 << " | " << space9 << " |\n";
        std::cout << "Select a number between 1 and 9.\n";
        std::cin >> selection;
        switch (selection) {
        case '1':
            if (space1 == '1') {
                space1 = 'O';
            }
            break;
        case '2':
            if (space2 == '2') {
                space2 = 'O';
            }
            break;
        case '3':
            if (space3 == '3') {
                space3 = 'O';
            }
            break;
        case '4':
            if (space4 == '4') {
                space4 = 'O';
            }
            break;
        case '5':
            if (space5 == '5') {
                space5 = 'O';
            }
            break;
        case '6':
            if (space6 == '6') {
                space6 = 'O';
            }
            break;
        case '7':
            if (space7 == '7') {
                space7 = 'O';
            }
            break;
        case '8':
            if (space8 == '8') {
                space8 = 'O';
            }
            break;
        case '9':
            if (space9 == '9') {
                space9 = 'O';
            }
            break;
        }
    }
        if ((space1 == 'O' && space2 == 'O' && space3 == 'O') || (space1 == 'O' && space4 == 'O' && space7 == 'O') || (space1 == 'O' && space5 == 'O' && space9 == 'O') || (space2 == 'O' && space5 == 'O' && space8 == 'O') || (space3 == 'O' && space6 == 'O' && space9 == 'O') || (space4 == 'O' && space5 == 'O' && space6 == 'O') || (space7 == 'O' && space8 == 'O' && space9 == 'O') || (space3 == 'O' && space5 == 'O' && space7 == 'O')) {
            player2won = true;
        }
        if (space1 != '1' && space2 != '2' && space3 != '3' && space4 != '4' && space5 != '5' && space6 != '6' && space7 != '7' && space8 != '8' && space9 != '9' && player1won == false && player2won == false) {
            draw = true;
        }
    } while (player1won == false && player2won == false && draw == false);
    if (player1won == true) {
    std::cout << "Player 1 victory!\n";
    }
    if (player2won == true) {
        std::cout << "Player 2 victory!\n";
    }
    if (draw == true) {
        std::cout << "Everybody loses!\n";
    }
    std::cout << "Play again?\n";
    std::cout << "1: Yes 2: No\n";
    std::cin >> playagain;
    switch (playagain) {
    case '1':
        break;
    case '2':
        infiniteloop = false;
        break;
    }

    return 0;
}

int main()
{
    while (infiniteloop == true){
        system("cls");
        std::cout << "Let's get ready to TIC TAC TOE!\n\n";
        std::cout << " | " << space1 << " | " << space2 << " | " << space3 << " |\n";
        std::cout << " | " << space4 << " | " << space5 << " | " << space6 << " |\n";
        std::cout << " | " << space7 << " | " << space8 << " | " << space9 << " |\n";
        std::cout << "But first: one or two players?\n";
        std::cin >> players;
        system("cls");
        switch (players) {
        case 1:
            singleplayer();
            break;
        case 2:
            multiplayer();
            break;
        }
    } 
}


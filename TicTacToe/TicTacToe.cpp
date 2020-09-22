#include <iostream>

char space1 = '1';
char space2 = '2';
char space3 = '3';
char space4 = '4';
char space5 = '5';
char space6 = '6';
char space7 = '7';
char space8 = '8';
char space9 = '9';



int players;

int singleplayer() {
    
}

int multiplayer() {
}

int main()
{
    std::cout << "Let's get ready to TIC TAC TOE!\n\n";
    std::cout << " | " << space1 << " | " << space2 << " | " << space3 << " |\n";
    std::cout << " | " << space4 << " | " << space5 << " | " << space6 << " |\n";
    std::cout << " | " << space6 << " | " << space8 << " | " << space9 << " |\n";
    std::cout << "But first: one or two players?\n";
    std::cin >> players;
    switch (players) {
    case '1': case 'one':
        singleplayer();
        break;
    case '2': case 'two':
        multiplayer();
        break;
    }
    
}


#include "Minesweeperboard.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

int main() {
    srand (time(nullptr));
    MinesweeperBoard *board = new MinesweeperBoard(9, 7, DEBUG);
    board->debug_display();
    std::cout << '\n';
    board = new MinesweeperBoard(9, 7, EASY);
    board->debug_display();
    std::cout << '\n';
    board = new MinesweeperBoard(9, 7, NORMAL);
    board->debug_display();
    std::cout << '\n';
    board = new MinesweeperBoard(9, 7, HARD);
    board->debug_display();
    delete board;
    return 0;
}
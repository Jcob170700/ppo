#ifndef PPO_MINESWEEPERBOARD_H
#define PPO_MINESWEEPERBOARD_H
#include "field.h"
#include <iostream>

enum GameMode { DEBUG, EASY, NORMAL, HARD};
enum GameState { RUNNING, FINISHED_WIN, FINISHED_LOSS };

class MinesweeperBoard
{
    int height;
    int width;
    int mine_count;
    GameState state;
    Field board[100][100];
public:
    MinesweeperBoard(int width, int height, GameMode mode);
    void debug_display() const;
    void displayField(const Field& field) const;
    int getBoardWidth() const;
    int getBoardHeight() const;
    int getMineCount() const;
    int countMines( int x, int y ) const;
    bool hasFlag( int x, int y ) const;
    void toggleFlag( int x, int y );
    void revealField( int x, int y );
    bool isRevealed( int x, int y ) const;
    char getFieldInfo( int x, int y ) const;
    bool isOutside(int x, int y) const;

    private:
    GameState getGameState( ) const;

};

#endif //PPO_MINESWEEPERBOARD_H

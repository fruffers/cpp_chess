#include "Piece.hpp"

class ChessBoard {
public:
    ChessBoard();
    void displayBoard();
    //bool makeMove(int startX, int startY, int endX, int endY);
private:
    Piece* board[8][8];
    //bool isValidMove(int startX, int startY, int endX, int endY);
    void initializeBoard();
};
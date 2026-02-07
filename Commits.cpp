#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum Piece { EMPTY, WHITE, WHITE_KING, BLACK, BLACK_KING };
struct Cell {
    Piece piece;
    Cell() : piece(EMPTY) {}
};

class Board {
    vector<vector<Cell>> board;
public:
    Board();
    void print();
    bool move(int x1, int y1, int x2, int y2);
    bool canMove(int x1, int y1, int x2, int y2);
};
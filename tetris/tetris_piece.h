#ifndef TETRIS_PIECE_H
#define TETRIS_PIECE_H

enum TetrixShape { NoShape, ZShape, SShape, LineShape, TShape, SquareShape,
                   LShape, MirroredLShape };


class tetris_piece
{
public:
    tetris_piece() { setShape(NoShape); }

    void setRandomShape();
    void setShape(TetrixShape shape);

    TetrixShape shape() const { return pieceShape; }
    int x(int index) const { return coords[index][0]; }
    int y(int index) const { return coords[index][1]; }
    int minX() const;
    int maxX() const;
    int minY() const;
    int maxY() const;
    tetris_piece rotatedLeft() const;
    tetris_piece rotatedRight() const;

private:
    void setX(int index, int x) { coords[index][0] = x; }
    void setY(int index, int y) { coords[index][1] = y; }

    TetrixShape pieceShape;
    int coords[4][2];
};

#endif // TETRIS_PIECE_H

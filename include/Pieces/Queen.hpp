#include "Piece.hpp"
#include "Position.hpp"
#include "Color.hpp"

class Queen: public Piece {
    public:
        Queen(Color color);
        Color getColor() const;
        std::vector<Move> getValidMoves(const Position& position) const override;
    protected:
        Color color;
};
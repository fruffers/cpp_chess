#include <vector>
#include <string>
#include "../Color.hpp"
#include "../Move.hpp"
#include "../Position.hpp"

// Interface for chess pieces
class Piece {
    public:
        Piece(Color color);
        virtual ~Piece();
        Color getColor() const;
        virtual std::vector<Move> getValidMoves(const Position& position) const = 0;
    protected:
        Color color;
        std::vector<Move> validMoves;
        std::string image;
        Position position;
};

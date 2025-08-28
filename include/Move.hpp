class Move {
public:
    Move(int startX, int startY, int endX, int endY);
    virtual ~Move();
    virtual int getStartX() const;
    virtual int getStartY() const;
    virtual int getEndX() const;
    virtual int getEndY() const;
private:
    int startX;
    int startY;
    int endX;
    int endY;
};

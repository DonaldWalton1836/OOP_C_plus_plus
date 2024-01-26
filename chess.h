class Queen
{
    private:
    int x;
    int y;

    public:

    Queen();
    void move(int newX, int newY);
    int get_Queen_Y();
    int get_Queen_X();

    int newXQueen;
    int newYQueen;

};




class Bishop
{
    private:
    int x;
    int y;

    public:

    Bishop();

    void move(int newX, int newY);

    int get_Bishop_X();
    int get_Bishop_Y();

    int newXBishop;
    int newYBishop;

};

class Rook
{
    private:
    int x;
    int y;

    public:
    Rook();
    void move(int x, int y);

    int get_Rook_X();
    int get_Rook_Y();

    int newXRook;
    int newYRook;

    
};


class Knight
{
    private:
    int x;
    int y;

    public:
    Knight();
    void move(int newXknight, int newYKnight);

    int get_Knight_X();
    int get_Knight_Y();

    int newXKnight;
    int newYKnight;

    
};




class Card
{
    public:
        enum Suits
        {
            HEARTS = 3,
            DIAMONDS,
            CLUBS,
            SPADES
        };
        enum Ranks
        {
            TWO = 2,
            THREE,
            FOUR,
            FIVE,
            SIX,
            SEVEN,
            EIGHT,
            NINE,
            TEN,
            JACK,
            QUEEN,
            KING,
            ACE
        };

        Card(Ranks RANK, Suits SUIT);
        virtual ~Card();
 
        Ranks getRank();
        Suits  getSuit();
 
        virtual int getFaceValue();
        
    private:
        Ranks RANK;
        Suits SUIT;
};

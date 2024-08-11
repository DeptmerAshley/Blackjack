class Card
  2 {
  3 public:
  4         enum Suits
  5         {
  6                 HEARTS = 3,
  7                 DIAMONDS,
  8                 CLUBS,
  9                 SPADES
 10         };
 11 
 12         enum Ranks
 13         {
 14                 TWO = 2,
 15                 THREE,
 16                 FOUR,
 17                 FIVE,
 18                 SIX,
 19                 SEVEN,
 20                 EIGHT,
 21                 NINE,
 22                 TEN,
 23                 JACK,
 24                 QUEEN,
 25                 KING,
 26                 ACE
 27         };
 28 
 29         Card(Ranks RANK, Suits SUIT);
 30         virtual ~Card();
 31 
 32         Ranks getRank();
 33         Suits  getSuit();
 34 
 35         virtual int getFaceValue();
 36 private:
 37         Ranks RANK;
 38         Suits SUIT;
 39 
 40 };

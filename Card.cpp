#include "Card.h"
  2 
  3 Card::Card(Ranks RANK, Suits SUIT)
  4 {
  5         Rank(RANK),
  6         Suit(SUIT)
  7 
  8 }
  9 
 10 Card::~Card()
 11 {
 12         //Nothing here
 13 }
 14 
 15 Card::Ranks Card::getRank()
 16 {
 17         return Rank;
 18 
 19 }
 20 
 21 card::Suits Card::getSuits()
 22 {
 23         return Suit;
 24 
 25 }
 26 
 27 int Card::getFaceValue()
 28 {
 29         if(Rank<=TEN){
 30                 return static_cast<int>(Rank);
 31         }
 32         if(Rank <= KING){
 33                 return 10;
 34 
 35         return 11;
 36 
 37 }

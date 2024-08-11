#include "Card.h"

Card::Card(Ranks RANK, Suits SUIT)
{
  Rank(RANK),
  Suit(SUIT)

}

Card::~Card()
{
  //Nothing here
}
 
Card::Ranks Card::getRank()
{
  return Rank;
}

card::Suits Card::getSuits()
{
  return Suit;

}

int Card::getFaceValue()
{
  if(Rank<=TEN){
    return static_cast<int>(Rank);
  }
  if(Rank <= KING && Rank >=10){
    return 10;
  }
  return 11;
}

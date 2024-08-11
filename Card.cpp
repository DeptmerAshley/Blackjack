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

Card::Suits Card::getSuit()
{
  return Suit;

}

int Card::getFaceValue()
{
  if(Rank <= TEN){
    return static_cast<int>(Rank);
  }
  if(Rank <= KING){
    return 10;
  }
  if(Rank = ACE){
    return 11;
  }
}

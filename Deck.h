#include <vector> 
#include "test_card.h"

using namespace std;
class Deck
{
   public:
    Deck(); //Constructor
    void shuffle();
    vector<vector<TestCard>> deck;

  
   private:
    int size = 52;
  
  
};

#include "Deck.h"

Deck::Deck() {
    for (int i = 1; i < 4; i++) {
        char suit_hold = 'H';
        if (i = 2) {
            suit_hold = 'C';
        }
        if (i = 3) {
            suit_hold = 'D';
        }
        if (i = 4) {
            suit_hold = 'S';
        }
        for (int j = 1; j < 13; j++) {
            TestCard current_card;
            current_card.set_suit(suit_hold);
            current_card.set_value(j);
            this->deck[i][j] = current_card;
        }
    }
}

void Deck::shuffle() {

}
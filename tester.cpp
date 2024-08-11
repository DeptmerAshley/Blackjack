#include "Deck.h"
#include <iostream>

int main() {
    Deck firstdeck;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 12; j++) {
            cout << firstdeck.deck[i][j].get_value() << firstdeck.deck[i][j].get_suit() << ", ";
        }
    }

    return 0;
}
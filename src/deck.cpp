//
// Created by Benjamin Bremer on 12/8/23.
//

#include "deck.h"

void draw_hand() {

    if(sizeof(cards) >= DEFAULT_HAND_SIZE) {

        for(int i = 0; i < DEFAULT_HAND_SIZE; i++) {

            if(sizeof(cards) <= 0) {

                shuffle_deck();

            }

            hand[i] = cards[sizeof(cards) - 1];
            cards[sizeof(cards) - 1] = NULL;

        }

    }

}

void draw_card() {

    if(sizeof(cards) <= 0) {

        shuffle_deck;

    }

    hand[sizeof(hand)] = cards[sizeof(cards) - 1];

}

void shuffle_deck() {



}

//
// Created by Benjamin Bremer on 12/8/23.
//

#ifndef DECK_H
#define DECK_H

export module Deck;

export class deck {

    public:
        Deck() {

            cards = new Card[];
            hand = new Card[];

        }
        Card[] get_deck() { return cards; }
        Card[] get_hand() { return hand; }
        void draw_hand();
        int DEFAULT_HAND_SIZE = 5;

    private:
        Card[] cards;
        Card[] discarded;
        Card[] hand;
        void shuffle_deck();

};

#endif //DECK_H

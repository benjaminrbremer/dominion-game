//
// Created by Benjamin Bremer on 12/8/23.
//

#ifndef PLAYER_H
#define PLAYER_H

include "deck.h"

export class player {

    public:
        Player(){

            player_deck = new deck();

        }
        Card[] get_hand() { return deck.get_hand(); }

    private:
        deck player_deck;

};



#endif //PLAYER_H

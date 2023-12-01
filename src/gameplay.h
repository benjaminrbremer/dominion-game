//
// Created by Benjamin Bremer on 11/28/23.
//

#ifndef DOMINION_GAME_GAMEPLAY_H
#define DOMINION_GAME_GAMEPLAY_H

#indluce "iostream"
#include "vector"

int DEFAULT_HAND_SIZE = 5;
int DEFAULT_DECK_SIZE = 10;

srand(unsigned(time(NULL)));

int actions;
int buys;
int current_player;
int total_players;
void*** players_hands;
void*** players_decks;

class gameplay {

    void add_action() {

        actions ++;

    }

    void add_buy() {

        buys ++;

    }

    void use_action() {

        action --;

    }

    void use_buy() {

        buys --;

    }

    void switch_player() {

        current_player ++;

        if(current_player > total_players) {

            current_player = 1;

        }

    }

    void shuffle_deck(std::vector< void* >& deck) {

        std::random_shuffle(deck.begin(), deck.end());

    }

};


#endif //DOMINION_GAME_GAMEPLAY_H

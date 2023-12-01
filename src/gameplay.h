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
int treasure;
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

    void add_treasure(int amount) {

        treasure += amount;

    }

    void use_action() {

        action --;

    }

    void use_buy() {

        buys --;

    }

    void use_treasure(int amount) {

        treasure -= amount;

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

    // Add a function for drawing a card

    // Add functions for dynamically resizing the hand and deck array
        // Hand array increase by 1 at a time, since it's rare to go much over 5
        // Deck array double every time you have to resize

};


#endif //DOMINION_GAME_GAMEPLAY_H

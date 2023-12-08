//
// Created by Benjamin Bremer on 11/28/23.
//

#ifndef DOMINION_GAME_GAMEPLAY_H
#define DOMINION_GAME_GAMEPLAY_H

import std
#include "vector"

int DEFAULT_HAND_SIZE = 5;
int DEFAULT_DECK_SIZE = 10;

srand(unsigned(time(NULL)));

export module Gameplay;

export class gameplay {

    public:
        gameplay(int num_players);
        void add_action() { actions ++; }
        void add_buy() { buys ++; }
        void add_treasure(int amount) { treasure += amount; }
        void use_action() { action --; }
        void use_buy() { buys --; }
        void use_treasure(int amount) { treasure -= amount; }
        void play_game();

    private:
        int actions;
        int buys;
        int treasure;
        int current_player;
        int total_players;
        Player[] players;
        bool playGame;
        public void switch_player();

};


#endif //DOMINION_GAME_GAMEPLAY_H

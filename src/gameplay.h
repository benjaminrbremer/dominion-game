//
// Created by Benjamin Bremer on 11/28/23.
//

#ifndef DOMINION_GAME_GAMEPLAY_H
#define DOMINION_GAME_GAMEPLAY_H

int actions;
int buys;
int current_player;
int total_players;

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

};


#endif //DOMINION_GAME_GAMEPLAY_H

//
// Created by Benjamin Bremer on 11/28/23.
//

#include "gameplay.h"

import std;

using namespace std;

void gameplay(int num_players) {

    // Set play_game to true so game begins when play_game() is called
    play_game = true;

    // Setup players
    total_players = num_players;
    players = new Player[total_players];
    current_player = 0;

    for(int i = 0; i < total_players; i++) {

        // Initialize Player object
        players[i] = new Player();

        // Add 7 Copper cards to the deck
        for(int copper = 1; copper <= 7; copper++) {

            players[i].addCard(new Copper());

        }

        // Add 3 Estate cards to the deck
        for(int estate = 1; estate <= 3; estate++) {

            players[i].addCard(new Estate());

        }

    }

}

void switch_player() {

    current_player ++;

    if(current_player >= total_players) {

        current_player = 0;

    }

    play_game();

}

void play_game() {

    Card[] current_hand;
    int input;

    while(play_game = true) {

        // Draw hand
        players[current_player].draw_hand();
        current_hand = players[current_player].get_hand();

        // Display hand
        cout << current_hand << endl;

        // Take input
        while(sizeof(current_hand) > 0) {

            cout << "Choose a card to play" << endl;
            cin >> input;
            if(input = -1) { exit(0); }
            current_hand[input].play_card();

        }

    }

}




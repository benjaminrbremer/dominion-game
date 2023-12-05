//
// Created by Benjamin Bremer on 11/28/23.
//

#include "gameplay.h"

void initialize_gameplay(int total_players) {

    // Setup players
    this.total_players = total_players;
    current_player = 1;

    // Setup decks
    players_decks = new (void**)[total_players]
    for(int i = 0; i < total_players; i++) {

        players_hands[i] = new (int*)[DEFAULT_DECK_SIZE];

    }
    // Initialize to NULL
    for(int i = 0; i < total_players; i++) {

        for (int j = 0; j < DEFAULT_DECK_SIZE; j++) {

            players_decks[i][j] = NULL;

        }

    }
    // Starting deck
    // Once copper and estates are added, initialize each player's deck
    // Shuffle every player's starting deck
    for(int i = 0; i < total_players; i++) {

        shuffle_deck(players_decks[i];

    }

    // Setup hands
    players_hands = new (void**)[total_players];
    // StackOverflow had i and j precremented, but I don't like that so I changed it
    // If something breaks here, check that first.
    for(int i = 0; i < total_players; i++) {

        players_hands[i] = new (int*)[DEFAULT_HAND_SIZE];

    }
    // Initialize to NULL
    for(int i = 0; i < total_players; i++) {

        for (int j = 0; j < DEFAULT_HAND_SIZE; j++) {

            players_hands[i][j] = NULL;

        }

    }
    // Initialize hands once copper and estates are added

    cout << "Gameplay initialized" << endl;

}

void play_game() {



}




//
// Created by Benjamin Bremer on 11/28/23.
//

#include "iostream"
#include "gameplay.h"

using namespace std

int main() {

    int num_players;

    cout << "How many players? (2-4): " << endl;
    cin >> num_players;

    while(num_players < 2 || num_players > 4) {

        cout << "Invalid number of players." << endl; << "Enter number of players 2-4: " << endl;
        cin >> num_players;

    }

    initialize_gameplay(num_players);

}
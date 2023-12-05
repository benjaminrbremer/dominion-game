//
// Created by Benjamin Bremer on 11/28/23.
//

#ifndef DOMINION_GAME_CARD_H
#define DOMINION_GAME_CARD_H

#endif //DOMINION_GAME_CARD_H

enum TYPE {

    ACTION = 0,
    ATTACK = 1,
    ACTION_REACTION = 2,
    TREASURE = 3,
    VICTORY_POINT = 4

} type;

char* name;

void** properties_list;

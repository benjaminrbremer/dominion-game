//
// Created by Benjamin Bremer on 11/28/23.
//

#ifndef DOMINION_GAME_CARD_H
#define DOMINION_GAME_CARD_H

using function_t = void(*)();

export module card_functions;

enum TYPE {

    ACTION = 0,
    ATTACK = 1,
    ACTION_REACTION = 2,
    TREASURE = 3,
    VICTORY_POINT = 4

};

enum CARDS {

    ADVENTURER = 0,
    BUREAUCRAT = 1,
    CELLAR = 2,
    CHANCELLOR = 3,
    CHAPEL = 3,
    COUNCIL_ROOM = 4,
    FEAST = 5,
    FESTIVAL = 6,
    LABORATORY = 7,
    LIBRARY = 8,
    MARKET = 9,
    MINE = 10,
    MONEYLENDER = 11,
    REMODEL = 12,
    SMITHY = 13,
    THRONE_ROOM = 14,
    VILLAGE = 15,
    WOODCUTTER = 16,
    WORKSHOP = 17,
    BEREAUCRAT = 18,
    MILITIA = 19,
    SPY = 20,
    THIEF = 21,
    WITCH = 22,
    MOAT = 23,
    COPPER = 24,
    SILVER = 25,
    GOLD = 26,
    ESTATE = 27,
    DUCHY = 28,
    PROVINCE = 29,
    GARDENS = 30,
    CURSE = 31

};

export class Card {

    public:
        Card(char* name, TYPE type, function_t[] properties_list);
        char* get_name();
        TYPE get_type();
        function_t* get_properties_list();
        function_t& operator[](int index);

    private:
        char* name;
        TYPE type;
        function_t[] properties_list;
        int properties_size;

};

Card::Card(char* new_name, TYPE new_type, function_t[] new_properties_list)
    :name(new char[new_name]), type(new_type), new function_t[new_properties_list])
{
    properties_size = sizeof(properties_list);
}

char* get_name() {

    return name;

}

TYPE get_type() {

    return type;

}

function_t* get_properties() {

    return properties_list

}

function_t& Card::operator[](int index) {

    if(index > -1 && index < properties_size) {

        return properties_list[index];

    }else {

        return null;

    }

}

#endif //DOMINION_GAME_CARD_H


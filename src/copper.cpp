//
// Created by Benjamin Bremer on 11/30/23.
//

#include "card.h"
import gameplay
import card_functions

export class Copper : public Card {

    public:
        Copper() : Card{"Copper", TYPE.TREASURE, new function_t[&add_treasure()]};

    private:

};


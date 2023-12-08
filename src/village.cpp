//
// Created by Benjamin Bremer on 11/30/23.
//

#include "card.h"
import gameplay
import card_functions

export class Village : public Card {

    public:
        Village() : Card{"Village", TYPE.ACTION, new function_t[&draw_card(), &add_action(), &add_action]};

    private:

};


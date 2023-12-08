//
// Created by Benjamin Bremer on 12/1/23.
//

#include "card.h"
import gameplay

class estate {

    public:
        char* get_name();
        TYPE get_type();
        void** get_properties();
        void* get_property(int index);

    private:
        name = "estate";
        type = VICTORY_POINT;
        // Victory points have no value in-game
        properties_list = NULL;

};

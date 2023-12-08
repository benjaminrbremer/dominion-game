//
// Created by Benjamin Bremer on 11/30/23.
//

#include "card.h"
import gameplay

export module village {

    public:
        char* get_name();
        TYPE get_type();
        void** get_properties();
        void* get_property(int index);

    private:
        name = "Village";
        type = ACTION;
        // Properties list - (functions from gameplay)
        properties_list = new void*[3];
        //     Draw card
        properties_list[0] = &draw_card();
        //     Add action (twice)
        properties_list[1] = &add_action();
        properties_list[2] = &add_action();

};

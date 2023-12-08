//
// Created by Benjamin Bremer on 12/1/23.
//

#include "card.h"
import gameplay

export module copper{

    public:
        char* get_name();
        TYPE get_type();
        void** get_properties();
        void* get_property(int index);

    private:
        name = "Copper";
        type = TREASURE;
        properties_list = new void*[1];
        // properties_list needs to add one to the number of treasure
        properties_list[0] = &add_treasure();

};


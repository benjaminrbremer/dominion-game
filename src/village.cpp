//
// Created by Benjamin Bremer on 11/30/23.
//

#include "card.h"

export module village {
    public:
        char* get_name();
        TYPE get_type();
        void** get_properties();
        void* get_property(int index);
    private:
        name = "Village";
        type = ACTION;
    // Properties list - (from gameplay)
    properties_list = new void*[3];
    //     Draw card
    //     Add action (twice)

};

char* get_name() {

    return name;

}

TYPE get_type() {

    return type;

}

void** get_properties() {

    return properties_list

}

void* get_property(int index) {

    // TODO - Add check to make sure index is in bounds
    return properties_list[index];

}

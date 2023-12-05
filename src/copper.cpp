//
// Created by Benjamin Bremer on 12/1/23.
//

#include "card.h"

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

// This is a lot of code duplication. Can I put it in the header file?

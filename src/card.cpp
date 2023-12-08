//
// Created by Benjamin Bremer on 12/8/23.
//

#include "card.h"

Card::Card(char* new_name, TYPE new_type, function_t[] new_properties_list)
    :name(new char[new_name]), type(new_type), new function_t[new_properties_list])
{

    properties_size = sizeof(properties_list);

}

function_t& Card::operator[](int index) {

    if(index > -1 && index < properties_size) {

        return properties_list[index];

    }else {

        return null;

    }

}

void play_card() {

    for(int i = 0; i < properties_size; i++) {

        *properties_list[i];

    }

}

#include "object.h"

const int track_length = 100;
Object::Object(const int& ID){
    this->ID = ID;
    position_on_track = 0;
    // Initialize the track with empty spaces
    
}
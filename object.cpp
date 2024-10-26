#include "object.h"
#include "print_to_screen.h"

const int track_length = 100;
Object::Object(const int& ID){    
    track.resize(5);
    for(int i=0; i<(int)track.size(); i++){
        track[i].resize(track_length);
        for(int j=0; j<track_length; j++){
            track[i][j] = ' ';
        }
        track[i][9] = '|';
    }
    this->ID = ID;
    position_on_track = 0;
}
int Object::getID() const{
    return ID;
}
void Object::setID(const int& ID){
    this->ID = ID;
}
int Object::getPosition() const{
    return position_on_track;
}
void Object::setPosition(const int& position){
    this->position_on_track = position;
}
void Object::drawTrack(){
    for(auto i=0; i<(int)track.size(); i++){
        for(int j=0; j<track_length; j++){
            std::cout << track[i][j];
        }
        std::cout << std::endl;
    }
}
void Object::setEmptyTrack(){
    for(int i=0; i<(int)track.size(); i++){
        for(int j=0; j<track_length; j++){
            track[i][j] =' ';
        }
        track[i][9] = '|';
    }
}
//          87654321012345
//          01234567|
//          \o   o\ |
//          >==HH==)|****************************************************************************************************
//          /o   o/ |
//                  |
void Object::setCarOnTrack(const int& addPosition){
    this->position_on_track += addPosition;
    //if(this->position_on_track >= 90) this->position_on_track = 90;
    track[1][this->position_on_track] = '\\';
    track[1][this->position_on_track + 1] = 'o';
    track[1][this->position_on_track + 5] = 'o';
    track[1][this->position_on_track + 6] = '\\';
    track[3][this->position_on_track] = '\\';
    track[3][this->position_on_track + 1] = 'o';
    track[3][this->position_on_track + 5] = 'o';
    track[3][this->position_on_track + 6] = '\\';
    track[2][this->position_on_track] = '>';
    track[2][this->position_on_track + 1] = '=';
    track[2][this->position_on_track + 2] = '=';
    track[2][this->position_on_track + 3] = 'H';
    track[2][this->position_on_track + 4] = 'H';
    track[2][this->position_on_track + 5] = '=';
    track[2][this->position_on_track + 6] = '=';
    track[2][this->position_on_track + 7] = ')';
}
void Object::print_on_track(const std::vector<Object>& vectorObjects){
    std::cout << line << std::endl;
    for(auto obj : vectorObjects){
        obj.drawTrack();    
    }
}
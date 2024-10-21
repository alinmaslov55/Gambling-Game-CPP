#include <iostream>
#include <vector>
#ifndef OBJECT
#define OBJECT

extern const int track_length;
//          87654321012345
//          01234567|
//          \o   o\ |
//          >==HH==)|****************************************************************************************************
//          /o   o/ |
//                  |



class Object{
    private:
        int ID;
        int position_on_track;
        std::vector<std::vector<char>> track;
    public:
        Object(const int& ID);
        int getID() const;
        void setID(const int& ID);
        int getPosition() const;
        void setPosition(const int& position);
        void drawTrack();
        void setEmptyTrack();
        void setCarOnTrack(const int& addPosition);
        static void print_on_track(const std::vector<Object>& vectorObjects);
};

#endif
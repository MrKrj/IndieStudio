/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef MOVABLE_HPP
    #define MOVABLE_HPP

    #include "../abstract/AGameObject.hpp"
    #include "../utils/Using.hpp"

class Movable {
public:
    enum DIRECTION {
        UP = 0,
        RIGHT = 90,
        DOWN = 180,
        LEFT = 270
    };
    
    Movable(DIRECTION);

    bool move(AGameObject &, vector2df &);
    bool rotate(AGameObject &, DIRECTION);
    void setDir(DIRECTION);
    DIRECTION getDir() const;

private:
    DIRECTION _dir;
};

#endif /* MOVABLE_HPP */
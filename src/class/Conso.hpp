/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef CONSO_HPP
    #define CONSO_HPP

    #include "../abstract/AObject.hpp"

class Conso : public AObject {
public:
    enum TYPE {
        MAX,
        M_MAX,
        POWER,
        M_POWER,
        SPEED,
        M_SPEED,
        KICK,
        M_KICK,
        GHOST,
        M_GHOST,
        LIVE,
        M_LIVE,
        NONE
    };

    Conso(ISceneManager *, ISceneNode *, AGameObject::TYPE, bool, TYPE); // Type précis
    Conso(ISceneManager *, ISceneNode *, AGameObject::TYPE, bool); //Random

    void setType(TYPE);
    TYPE getType() const;

private:
    TYPE _type;

};

#endif /* CONSO_HPP */
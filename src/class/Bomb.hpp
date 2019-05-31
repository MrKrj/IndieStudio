/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef BOMB_HPP
    #define BOMB_HPP

    #include "../abstract/AObject.hpp"
    #include "../utils/Using.hpp"

class Bomb : public AObject {
public:
    Bomb(ISceneManager *, ISceneNode *, AGameObject::TYPE, bool, u32);
    void haveToExplode(); // Check if ca doit BOOM Alors SetVisible -> False, POSER UNE EXPLOSION

    void setPower(u32);

private:
    chrono_tp _boom; //3
    u32 _power;
};

#endif /* BOMB_HPP */

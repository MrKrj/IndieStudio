/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef DROPABLE_HPP
    #define DROPABLE_HPP

    #include "../utils/Using.hpp"
    #include "../class/Bomb.hpp"
    #include "../class/Conso.hpp"

class Dropable {
public:
    Dropable(ISceneManager *, AGameObject::TYPE);

    AGameObject::TYPE getType() const;
    void setType(AGameObject::TYPE);

    void drop() const; // Créer la conso + anything else //setVisible
    void drop(s_ptr<Bomb> &) const; // pose la bombe du joueur // setVisible // SetLeTimer par default

private:
    ISceneManager *_scene;
    AGameObject::TYPE _type;
};

#endif /* DROPABLE_HPP */
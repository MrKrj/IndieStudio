/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef PLAYER_HPP
    #define PLAYER_HPP

    #include "../abstract/ACharacter.hpp"

class Player : public ACharacter {
public:
    Player(ISceneManager *, ISceneNode *, bool,
        AGameObject::TYPE = AGameObject::TYPE::CONSO);
        
private:

};

#endif /* PLAYER_HPP */
/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef IA_HPP
    #define IA_HPP

    #include "../abstract/ACharacter.hpp"

class IA : public ACharacter {
public:
    IA(ISceneManager *, ISceneNode *, bool,
        AGameObject::TYPE = AGameObject::TYPE::CONSO);
        
private:

};

#endif /* IA_HPP */
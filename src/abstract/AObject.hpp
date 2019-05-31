/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef AOBJECT_HPP
    #define AOBJECT_HPP

    #include "AGameObject.hpp"

class AObject : public AGameObject {
public:
    AObject(ISceneManager *, ISceneNode *, AGameObject::TYPE, bool = true);
    virtual ~AObject() = default;

protected:

};

#endif /* AOBJECT_HPP */

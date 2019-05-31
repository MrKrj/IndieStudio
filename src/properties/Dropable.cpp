/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "Dropable.hpp"

Dropable::Dropable(ISceneManager *scene, AGameObject::TYPE type)
: _scene(scene), _type(type)
{
}

AGameObject::TYPE Dropable::getType() const
{
    return _type;
}

void Dropable::setType(AGameObject::TYPE type)
{
    _type = type;
}

void Dropable::drop() const
{}

void Dropable::drop(s_ptr<Bomb> &bomb) const
{}

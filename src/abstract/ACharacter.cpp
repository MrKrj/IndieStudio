/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "ACharacter.hpp"

ACharacter::ACharacter(ISceneManager *scene, ISceneNode *node, bool visible,
    AGameObject::TYPE type)
    : AGameObject(scene, node, AGameObject::TYPE::CHARACTER, visible),
        _drop(scene, type), _mov(Movable::DIRECTION::DOWN)
{

}
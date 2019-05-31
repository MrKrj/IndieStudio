/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "AObject.hpp"

AObject::AObject(ISceneManager *scene, ISceneNode *node, AGameObject::TYPE type, bool visible)
    : AGameObject(scene, node, type, visible)
{
}

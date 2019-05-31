/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "IA.hpp"

IA::IA(ISceneManager *scene, ISceneNode *node, bool visible,
    AGameObject::TYPE type)
    : ACharacter(scene, node, visible, type)
{

}
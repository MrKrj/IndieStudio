/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "Player.hpp"

Player::Player(ISceneManager *scene, ISceneNode *node, bool visible,
    AGameObject::TYPE type)
    : ACharacter(scene, node, visible, type)
{

}
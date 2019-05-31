/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include <iostream>
#include "Bomb.hpp"

Bomb::Bomb(ISceneManager *scene, ISceneNode *node, AGameObject::TYPE type,
    bool visible, u32 power)
    : AObject(scene, node, AGameObject::TYPE::BOMB, visible), _power(power)
{
    _boom = std::chrono::system_clock::now();
}

void Bomb::haveToExplode()
{
    chrono_tp now = std::chrono::system_clock::now();
    u32 tmp = std::chrono::duration_cast<std::chrono::seconds>(now - _boom).count();

    if (tmp > 3)
        std::cout << "BOOOOOOM" << std::endl;
}

void Bomb::setPower(u32 power)
{
    _power = power;
}

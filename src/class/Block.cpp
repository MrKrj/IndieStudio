/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "Block.hpp"

Block::Block(ISceneManager *scene, ISceneNode *node, AGameObject::TYPE type, bool visible, bool destruct)
    : AObject{scene, node, AGameObject::TYPE::WALL, visible},
      _drop{scene, type},
      _destruct{destruct}
{
}

Block::~Block()
{
}

void Block::setDestruct(bool destruct)
{
    _destruct = destruct;
}

bool Block::getDestruct() const
{
    return _destruct;
}

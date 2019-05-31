/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "AGameObject.hpp"

AGameObject::AGameObject(ISceneManager *scene, ISceneNode *node, AGameObject::TYPE type, bool visible)
    : _scene(scene), _node(node), _type(type), _visible(visible)
{
}

void AGameObject::setPosition(vector2df const &pos)
{

}

void AGameObject::setNode(ISceneNode *node)
{
    _node = node;
}

void AGameObject::setVisible(bool visible)
{
    _node->setVisible(visible);
    _visible = visible;
}

void AGameObject::setID(s32 id)
{
    _node->setID(id);
}

ISceneManager *AGameObject::getSceneManager() const
{
    return _scene;
}

ISceneNode *AGameObject::getNode() const
{
    return _node;
}

// const vector2df &AGameObject::getPosition() const
// {
//     return nullptr;
// }

bool AGameObject::getVisible() const
{
    return _visible;
}

AGameObject::TYPE AGameObject::getType() const
{
    return _type;
}

s32 AGameObject::getID() const
{
    return _node->getID();
}
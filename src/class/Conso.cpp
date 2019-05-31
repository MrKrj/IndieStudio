/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "Conso.hpp"

Conso::Conso(ISceneManager *scene, ISceneNode *node, AGameObject::TYPE type,
    bool visible, TYPE consoType)
    : AObject(scene, node, AGameObject::TYPE::CONSO, visible), _type(consoType)
{

}

Conso::Conso(ISceneManager *scene, ISceneNode *node, AGameObject::TYPE type,
    bool visible)
    : AObject(scene, node, AGameObject::TYPE::CONSO, visible)
{
    //_type = RANDOM
}
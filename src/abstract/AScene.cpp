/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "AScene.hpp"


AScene::AScene()
{

}

void AScene::setActive(bool set)
{
    if (set) {
        for (std::deque<s_ptr<AGameObject>>::iterator it = _obj.begin(); it != _obj.end(); ++it)
            (*it)->setVisible(true);
        for (std::deque<s_ptr<AUIObject>>::iterator it = _ui.begin(); it != _ui.end(); ++it)
            (*it)->setVisible(true);
    } else {
        for (std::deque<s_ptr<AGameObject>>::iterator it = _obj.begin(); it != _obj.end(); ++it)
            (*it)->setVisible(false);
        for (std::deque<s_ptr<AUIObject>>::iterator it = _ui.begin(); it != _ui.end(); ++it)
            (*it)->setVisible(false);
    }
}

void AScene::setType(TYPE t)
{
    _type = t;
}

u_ptr<EventHandler> AScene::getEventHandler()
{
    return std::move(_eventHandler);
}
std::deque<s_ptr<AGameObject>> &AScene::getObj()
{
    return _obj;
}

std::deque<s_ptr<AUIObject>> &AScene::getUI()
{
    return _ui;
}

AScene::TYPE AScene::getType() const
{
    return _type;
}

bool AScene::getActive() const
{
    return _active;
}

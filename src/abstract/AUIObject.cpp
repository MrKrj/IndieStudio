/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "AUIObject.hpp"

void AUIObject::setUI(IGUIElement *gui)
{
    _ui = gui;
}

void AUIObject::setPosition(vector2di const &vec)
{
    _ui->setRelativePosition(vec);
}

void AUIObject::setVisible(bool b)
{
    _ui->setVisible(b);
    _visible = b;
}

void AUIObject::setID(s32 id)
{
    _ui->setID(id);
}

IGUIElement *AUIObject::getUI()
{
    return _ui;
}

vector2df AUIObject::getPosition() const
{
    irr::core::rect<s32> r = _ui->getAbsolutePosition();
    vector2df vec{};
    vec.X = r.UpperLeftCorner.X;
    vec.Y = r.UpperLeftCorner.Y;

    return vec;
}

bool AUIObject::getVisible() const
{
    return _ui->isVisible();
}

s32 AUIObject::getID() const
{
    return _ui->getID();
}

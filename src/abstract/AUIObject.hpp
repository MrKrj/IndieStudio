/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef AUIOBJECT_HPP
    #define AUIOBJECT_HPP

    #include "../utils/Using.hpp"

class AUIObject {
public:
    virtual ~AUIObject() = 0;

    void setUI(IGUIElement *);
    void setPosition(vector2di const &);
    void setVisible(bool);
    void setID(s32);

    IGUIElement *getUI();
    vector2df getPosition() const;
    bool getVisible() const;
    s32 getID() const;

protected:
    IGUIElement *_ui;
    bool _visible;
};

#endif /* AUIOBJECT_HPP */

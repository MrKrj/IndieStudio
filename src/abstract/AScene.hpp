/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef ASCENE_HPP
    #define ASCENE_HPP

    #include <deque>
    #include <irrlicht/irrlicht.h>
    #include "AGameObject.hpp"
    #include "AUIObject.hpp"
    #include "../utils/Using.hpp"
    #include "../class/EventHandler.hpp"

class AScene {
public:
    enum TYPE {
        CREDITS,
        GAME,
        INTRO,
        LADDER,
        MENU,
        SETTINGS,
        SPLASHSCREEN
    };
    AScene();
    virtual ~AScene() = default;
    virtual void update() = 0;

    void setActive(bool);
    void setEventHandler(EventHandler const &);
    void setSceneManager(ISceneManager *);
    void setDriver(IDriver *);
    void setType(TYPE);


    u_ptr<EventHandler> getEventHandler();
    std::deque<s_ptr<AGameObject>> &getObj();
    std::deque<s_ptr<AUIObject>> &getUI();
    TYPE getType() const;

    bool getActive() const;
protected:

    ISceneManager *_smgr;
    IDriver *_driver;
    u_ptr<EventHandler> _eventHandler;
    std::deque<s_ptr<AGameObject>> _obj;
    std::deque<s_ptr<AUIObject>> _ui;
    bool _active;
    TYPE _type;
};

#endif /* ASCENE_HPP */
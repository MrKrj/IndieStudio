/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef EVENTHANDLER_HPP
    #define EVENTHANDLER_HPP

    #include <deque>
    #include "../utils/Using.hpp"
    #include "../abstract/AGameObject.hpp"
    #include "../abstract/AUIObject.hpp"

class EventHandler : public IEventReceiver {
public:
    EventHandler(std::deque<s_ptr<AGameObject>> &,
        std::deque<s_ptr<AUIObject>> &);
    ~EventHandler();

    bool OnEvent(const SEvent &);

private:
    std::deque<s_ptr<AGameObject>> &_obj;
    std::deque<s_ptr<AUIObject>> &_ui;
};

#endif /* EVENTHANDLER_HPP */
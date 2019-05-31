/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "Errors.hpp"

Error::Error(std::string const &message, std::string const &component) noexcept
: _message(message), _component(component)
{}

std::string const &Error::getComponent() const
{
    return _component;
}

const char *Error::what() const noexcept
{
    return _message.c_str();
}

CoreError::CoreError(std::string const &message, std::string const &component)
: Error(message, component)
{
}

SceneError::SceneError(std::string const &message, std::string const &component)
: Error(message, component)
{
}

EventError::EventError(std::string const &message, std::string const &component)
: Error(message, component)
{
}

MusicError::MusicError(std::string const &message, std::string const &component)
: Error(message, component)
{
}

PlayerError::PlayerError(std::string const &message, std::string const &component)
: Error(message, component)
{
}

ButtonError::ButtonError(std::string const &message, std::string const &component)
: Error(message, component)
{
}

SpriteError::SpriteError(std::string const &message, std::string const &component)
: Error(message, component)
{
}

PropertiesError::PropertiesError(std::string const &message, std::string const &component)
: Error(message, component)
{
}

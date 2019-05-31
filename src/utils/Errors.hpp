/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef ERRORS_HPP
    #define ERRORS_HPP

    #include <string>
    #include <exception>

class Error : public std::exception {
public:
   Error(std::string const &message, std::string const &component = "Unknown") noexcept;

   virtual std::string const &getComponent() const;
   const char *what() const noexcept override;

private:
    std::string _message;
    std::string _component;
};

class CoreError : public Error {
public:
    CoreError(std::string const &message, std::string const &component = "Core");
};

class SceneError : public Error {
public:
    SceneError(std::string const &message, std::string const &component = "Scene");
};

class EventError : public Error {
public:
    EventError(std::string const &message, std::string const &component = "Event Handler");
};

class MusicError : public Error {
public:
    MusicError(std::string const &message, std::string const &component = "Music");
};

class PlayerError : public Error {
public:
    PlayerError(std::string const &message, std::string const &component = "Player");
};

class ButtonError : public Error {
public:
    ButtonError(std::string const &message, std::string const &component = "Button");
};

class SpriteError : public Error {
public:
    SpriteError(std::string const &message, std::string const &component = "Sprite");
};

class PropertiesError : public Error {
public:
    PropertiesError(std::string const &message, std::string const &component = "Properties");
};

#endif /* ERRORS_HPP */

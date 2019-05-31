/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef CORE_HPP
    #define CORE_HPP

    #include <string>
    #include <vector>
    #include "../utils/Using.hpp"
    #include "../abstract/AScene.hpp"

class Core {
public:
    Core();
    ~Core();

    void run();

    void setCurrScene(const s_ptr<AScene> &); // Récupérer l'eventHandler et le set au SceneManager

    const s_ptr<AScene> &getCurrScene() const;
    Device *getDevice() const;
    ISceneManager *getScene() const;
    IDriver *getDriver() const;
    IGUIEnvironment *getEnv() const;
        
private:
    Device *_device;
    ISceneManager *_scene;
    IDriver *_driver;
    IGUIEnvironment *_env;
    std::vector<s_ptr<AScene>> _scenes;
    s_ptr<AScene> _currScene;
};

#endif /* CORE_HPP */
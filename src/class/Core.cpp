/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "Core.hpp"
#include "../scene/SplashScreen.hpp"
#include "../utils/Errors.hpp"

Core::Core()
{
    _device = irr::createDevice();
    if (!_device)
        throw CoreError("Core: failed to create defice.");
    _device->setWindowCaption(L"Bombermon");
    _driver = _device->getVideoDriver();
    _scene = _device->getSceneManager();
    _env = _device->getGUIEnvironment();
    s_ptr<AScene> currScene(new SplashScreen);
    _scenes.push_back(currScene);
    setCurrScene(currScene);
}

Core::~Core()
{
    _device->drop();
}

void Core::run()
{
    while(_device->run()) {
        _driver->beginScene(true, true, irr::video::SColor(255,100,101,140));
        _scene->drawAll();
        _env->drawAll();
        _driver->endScene();
    }
}

void Core::setCurrScene(const s_ptr<AScene> &currScene)
{
    _currScene = currScene;
    _device->setEventReceiver(_currScene->getEventHandler().get());
}

const s_ptr<AScene> &Core::getCurrScene() const
{
    return _currScene;
}

Device *Core::getDevice() const
{
    return _device;
}

ISceneManager *Core::getScene() const
{
    return _scene;
}

IDriver *Core::getDriver() const
{
    return _driver;
}

IGUIEnvironment *Core::getEnv() const
{
    return _env;
}
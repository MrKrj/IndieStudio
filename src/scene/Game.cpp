/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include <iostream>
#include "../utils/Using.hpp"
#include "Game.hpp"

Game::Game(ISceneManager *smgr, IDriver *driver, Device *device)
{
    std::cout << "Game ctor" << std::endl;
    _smgr = smgr;
    _driver = driver;
    _device = device;
//    _eventHandler = &evthdr;
    _camera = _smgr->addCameraSceneNode(nullptr, irr::core::vector3df(450, 475, 55), irr::core::vector3df(450, 0, 300));
//    _camera = smgr->addCameraSceneNodeFPS();
    device->getCursorControl()->setVisible(true);
    createSkybox();
    _terrain = _smgr->addTerrainSceneNode(
        "assets/map/hm.bmp",
        nullptr,
        -1,
        irr::core::vector3df(0.f, 0.f, 0.f),
        irr::core::vector3df(0.f, 180.f, 0.f),
        irr::core::vector3df(4.f, 1.f, 4.f),
        irr::video::SColor(255, 255, 255, 255),
        5,
        irr::scene::ETPS_17,
        4
    );
    _terrain->setMaterialFlag(irr::video::EMF_LIGHTING, false);
    _terrain->setMaterialTexture(0, _driver->getTexture("assets/map/slabs_test.jpg"));
    _terrain->setMaterialType(irr::video::EMT_DETAIL_MAP);
    _terrain->scaleTexture(15.0f, 0.f);
    _driver->setTextureCreationFlag(irr::video::ETCF_CREATE_MIP_MAPS, false);
    _driver->setTextureCreationFlag(irr::video::ETCF_CREATE_MIP_MAPS, true);

}

void Game::createSkybox()
{
    _driver->setTextureCreationFlag(irr::video::ETCF_CREATE_MIP_MAPS, false);

    irr::scene::ISceneNode* skybox = _smgr->addSkyBoxSceneNode(
        _driver->getTexture("assets/map/irrlicht2_up.jpg"),
        _driver->getTexture("assets/map/irrlicht2_dn.jpg"),
        _driver->getTexture("assets/map/irrlicht2_lf.jpg"),
        _driver->getTexture("assets/map/irrlicht2_rt.jpg"),
        _driver->getTexture("assets/map/irrlicht2_ft.jpg"),
        _driver->getTexture("assets/map/irrlicht2_bk.jpg"));
    irr::scene::ISceneNode* skydome = _smgr->addSkyDomeSceneNode(_driver->getTexture("assets/map/skydome.jpg"),16,8,0.95f,2.0f);

    _driver->setTextureCreationFlag(irr::video::ETCF_CREATE_MIP_MAPS, true);

}

void Game::update()
{
    irr::core::vector3df pos = _camera->getPosition();
    float x = pos.X;
    float y = pos.Y;
    float z = pos.Z;
    std::cout << x << " " << y << " " << z << std::endl;
}

void Game::placeBlock(float x, float y)
{
    irr::scene::ISceneNode *n = _smgr->addCubeSceneNode(60, nullptr, -1, {x, 30, y}, {0, 0, 0}, {1, 1, 1});
    n->setMaterialTexture(0, _driver->getTexture("assets/map/wall_test.jpg"));
    n->setMaterialFlag(irr::video::EMF_LIGHTING, false);
}

Game::~Game()
{
    std::cout << "Game dtor" << std::endl;
}

Game &Game::operator=(ISceneManager &rhs)
{
    _smgr = &rhs;
    return *this;
}

Game &Game::operator=(IDriver &rhs)
{
    _driver = &rhs;
    return *this;
}

Game &Game::operator=(u_ptr<EventHandler> &rhs)
{
    _eventHandler = std::move(rhs);
    return *this;
}

Game &Game::operator=(Device &rhs)
{
    _device = &rhs;
    return *this;
}

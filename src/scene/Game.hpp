/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef GAME_HPP
    #define GAME_HPP

#include "../utils/Using.hpp"
#include "../abstract/AScene.hpp"

class Game : public AScene  {
public:
    Game(ISceneManager *, IDriver *, Device *);
    ~Game() override;

    Game &operator=(ISceneManager &rhs);
    Game &operator=(IDriver &rhs);
    Game &operator=(u_ptr<EventHandler> &rhs);
    Game &operator=(Device &rhs);

    void update() override;

private:
    void createSkybox();
    void placeBlock(float x, float y);
    irr::scene::ICameraSceneNode *_camera;
    irr::scene::ITerrainSceneNode *_terrain;
    Device *_device;
};

#endif /* GAME_HPP */
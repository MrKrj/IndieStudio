/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef ACHARACTER_HPP
    #define ACHARACTER_HPP

    #include <vector>
    #include "AGameObject.hpp"
    #include "../properties/Movable.hpp"
    #include "../properties/Dropable.hpp"
    #include "../class/Bomb.hpp"

class ACharacter : public AGameObject {
public:
    ACharacter(ISceneManager *, ISceneNode *, bool, AGameObject::TYPE);
    virtual ~ACharacter() = default;

    AGameObject &look(AGameObject::TYPE, f32); //RAYON
    AGameObject &look(AGameObject::TYPE); // PLUS PROCHE
    AGameObject &look(vector2df); //SI SUR SOI ALORS REAGIR AU TYPE DE CONSO
    void checkExplosedBombs();
    void dropBomb();

    void setCurrBomb(u32);
    void setMaxBomb(u32);
    void setSpeed(f32);
    void setPowerBomb(u32); // Boucler sur toutes les bombes pour ajuster la puissance
    void setLives(u32);
    void setGhost(bool);
    void setAlive(bool); // setType de Dropable sur CONSO & drop->Drop();
    void setKick(bool);

    u32 getCurrBomb() const;
    u32 getMaxBomb() const;
    f32 getSpeed() const;
    u32 getPowerBomb() const;
    u32 getLives() const;
    bool getGhost() const;
    bool getAlive() const;
    bool getKick() const;

protected:
    Dropable _drop;
    Movable _mov;
    u32 _currBomb;
    u32 _maxBomb; //créer tout de suite les bombes par default
    f32 _speed;
    u32 _powerBomb;
    u32 _lives;
    bool _ghost;
    bool _kick;
    bool _alive;
    std::vector<s_ptr<Bomb>> _bombs;
};

#endif /* ACHARACTER_HPP */
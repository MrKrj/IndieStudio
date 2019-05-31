/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef BLOCK_HPP
    #define BLOCK_HPP

    #include "../abstract/AObject.hpp"
    #include "../properties/Dropable.hpp"

class Block : public AObject {
public:
    Block(ISceneManager *, ISceneNode *, AGameObject::TYPE, bool, bool);
    ~Block() override;

    void setDestruct(bool);

    bool getDestruct() const;

private:
    Dropable _drop;
    bool _destruct;
};

#endif /* BLOCK_HPP */

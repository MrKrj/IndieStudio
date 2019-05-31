/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef AGAMEOBJECT_HPP
    #define AGAMEOBJECT_HPP

    #include "../utils/Using.hpp"

class AGameObject {
public:
    enum TYPE {
        WALL,
        BOMB,
        CONSO,
        CHARACTER
    };

    AGameObject(ISceneManager *, ISceneNode *, AGameObject::TYPE, bool = true);
    virtual ~AGameObject() = default;

    AGameObject *clone() const; // WALL -> relancer le Dropable

    void setPosition(vector2df const &);
    void setNode(ISceneNode *);
    void setVisible(bool);
    void setID(s32);

    ISceneManager *getSceneManager() const;
    ISceneNode *getNode() const;
    const vector2df &getPosition() const;
    bool getVisible() const;
    TYPE getType() const;
    s32 getID() const;

protected:
    ISceneManager *_scene;
    ISceneNode *_node;
    TYPE _type;
    bool _visible;
};

#endif /* AGAMEOBJECT_HPP */

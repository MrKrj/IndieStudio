/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef SPLASHSCREEN
    #define SPLASHSCREEN

    #include "../abstract/AScene.hpp"

class SplashScreen : public AScene {
public:
    SplashScreen();
    ~SplashScreen();

    void update() override;

private:
};

#endif /* SPLASHSCREEN */
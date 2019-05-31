/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef ISFX_HPP
    #define ISFX_HPP

    #include <SFML/Audio.hpp>
    #include "../utils/Using.hpp"

class ISFX {
public:
        ISFX() {};
        ~ISFX() {};

        virtual void setSFX(std::string const &) = 0;
        virtual void play() = 0;
        virtual void pause() = 0;
        virtual void stop() = 0;
        virtual bool isPlaying()  = 0;

        virtual void setVolume(f32) = 0;
        virtual void setPitch(f32) = 0;

        virtual f32 getVolume() const  = 0;
        virtual f32 getPitch() const = 0;

protected:
};

#endif /* ISFX_HPP */

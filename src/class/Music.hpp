/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef MUSIC_HPP
    #define MUSIC_HPP

    #include "../abstract/ASFX.hpp"

class Music : public ISFX {
public:
        Music();
        Music(std::string const &);
        ~Music();

        virtual void setSFX(std::string const &) override final;
        virtual void play() override final;
        virtual void pause() override final;
        virtual void stop() override final;
        virtual bool isPlaying() override final;

        virtual void setVolume(f32) override final;
        virtual void setPitch(f32) override final;

        virtual f32 getVolume() const  override final;
        virtual f32 getPitch() const override final;


private:
    sf::Music _mus;

};

#endif /* MUSIC_HPP */

/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef SOUND_HPP
    #define SOUND_HPP

    #include "../abstract/ASFX.hpp"

class Sound : public ISFX {
public:
    Sound();
    Sound(std::string const &);
    ~Sound();

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
    sf::Sound _snd;

};

#endif /* SOUND_HPP */

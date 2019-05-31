/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "Sound.hpp"

Sound::Sound()
{}

Sound::Sound(std::string const &str)
{
    sf::SoundBuffer buff;

    buff.loadFromFile(str);
    _snd.setBuffer(buff);
}

Sound::~Sound()
{}

void Sound::setSFX(std::string const &str)
{
    sf::SoundBuffer buff;

    buff.loadFromFile(str);
    _snd.setBuffer(buff);
}

void Sound::play()
{
    _snd.play();
}

void Sound::pause()
{
    _snd.pause();
}

void Sound::stop()
{
    _snd.stop();
}

bool Sound::isPlaying()
{
    return _snd.getStatus() == sf::SoundSource::Status::Playing ? true : false;
}

void Sound::setVolume(f32 vol)
{
    _snd.setVolume(vol);
}

void Sound::setPitch(f32 vol)
{
    _snd.setPitch(vol);
}

f32 Sound::getVolume() const
{
    return _snd.getVolume();
}

f32 Sound::getPitch() const
{
    return _snd.getPitch();
}

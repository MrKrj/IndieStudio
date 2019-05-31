/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#include "Music.hpp"

Music::Music()
{}

Music::Music(std::string const &str)
{
     _mus.openFromFile(str);
}

Music::~Music()
{}

void Music::setSFX(std::string const &str)
{
    _mus.openFromFile(str);
}

void Music::play()
{
    _mus.play();
}

void Music::pause()
{
    _mus.pause();
}

void Music::stop()
{
    _mus.stop();
}

bool Music::isPlaying()
{
    return _mus.getStatus() == sf::SoundSource::Status::Playing ? true : false;
}

void Music::setVolume(f32 vol)
{
    _mus.setVolume(vol);
}

void Music::setPitch(f32 vol)
{
    _mus.setPitch(vol);
}

f32 Music::getVolume() const
{
    return _mus.getVolume();
}

f32 Music::getPitch() const
{
    return _mus.getPitch();
}

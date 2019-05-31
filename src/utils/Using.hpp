/*
** EPITECH PROJECT, 2018
** INDIESTUDIO
** File description:
** Indie
*/

#ifndef USING_HPP
    #define USING_HPP

    #include <irrlicht/irrlicht.h>
    #include <memory>
    #include <ctime>
    #include <chrono>

template <typename T>
using u_ptr = std::unique_ptr<T>;
template <typename T>
using s_ptr = std::shared_ptr<T>;

using Device = irr::IrrlichtDevice;
using ISceneManager = irr::scene::ISceneManager;
using ISceneNode = irr::scene::ISceneNode;
using IDriver = irr::video::IVideoDriver;
using IGUIEnvironment = irr::gui::IGUIEnvironment;
using IGUIElement = irr::gui::IGUIElement;
using IEventReceiver = irr::IEventReceiver;
using SEvent = irr::SEvent;

using c8 = irr::c8; //c8 : caractère sur 8 bits
using s8 = irr::s8; //s8 : entier signé sur 8 bits
using u8 = irr::u8; //u8 : entier non-signé sur 8 bits
using s16 = irr::s16; //s16 : entier signé sur 16 bits
using u16 = irr::u16; //u16 : entier non-signé sur 16 bits
using f32 = irr::f32; //f32 : flottant sur 32 bits
using s32 = irr::s32; //s32 : entier signé sur 32 bits
using u32 = irr::u32; //u32 : entier non-signé sur 32 bits
using f64 = irr::f64; //f64 : flottant sur 64 bits

using vector2df = irr::core::vector2d<f32>;
using vector2di = irr::core::vector2d<s32>;

using chrono_tp = std::chrono::time_point<std::chrono::system_clock>;

#endif /* USING_HPP */

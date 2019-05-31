cmake_minimum_required(VERSION 3.11)
project(bomberman)

FIND_PACKAGE( Boost 1.66 COMPONENTS program_options REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

set(CMAKE_EXE_LINKER_FLAGS "-W -Wall -Wextra -Werror -g")

add_executable(
    bomberman
        src/Main.cpp

        src/utils/Using.hpp
        src/utils/Errors.cpp
        src/utils/Errors.hpp

        src/properties/Movable.cpp
        src/properties/Movable.hpp
        src/properties/Dropable.cpp
        src/properties/Dropable.hpp

        src/abstract/AGameObject.cpp
        src/abstract/AGameObject.hpp
        src/abstract/AUIObject.cpp
        src/abstract/AUIObject.hpp
        src/abstract/ACharacter.cpp
        src/abstract/ACharacter.hpp
        src/abstract/AObject.cpp
        src/abstract/AObject.hpp
        src/abstract/AScene.cpp
        src/abstract/AScene.hpp
        src/abstract/ASFX.cpp
        src/abstract/ASFX.hpp
        src/abstract/AUI.cpp
        src/abstract/AUI.hpp

        src/class/Block.cpp
        src/class/Block.hpp
        src/class/Bomb.cpp
        src/class/Bomb.hpp
        src/class/Button.cpp
        src/class/Button.hpp
        src/class/Conso.cpp
        src/class/Conso.hpp
        src/class/Core.cpp
        src/class/Core.hpp
        src/class/EventHandler.cpp
        src/class/EventHandler.hpp
        src/class/IA.cpp
        src/class/IA.hpp
        src/class/Music.cpp
        src/class/Music.hpp
        src/class/Player.cpp
        src/class/Player.hpp
        src/class/Sound.cpp
        src/class/Sound.hpp
        src/class/Sprite.cpp
        src/class/Sprite.hpp
        src/class/Text.cpp
        src/class/Text.hpp

        src/scene/Credits.cpp
        src/scene/Credits.hpp
        src/scene/Game.cpp
        src/scene/Game.hpp
        src/scene/Intro.cpp
        src/scene/Intro.hpp
        src/scene/Ladder.cpp
        src/scene/Ladder.hpp
        src/scene/Menu.cpp
        src/scene/Menu.hpp
        src/scene/Settings.cpp
        src/scene/Settings.hpp
        src/scene/SplashScreen.cpp
        src/scene/SplashScreen.hpp

        src/event/GameEvent.cpp
)

if(UNIX)
    target_link_libraries(
        bomberman LINK_PUBLIC ${Boost_LIBRARIES}
            Irrlicht GL Xxf86vm Xext X11 sfml-audio sfml-system
    )
endif(UNIX)
if(WIN32)
#    message("Y'a pas encore")
    set(CMAKE_MODULE_PATH FindIrrlicht.cmake)
endif(WIN32)


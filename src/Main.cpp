/*
** EPITECH PROJECT, 2022
** INDIESTUDIO
** File description:
** indiestudio
*/

#include "class/Core.hpp"

int main()
{
    try {
        u_ptr<Core> core(new Core);
        core->run();
        return 0;
    } catch (const std::exception &e) {
        return (84);
    }
    return 0;
}
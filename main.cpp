/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-17 22:19:14
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-21 19:58:31
 * @FilePath: /LinjokGaming/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include "menu.h"
#include "games.h"
using namespace std;

int main(int argc, char **argv)
{

    Menu &gameMenu = Menu::getInstance();
    gameMenu.initialSystem();

    while (GAME_START)
    {
        gameMenu.startSystem();
    }

    return 0;
}
/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-17 21:51:30
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-20 17:00:59
 * @FilePath: /LinjokGaming/src/menu.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "menu.h"

void Menu::showVersion()
{
    std::cout << " Version " << LinjokGaming_VERSION_MAJOR << "."
              << LinjokGaming_VERSION_MINOR << std::endl;
}

void Menu::showSelectInterface()
{
    GAME_CLEAR_SCREEN
    std::cout << "--------------------------------" << std::endl;
    std::cout << "-------  1-> 游戏菜单  ----------" << std::endl;
    std::cout << "-------  2-> 帮   助   ----------" << std::endl;
    std::cout << "-------  3-> 开发人员   ---------" << std::endl;
    std::cout << "-------  3-> 退出系统   ---------" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "select:__\b\b" << std::endl;
}

void Menu::acceptOption(const int &option)
{

    if (option == 1)
    {
    }

    if (option == 2)
    {
    }

    if (option == 3)
    {
    }
}

bool Menu::parseOption(const int &option)
{
    // check if the option valid
    return true;
}

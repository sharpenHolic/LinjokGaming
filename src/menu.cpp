/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-17 21:51:30
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-20 17:00:59
 * @FilePath: /LinjokGaming/src/menu.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "menu.h"

void Menu::startSystem()
{
    showVersion();
    showSelectInterface();
    acceptOption();
}

void Menu::showVersion()
{
    std::cout << "-+-+-linjok Gaming!-+-+-" << std::endl;
    std::cout << "rock-paper-scissors" << std::endl;
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
    std::cout << "-------  4-> 退出系统   ---------" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "select:__\b\b";
    std::cin >> m_option;
}

void Menu::acceptOption()
{
    if (!parseOption()) {
        std::cout << "please input <1-4>" << std::endl;
        showSelectInterface();
    }

    if (m_option == 1)
    {
    }

    if (m_option == 2)
    {
    }

    if (m_option == 3)
    {
    }

    if (m_option == 4)
    {
    }
}

bool Menu::parseOption()
{
    // check if the option valid
    return true;
}

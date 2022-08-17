/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-17 21:51:46
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-17 22:03:05
 * @FilePath: /LinjokGaming/include/menu.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once

class Menu
{

private:
    Menu(/* args */);
    ~Menu();
    Menu(const Menu &org) = delete;
    Menu &operator=(const Menu &org) = delete;

private:
    static Menu m_instance;

public:
    static Menu getInstance()
    {
        return m_instance;
    }
};

Menu a = Menu::getInstance();


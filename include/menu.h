/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-17 22:19:14
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-20 16:52:40
 * @FilePath: /LinjokGaming/include/menu.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <iostream>
#include "configure.h"
#define GAME_START 1
#define GAME_CLEAR_SCREEN system("clear");

class Menu
{

private:
    Menu(/* args */) = default; //默认构造使用（不要实现一遍）
    ~Menu() = default;

public:
    Menu(const Menu &org) = delete;
    Menu &operator=(const Menu &org) = delete;

public:
    static Menu &getInstance()
    {
        static Menu instance;
        return instance;
    }

public:
    void showVersion();
    void showSelectInterface();
    void acceptOption(const int &option);

private:
    bool parseOption(const int &);

private:
    // some member
};
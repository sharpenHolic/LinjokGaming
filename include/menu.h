/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-17 22:19:14
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-21 20:41:57
 * @FilePath: /LinjokGaming/include/menu.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <iostream>
#include "configure.h"
#include "games.h"
#include "mario/mario.h"
// #include "stdio.h"
// #include "stdlib.h"
#define GAME_START 1
#define GAME_CLEAR_SCREEN system("clear");

class Menu
{

private:
    Menu(/* args */) : m_option(0){}; //默认构造使用（不要实现一遍）
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
    void startSystem();
    void exitSystem();

private:
    // 显示版本信息
    void showVersion();
    // 显示选择界面
    void showSelectInterface();
    // 接受参数
    void acceptOption();
    // 判断传参信息
    bool parseOption();

public:
    // 初始化游戏内容
    void initialSystem();

private:
    // option 1: 展示游戏列表
    void showOptionGameLists();

private:
    // some member
    int m_option; //思考：option用栈的方式压入，方便回退
    Games m_games;
};
/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-17 22:19:14
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-20 11:10:00
 * @FilePath: /LinjokGaming/include/menu.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <iostream>
#include "configure.h"

class Menu
{

private:
    Menu(/* args */) = default;
    ~Menu() =default;

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
};
/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-20 17:25:53
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-21 20:33:31
 * @FilePath: /LinjokGaming/games/mario/mario.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include "../games.h"
class Mario : public BaseGame
{
private:
    /* data */
public:
    Mario(/* args */)
    {
        m_name = "Mario";
    }

    ~Mario()
    {
        // m_name.clear();
    }

public:
    void showName()
    {
        std::cout << m_name << std::endl;
    }

public:
    void startGame();

private:
    // std::string m_name;
};

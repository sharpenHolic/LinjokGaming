/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-20 17:26:10
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-21 19:51:02
 * @FilePath: /LinjokGaming/games/games.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <memory>

//游戏类namespace保护

enum GameList
{
    MARIO = 0
};

// 所有游戏的基类
class BaseGame
{
private:
    /* data */
public:
    BaseGame(/* args */);
    virtual ~BaseGame();
public:
    virtual void showName() = 0;

protected:
    std::string m_name;
};

// 管理所有游戏的类
class Games
{
private:
    /* data */
public:
    Games(/* args */) = default;
    ~Games() = default;

public:
    // 向容器里添加游戏
    bool AddGame(std::shared_ptr<BaseGame>);
    // 通过（枚举）名称取得游戏
    bool GetGame(int gameNum, std::shared_ptr<BaseGame> gamePtr);
    // 展示游戏列表
    void ShowGames();

private:
    std::vector<std::shared_ptr<BaseGame>> m_game_lists;
};

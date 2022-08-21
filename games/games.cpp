/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-20 17:26:20
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-21 19:53:52
 * @FilePath: /LinjokGaming/games/games.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "games.h"

BaseGame::BaseGame(/* args */) : m_name("linjok game")
{
}

BaseGame::~BaseGame()
{
    m_name.clear();
}



// Games 的成员函数
bool Games::AddGame(std::shared_ptr<BaseGame> gamePtr) 
{
    
    this->m_game_lists.push_back(gamePtr);

    return true;
}

bool Games::GetGame(int gameNum, std::shared_ptr<BaseGame> gamePtr)
{
    //是否属于enum类中gameNum
    switch (gameNum)
    {
    case GameList::MARIO :
        /* code */
        break;
    
    default:
        break;
    }

    return true;
}

void Games::ShowGames() 
{
    std::cout << "Game List: " << std::endl;
    for (auto &game : m_game_lists) {
        game->showName();
    }
}

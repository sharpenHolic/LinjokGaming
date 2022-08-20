/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-17 22:19:14
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-20 11:10:30
 * @FilePath: /LinjokGaming/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include "menu.h"
using namespace std;

int main(int argc, char **argv)
{

    cout << "-+-+-linjok Gaming!-+-+-" << endl;
    cout << "rock-paper-scissors" << endl;
    Menu &gameMenu = Menu::getInstance();
    gameMenu.showVersion();
    return 0;
}
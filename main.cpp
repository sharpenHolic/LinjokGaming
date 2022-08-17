#include <iostream>
#include "menu.h"
using namespace std;

int main(int argc, char **argv)
{

    cout << "-+-+-linjok Gaming!-+-+-" << endl;
    cout << "rock-paper-scissors" << endl;
    Menu &gameMenu = Menu::getInstance();
    return 0;
}
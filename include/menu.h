#pragma once

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
};
// FortniteSTWFaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Discord.h"

Discord * g_Discord;

int main()
{
    std::cout << "> -- github.com/filimonstefanmihai -- <\n";
    std::cout << "Welcome to Fortnite: Save The World Discord Faker\n\n";
    std::cout << "Powering Discord RPC\n\n";

    g_Discord->Initialize();
    g_Discord->Update();

    std::cout << "Discord RPC Powered Up.\n";
        system("PAUSE");
    std::cout << "Quitting...";
}
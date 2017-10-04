//
//  main.cpp
//  Game
//
//  Created by Mitchell Reinitz on 10/2/17.
//  Copyright © 2017 Mitchell Reinitz. All rights reserved.
//

#include <string>
#include <iostream>

int answer;
std::string input;
using namespace std;
int main ()
{
    cout << "You are standing in the middle of a forest. You see a trail. You check your compass and see that the trail is north of you. You can either go north (n), east (e), west (w), or south (s). \n" ;
    cin >> input;
    if (input == "n")
        std::cout << "You have reached the trail. You can now go either east or west.\n";
        cin >> input;
            if (input == "e")
            cout << "You see a bottle of water. Would you like to drink from it? \n";
            cin >> input;
                if (input == "yes")
                cout << "You drank dirty water. You are now unable to walk. \n";
    return 0;
}



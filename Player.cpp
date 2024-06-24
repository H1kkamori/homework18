#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

void sortPlayers(Player* players, int count) 
{
    for (int i = 0; i < count - 1; ++i) 
    {
        for (int j = 0; j < count - i - 1; ++j) 
        {
            if (players[j].score < players[j + 1].score) 
            {
                Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int numPlayers;
    cout << "Enter the number of players: ";
    cin >> numPlayers;

    Player* players = new Player[numPlayers];

    for (int i = 0; i < numPlayers; ++i) 
    {
        cout << " Enter the player's name " << i + 1 << ": ";
        cin >> players[i].name;
        cout << "Enter the player's score " << i + 1 << ": ";
        cin >> players[i].score;
    }

    sortPlayers(players, numPlayers);

    cout << "\nPlayers in order of points:\n";
    for (int i = 0; i < numPlayers; ++i) {
        cout << players[i].name << ": " << players[i].score << endl;
    }

    delete[] players;
    return 0;
}

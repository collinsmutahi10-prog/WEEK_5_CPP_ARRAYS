#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Total_REV = 0;
    // declare an array to store revenue for each day of the week
    int revenue[7];
    // declare constants for the number of branches, floors, and rooms
    const int branches = 3;
    const int floors = 5;
    const int rooms = 10;
    // declare a 3D array to store occupancy status for each room in each floor of each branch
    int occupancy[branches][floors][rooms] = {
        {{1, 0, 1, 1, 0, 1, 0, 1, 0, 1},
         {0, 1, 0, 0, 1, 0, 1, 0, 1, 0},
         {1, 1, 1, 0, 0, 1, 1, 0, 0, 1},
         {0, 0, 0, 1, 1, 0, 0, 1, 1, 0},
         {1, 0, 1, 0, 1, 0, 1, 0, 1, 0}},
        {{1, 0, 1, 1, 0, 1, 0, 1, 0, 1},
         {0, 1, 0, 0, 1, 0, 1, 0, 1, 0},
         {1, 1, 1, 0, 0, 1, 1, 0, 0, 1},
         {0, 0, 0, 1, 1, 0, 0, 1, 1, 0},
         {1, 0, 1, 0, 1, 0, 1, 0, 1, 0}},
        {{1, 0, 1, 1, 0, 1, 0, 1, 0, 1},
         {0, 1, 0, 0, 1, 0, 1, 0, 1, 0},
         {1, 1, 1, 0, 0, 1, 1, 0, 0, 1},
         {0, 0, 0, 1, 1, 0, 0, 1, 1, 0},
         {1, 0, 1, 0, 1, 0, 1, 0, 1, 0}}};

    cout << "HOTEL ROOM OCCUPANCY MANAGEMENT SYSTEM" << endl;
    //
    // loop through each branch and floor to calculate the number of occupied and vacant rooms
    for (int b = 0; b < branches; b++)
    {
        cout << "\nBranch " << b + 1 << endl;
        for (int f = 0; f < floors; f++)
        {
            int occupied = 0;
            int vacant = 0;
            for (int r = 0; r < rooms; r++)
            {
                if (occupancy[b][f][r] == 1)
                    occupied++;
                else
                    vacant++;
            }
            cout << "Floor " << f + 1 << ": Occupied Rooms: " << occupied << ", Vacant Rooms: " << vacant << endl;
        }
    }
    // declare an array to store the names of the days of the week

    string days[7] = {"mon", "tue", "wed", "thu", "fri", "sat", "sun"};
    cout << "Enter the revenue for the week:" << endl;
    // loop through each day of the week to get the revenue input from the user
    for (int i = 0; i < 7; i++)
    {
        cout << days[i] << ": ";
        cin >> revenue[i];
    }

    Total_REV = 0;
    for (int i = 0; i < 7; i++)
    {
        Total_REV += revenue[i];
    }

    cout << "Total revenue for the week: " << Total_REV << endl;
    return 0;
}
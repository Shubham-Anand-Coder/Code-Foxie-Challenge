/*
Assumptions:
1. the no. of containers present in the truck is equal to the no. of vareities of beers given.
2. no. of seconds to complete the journey will be given
3. the temperature reading of each container will be provided at each second of the journey.
4. Inputs:
n -> no. of varieties of beers
range[n] -> range of suitable temperature for different varieties of beer
q -> no. of seconds truck tarvels from start to destination
X -> an array denoting the reading of temperature sensors of each container at each second.
5.Output :
A warning is generated at each second for specific containers if their temperature goes out of the suitable range of the beer.
        * /

        /*
        Sample Input:
        5
        4 6
        5 6
        4 7
        6 8
        3 5
        7
        4 4 4 4 4
        5 5 5 5 5
        6 6 6 6 6
        7 7 7 7 7
        8 8 8 8 8
        1 2 3 4 5
        8 7 6 5 4
        */

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n; //no. of beers
    cout << "Enter the no. of varieties of beers: ";
    cin >> n;

    pair<int, int> bound[n];
    //to store the range of temperatures for differnt varieties of beers
    cout << "Enter the range of temperatures for each varieties of beer respectively(L, R):\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\tFor beer " << i + 1 << ": ";
        cin >> bound[i].first >> bound[i].second;
    }

    //Assuming that the truck contains equal no. of containers as the no. of variety of beers.
    //Let i th container contains i th beer

    cout << "\nThe initial temperature of the containers will be set to: \n";
    for (int i = 0; i < n; i++)
        cout << "\tFor container " << i + 1 << "-> " << (bound[i].first + bound[i].second) / 2 << "\n";

    cout << "\nTruck departs from the starting point.\n\n";

    // Gonna take temperature reading of each container as input each second during the journey of the truck
    // It may seem a time taking process to take input from the user each second but it will be fine when used
    // in real life as the inputs are gonna come from the temperature sensor each second.

    int q; //no. of seconds truck tarvels from start to destination
    cout << "Enter the duration of journey from start to destination: ";
    cin >> q;

    for (int time = 0; time < q; time++)
    {
        cout << "At second " << time + 1 << ":\n";

        //At each second, reading of the each temperature sensors is taken as input

        cout << "\tEnter the present reading of each temperature sensor of the containers (in the form of array): ";

        int ansx[n]; //to store increase/decrease in the temperature.
        int temp_flag = 0; //to check whether increase/decrease in temp is needed or not.

        for (int i = 0; i < n; i++)
        {
            int x; //present reading of temperature sensors for i th container
            cin >> x;
            if (x < bound[i].first)
                ansx[i] = 1, temp_flag = 1; //if lower temperature than the required temperature found.
            else if (x > bound[i].second)
                ansx[i] = -1, temp_flag = 1; //if higher temperature than the required temperature found.
        }

        for (int i = 0; i < n; i++)
        {
            if (ansx[i] == 1)
                cout << "\t\tWarning!!! Temperature low for container " << i + 1 << ". Hurry, increase the temperature for container " << i + 1 << ".\n";
            else if (ansx[i] == -1)
                cout << "\t\tWarning!!! Temperature high for container " << i + 1 << ". Hurry, decrease the temperature for container " << i + 1 << ".\n";
        }
        if (temp_flag == 0)
            cout << "\t\tAll the beers are under suitable condition.\n";
    }

    cout << "\nTruck reached Destination :) \n\n";


    return 0;
}
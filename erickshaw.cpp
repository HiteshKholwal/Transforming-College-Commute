#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> busQueue; // Queue to represent the persons waiting for vehicle
    int numberOfPersons = 0;

    // Input the number of persons
    cout << "Enter the number of persons: ";
    cin >> numberOfPersons;

    // Fill the queue with persons
    for (int i = 1; i <= numberOfPersons; i++)
    {
        busQueue.push(i);
    }

    int numberOfBuses = 0;
    int personPerBus = 5;

    // Input the number of buses
    cout << "Enter the number of buses: ";
    cin >> numberOfBuses;

    for (int i = 1; i <= numberOfBuses; i++)
    {
        cout << "Bus" << i << "picks up the following persons: ";
        for (int j = 0; j < personPerBus && !busQueue.empty(); j++)
        {
            cout << busQueue.front() << " ";
            busQueue.pop();
        }
        cout << endl;
    }

    // Any remaining presons
    if (!busQueue.empty())
    {
        cout << "Remaining persons waiting for the next set of buses: ";
        while (!busQueue.empty())
        {
            cout << busQueue.front() << " ";
            busQueue.pop();
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

int main()
{

    vector<Car> carList;


    carList.push_back(Car("Toyota", "Corolla", 2004));
    carList.push_back(Car("BMW", "335", 2019));
    carList.push_back(Car("Ford", "Transit", 2006));


    cout << "Listan toinen auto:" << endl;
    carList[1].printData();

    cout << endl;


    cout << "Kaikki autot:" << endl;

    for (int i = 0; i < carList.size(); i++)
    {
        cout << "Auto " << i + 1 << ":" << endl;
        carList[i].printData();
        cout << endl;
    }

    return 0;
}

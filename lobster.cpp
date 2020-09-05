#pragma once
#include <iostream>
#include "lobster.h"
using namespace std;

Lobster::Lobster(Lobster lobsters[]) {
    weight = rand() % 20 + 1;
    taste = rand() % 5 + 1;
    bool done;
    while(!done) {
        done = true;
        cout << "Please give the lobster a name: ";
        cin >> name;
        for (int i = 0; i < 3; i++) {
            if (&lobsterTank[i] != nullptr && &lobsterTank[i].getName = name) {
                cout << "Another lobster has the same name..." << endl;
                done = false;
                break;
            }
        }
    }
    describeLobster();
}

Lobster::~Lobster() {
    cout << getName() << " the lobster was eaten" << endl;
}

void Lobster::describeLobster() {
    cout << "Lobster was named " << name << "./n";
    cout << name << " weighs " << weight << " pounds.";
    cout << "It has a taste rating of " << taste << " of 5 stars";
}

void Lobster::feed(int food) {}

string Lobster::getName() {return name;};





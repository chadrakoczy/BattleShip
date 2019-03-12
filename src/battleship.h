/*
 * battleship.h
 *
 *  Created on: Mar 10, 2019
 *      Author: Chad
 */

#ifndef SRC_BATTLESHIP_H_
#define SRC_BATTLESHIP_H_

#include <vector>
#include <iostream>
#include "Ship.h"

using namespace std;

void printBoard(vector<vector<char>> *board);
void putValue(vector<vector<char>> *board, int row, int column, char value);
bool validInput(int row, int column);
vector<int> getInput(string input);
void printShip(Ship *ship);
void placeShip(Ship *ship);
void printOptions(Ship *aircraftCarrier, Ship *battleShip, Ship *submarine, Ship *cruiser, Ship *destroyer);

#endif /* SRC_BATTLESHIP_H_ */

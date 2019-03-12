/*
 * Ship.cpp
 *
 *  Created on: Mar 11, 2019
 *      Author: Chad
 */

#include "Ship.h"
#include <string>

using namespace std;

int row;
int column;
bool inited = false;

Ship::Ship(string shipName, int shipLength, int shipRow, int shipColumn, bool isLeftRight)
{
    name = shipName;
    length = shipLength;
    row = shipRow;
    column = shipColumn;

    for(int i = 0; i < length; i++){
        hits.push_back(false);
    }

    leftRight = isLeftRight;

    setLocation();

}

Ship::Ship(string shipName, int shipLength)
{
    name = shipName;
    length = shipLength;
    leftRight = false;

    for(int i = 0; i < length; i++){
        hits.push_back(false);
    }



}

Ship::~Ship()
{
    // TODO Auto-generated destructor stub
}

void Ship::setLocation()
{

    if(leftRight)
    {

        for(int tempColumn = column; tempColumn < column + length; tempColumn++)
        {
            location.push_back(vector<int>{row, tempColumn});
        }

    }
    else
    {
        for(int tempRow = row; tempRow < row + length; tempRow++)
        {
            location.push_back(vector<int>{tempRow, column});
        }
    }



}

void Ship::setLocation(int shipRow, int shipColumn, bool isLeftRight)
{
    row = shipRow;
    column = shipColumn;
    leftRight = isLeftRight;
    setLocation();
    inited = true;
}

vector<vector<int>> *Ship::getLocation()
{
    return &location;
}

string Ship::getName()
{
    return name;
}

int Ship::getLength()
{
    return length;
}

bool Ship::getInited()
{
    return inited;
}


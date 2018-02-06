#include <iostream>
#include <string>
#include <vector>
#include "Assignment.h"
using namespace std;

int main ()
{
int classNum = 0;

string classWord = " ";
vector<Assignment> testvector;

Assignment object;

testvector.push_back (object);

for ( int x = 0; x < 4; x++)
{
cout << "enter an integer" << endl;
cin >> classNum;
cout << endl;
cout << "enter any form of text" << endl;
cin >> classWord;
cout << endl;
object.setNum (classNum);
object.setWord (classWord);
testvector.push_back (object);
}
cout << "The vector contains " << testvector.size() << " objects" << endl;
cout << " The value of the objects in the vector are: " << endl;

for (int y = 0; y < 6; y++)
{
cout << "Test" << endl;
}


}


#include "Assignment.h"
#include <iostream>
using namespace std;

Assignment:: Assignment ()
{
num = 0;
word = "testphase";
}

void Assignment:: setNum (int classNum)
{
	num = classNum;
}

void Assignment:: setWord (string classWord)
{
	word = classWord;
}

string Assignment:: getWord () const { return word; }
int Assignment:: getNum () const { return num: }

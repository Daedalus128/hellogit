#include <iostream>
#include <string>
using namespace std;

class Assignment
{

private:
int num;
string word;

public:

Assignment ();

void setNum (int classNum);

void setWord (string classWord);

string getWord () const;
int getNum () const;
};


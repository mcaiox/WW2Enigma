#ifndef UTILITIES_H_
#define UTILITIES_H_
#include <string>

using namespace std;

bool isUppercaseCharacter(char chr);
int charToIndex(char chr);
char indexToCharacter(int index);
bool isFileExist(const char *fileName);

#endif

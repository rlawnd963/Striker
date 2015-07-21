#include <stdio.h>
#include <iostream>
using namespace std;
#define width 50
#define height 30

int UserHit = 0;

static char** back = NULL;
void GroundShow();
void GroundSet(char **back, int key);

void GroundInit(char **back, int r, int c);

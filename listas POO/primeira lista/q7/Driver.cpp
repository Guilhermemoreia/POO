#include <iostream>
#include <string>
#include "Monitor.h"
using namespace std;

int main()
{
    // não printa nada pq n foi passado nenhuma variavel para os sets
    Monitor *mario = new Monitor();
    mario->print();
}
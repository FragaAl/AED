#include <iostream>
#include <cassert>
#include <string>

int main()
{
int a=2;
int b=3;

double c=3.1416;

char d='4';

bool e= false;

unsigned f= 4567;

std::string g= "Hola";

assert(a+b==5);
assert(c==3.1416);
assert(d*2==8);
assert(e!=true);
assert(f>=4566);
assert(g.length ()==4);

}

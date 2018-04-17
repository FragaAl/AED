#include <iostream>
#include <cassert>
#include <string.h>

int main()
{	
const int a=3 ;	
const double pi = 3.1416;
const char letra='p';
const bool variable = false;
const unsigned m = 4567;
const char Saludo[5] = "HOLA";

assert (a==3);
assert (pi==3.1416);
assert(letra=='p');
assert(variable == false);
assert(m==4567);
assert(Saludo[5]!=0);

return 0;
}

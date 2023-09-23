#include "corn.h"
#include "defines.h"

int corn;
int multiplier = STARTMULTI;

int GetCorn(void)
{
    return corn;
}

void AddCorn(amount)
{
    corn += amount;
}

int GetMulti(void)
{
    return multiplier;
}

void AddMulti(amount)
{
    multiplier += amount;
}
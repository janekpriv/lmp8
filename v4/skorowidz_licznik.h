#ifndef SKOROWIDZ_LICZNIK_H
#define SKOROWIDZ_LICZNIK_H

#include "skorowidz.h"
#include <stdio.h>


void licz_wystapienia(FILE *in, skorowidz_t *skorowidz, char buf);
int czy_cale_slowo(const char *tekst, const char *slowo, int pozycja);


#endif 
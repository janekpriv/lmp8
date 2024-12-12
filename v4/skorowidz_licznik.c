#include "skorowidz_licznik.h"
#include "indx4.c"
#include <string.h>


void licz_wystapienia(FILE *in, skorowidz_t *skorowidz) {
    char buf[BUFSIZE];
    int nr_linii = 0;

    while (fgets(buf, BUFSIZE, in) != NULL) {
        nr_linii++;
        for (int i = 0; i < skorowidz->ile_slow; i++) {
            if (strstr(buf, skorowidz->slowa[i]) != NULL) {
                dodaj_pozycje_skorowidza(skorowidz, i, nr_linii);
            }
        }
    }
}

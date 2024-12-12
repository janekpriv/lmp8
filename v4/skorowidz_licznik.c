#include "skorowidz_licznik.h"
#include "indx4.c"
#include "skorowidz.h"
#include <string.h>
#include<ctype.h>


int czy_cale_slowo(const char *tekst, const char *slowo, int pozycja) {
    int dl_slowa = strlen(slowo);
    if (pozycja > 0 && !isspace(tekst[pozycja - 1]) && !ispunct(tekst[pozycja - 1])) {
        return 0;
    }
    if (pozycja + dl_slowa < strlen(tekst) && !isspace(tekst[pozycja + dl_slowa]) && !ispunct(tekst[pozycja + dl_slowa])) {
        return 0;
    }
    return 1;
}






void licz_wystapienia(FILE *in, skorowidz_t skorowidz, char buf) {

    int nr_linii = 0;

    while (fgets(buf, BUFSIZE, in) != NULL) {
        nr_linii++;
        for (int i = 0; i < skorowidz.ile_slow; i++) {
           char *wystapienie = strstr( buf, skorowidz.slowa[i] );
            while (wystapienie != NULL) {
                int pozycja = wystapienie - buf;
                if (czy_cale_slowo(buf, skorowidz.slowa[i], pozycja)) {
                    dodaj_pozycje_skorowidza( &skorowidz, i, nr_linii );
                }
            wystapienie = strstr( wystapienie + 1, skorowidz.slowa[i] );
            }     
        }
    }
}



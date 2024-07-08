#ifndef ARRAYS_H
#define ARRAYS_H

typedef struct {
    const char *verb;
    char** conjugations;
} Verb;

char* essere[] = { "sono", "sei", "è", "siamo", "siete", "sono", NULL };
char* accogliere[] = { "accolgo", "accogli", "accoglie", "accogliamo", "accogliete", "accolgono", NULL };
char* addurre[] = { "adduco", "adduci", "adduce", "adduciamo", "adducete", "adducono", NULL };
char* adempiere[] = { "adempio", "adempie", "adempie", "adempiamo", "adempiete", "adempiono", NULL };
char* andare[] = { "vado", "vai", "va", "andiamo", "andate", "vanno", NULL };
char* anteporre[] = { "antepongo", "anteponi", "antepone", "anteponiamo", "anteponete", "antepongono", NULL };
char* apparire[] = { "appaio", "appari", "appare", "appariamo", "apparite", "appaiono", NULL };
char* appartenere[] = { "appartengo", "appartieni", "appartiene", "apparteniamo", "appartenete", "appartengono", NULL };
char* assalire[] = { "assalgo", "assali", "assale", "assaliamo", "assalite", "assalgono", NULL };
char* benedire[] = { "benedico", "benedici", "benedice", "benediciamo", "benedite", "benedicono", NULL };
char* bere[] = { "bevo", "bevi", "beve", "beviamo", "bevete", "bevono", NULL };
char* circondurre[] = { "circonduco", "circonduci", "circonda", "circonduciamo", "circonducete", "circonducono", NULL };
char* cogliere[] = { "colgo", "cogli", "coglie", "cogliamo", "cogliete", "colgono", NULL };
char* comparire[] = { "compaio", "compari", "compare", "compariamo", "comparite", "compaiono", NULL };
char* compiacere[] = { "mi compiaccio", "ti compiaci", "si compiace", "ci compiacciamo", "vi compiacete", "si compiacciono", NULL };
char* comporre[] = { "compongo", "componi", "compone", "componiamo", "componete", "compongono", NULL };
char* condurre[] = { "conduco", "conduci", "conduce", "conduciamo", "conducete", "conducono", NULL };
char* contenere[] = { "contengo", "contieni", "contiene", "conteniamo", "contenete", "contengono", NULL };
char* contraddire[] = { "contraddico", "contraddici", "contraddice", "contraddiciamo", "contraddite", "contraddicono", NULL };
char* contrarre[] = { "contraggo", "contrai", "contrae", "contraiamo", "contraete", "contraggono", NULL };
char* cuocere[] = { "cuocio", "cuoci", "cuoce", "cuociamo", "cuocete", "cuociono", NULL };
char* dare[] = { "do", "dai", "dà", "diamo", "date", "danno", NULL };
char* dedurre[] = { "deduco", "deduci", "deduce", "deduciamo", "deducete", "deducono", NULL };
char* dimenticare[] = { "dimentico", "dimentichi", "dimentica", "dimentichiamo", "dimenticate", "dimenticano", NULL };
char* dire[] = { "dico", "dici", "dice", "diciamo", "dite", "dicono", NULL };
char* disapparire[] = { "disappaio", "disappari", "disappare", "disappariamo", "disapparite", "disappaiono", NULL };
char* disfare[] = { "disfaccio", "disfai", "disfa", "disfacciamo", "disfate", "disfanno", NULL };
char* dispiacere[] = { "dispiaccio", "dispiaci", "dispiace", "dispiacciamo", "dispiacete", "dispiacciono", NULL };
char* disporre[] = { "dispongo", "disponi", "dispone", "disponiamo", "disponete", "dispongono", NULL };
char* distrarre[] = { "distraggo", "distrai", "distrae", "distriamo", "distraete", "distraggono", NULL };
char* divenire[] = { "divengo", "divieni", "diviene", "diveniamo", "divenite", "divengono", NULL };
char* dolere[] = { "dolgo", "duoli", "duole", "doliamo", "dolete", "dolgono", NULL };
char* dovere[] = { "devo (debbo)", "devi", "deve", "dobbiamo", "dovete", "devono (debbono)", NULL };
char* estrarre[] = { "estraggo", "estrai", "estrae", "estraiamo", "estraete", "estraggono", NULL };
char* fare[] = { "faccio", "fai", "fa", "facciamo", "fate", "fanno", NULL };
char* giacere[] = { "giaccio", "giaci", "giace", "giacciamo", "giacete", "giacciono", NULL };
char* giocare[] = { "gioco", "giochi", "gioca", "giochiamo", "giochiate", "giocano", NULL };
char* imporre[] = { "impongo", "imponi", "impone", "imponiamo", "imponete", "impongono", NULL };
char* introdurre[] = { "introduco", "introduci", "introduce", "introduciamo", "introducete", "introducono", NULL };
char* maledire[] = { "maledico", "maledici", "maledice", "malediciamo", "maledite", "maledicono", NULL };
char* mantenere[] = { "mantengo", "mantieni", "mantiene", "manteniamo", "mantenete", "mantengono", NULL };
char* morire[] = { "muoio", "muori", "muore", "morio", "muori", "morigli", "muore", NULL };
char* nevicare[] = { "nevico", "nevichi", "nevica", "nevichiamo", "nevicate", "nevica", NULL };
char* nuocere[] = { "nuocio", "nuoci", "nuoce", "nuociamo", "nuocete", "nuociono", NULL };
char* occorrere[] = { "occorro", "occorri", "occorre", "occorriamo", "occorrete", "occorrono", NULL };
char* opporre[] = { "opporgo", "opponi", "oppose", "opponiamo", "opponete", "oppongono", NULL };
char* ottenere[] = { "ottengo", "ottiensi", "ottiene", "otteniamo", "ottenete", "ottengo", NULL };
char* parere[] = { "paio", "pari", "pare", "pariamo", "parate", "paiono", NULL };
char* piacere[] = { "piaccio", "piaci", "piace", "piacciamo", "piacete", "piacciono", NULL };
char* piovere[] = { "piovo", "piovi", "piove", "pioviamo", "piovete", "piovono", NULL };
char* porre[] = { "pongo", "poni", "pone", "poniamo", "ponete", "pongono", NULL };
char* posporre[] = { "pospongo", "posponi", "pospone", "posponiamo", "posponete", "pospongono", NULL };
char* possedere[] = { "possiedo", "possiedi", "possiede", "possediamo", "possedete", "possono", NULL };
char* potere[] = { "posso", "puoi", "può", "possiamo", "potete", "possono", NULL };
char* predire[] = { "prevedo", "prevedi", "prevede", "prevediamo", "prevedete", "previsto", NULL };
char* prevalere[] = { "prevale", "prevale", "prevale", "prevale", "prevale", "prevale", NULL };
char* produrre[] = { "produco", "produci", "produce", "produciomo", "produce", "producono", NULL };
char* pungere[] = { "pungo", "puongi", "punge", "pungiamo", "pungie", "pungono", NULL };
char* raccogliere[] = { "raccolgo", "raccogli", "raccoglie", "raccogliamo", "raccogliete", "raccoglono", NULL };
char* raggiungere[] = { "raggiungo", "raggiungi", "raggiunge", "raggiungiamo", "raggiungiamo", "raggiungono", NULL };
char* ridere[] = { "rido", "ridi", "ride", "ridiamo", "ridete", "ridono", NULL };
char* ripetere[] = { "ripeto", "ripti", "ripete", "ripiamo", "ripete", "ripetano", NULL };
char* riuscire[] = { "riuso", "riusi", "riuscelli", "riusciamo", "riuscite", "riuscio", NULL };
char* scegliere[] = { "sceglio", "scegli", "sceglie", "scegliamo", "scegliamo", "scelgono", NULL };
char* scrivere[] = { "scrivo", "scrivi", "scrive", "scriviamo", "scriviamo", "scrivono", NULL };
char* sorgere[] = { "sorgo", "sorgi", "sorge", "sorgiamo", "sorgete", "sorgono", NULL };
char* spendere[] = { "spendo", "spendi", "spende", "spendiamo", "spendono", NULL };
char* spegnere[] = { "spengo", "spegne", "spenga", "spegniamo", "spegnamo", "spengano", NULL };
char* stringere[] = { "stringo", "stringi", "stringe", "stringiamo", "stringono", NULL };
char* suggerire[] = { "suggerisco", "suggerisci", "suggerisce", "suggeriamo", "suggerite", "suggeriscono", NULL };
char* tenere[] = { "tengo", "tieni", "tiene", "teniamo", "tenete", "tengono", NULL };
char* trarre[] = { "traggo", "trai", "traiamo", "traggono", "trarete", "trarete", NULL };
char* valere[] = { "valgo", "valgo", "valiamo", "valiamo", "valgono", NULL };
char* venire[] = { "vengo", "vieni", "viene", "veniamo", "veniate", "vengono", NULL };
char* volere[] = { "voglio", "vuoi", "vuole", "vogliamo", "vogliate", "vogliono", NULL };

extern Verb italianverbs[] = {
    {"essere", essere},
    {"accogliere", accogliere},
    {"addurre", addurre},
    {"adempiere", adempiere},
    {"andare", andare},
    {"anteporre", anteporre},
    {"apparire", apparire},
    {"appartenere", appartenere},
    {"assalire", assalire},
    {"benedire", benedire},
    {"bere", bere},
    {"circondurre", circondurre},
    {"cogliere", cogliere},
    {"comparire", comparire},
    {"compiacere", compiacere},
    {"comporre", comporre},
    {"condurre", condurre},
    {"contenere", contenere},
    {"contraddire", contraddire},
    {"contrarre", contrarre},
    {"cuocere", cuocere},
    {"dare", dare},
    {"dedurre", dedurre},
    {"dimenticare", dimenticare},
    {"dire", dire},
    {"disapparire", disapparire},
    {"disfare", disfare},
    {"dispiacere", dispiacere},
    {"disporre", disporre},
    {"distrarre", distrarre},
    {"divenire", divenire},
    {"dolere", dolere},
    {"dovere", dovere},
    {"estrarre", estrarre},
    {"fare", fare},
    {"giacere", giacere},
    {"giocare", giocare},
    {"imporre", imporre},
    {"introdurre", introdurre},
    {"maledire", maledire},
    {"mantenere", mantenere},
    {"morire", morire},
    {"nevicare", nevicare},
    {"nuocere", nuocere},
    {"occorrere", occorrere},
    {"opporre", opporre},
    {"ottenere", ottenere},
    {"parere", parere},
    {"piacere", piacere},
    {"piovere", piovere},
    {"porre", porre},
    {"posporre", posporre},
    {"possedere", possedere},
    {"potere", potere},
    {"predire", predire},
    {"prevalere", prevalere},
    {"produrre", produrre},
    {"pungere", pungere},
    {"raccogliere", raccogliere},
    {"raggiungere", raggiungere},
    {"ridere", ridere},
    {"ripetere", ripetere},
    {"riuscire", riuscire},
    {"scegliere", scegliere},
    {"scrivere", scrivere},
    {"sorgere", sorgere},
    {"spendere", spendere},
    {"spegnere", spegnere},
    {"stringere", stringere},
    {"suggerire", suggerire},
    {"tenere", tenere},
    {"trarre", trarre},
    {"valere", valere},
    {"venire", venire},
    {"volere", volere},
    {NULL, NULL}
};

#endif // ARRAYS_H

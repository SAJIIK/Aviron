#ifndef _BATSUIVEUR_H
#define _BATSUIVEUR_H

#include "Trscomm.h"

class BatSuiveur : public Trscomm {
public:

 void Save(int vitesse, int acceler, int cadence, int effort);
 
 BatSuiveur();
 ~BatSuiveur();

 };
 #endif

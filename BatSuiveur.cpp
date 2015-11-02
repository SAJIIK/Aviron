#include "BatSuiveur.h"
#include <stdio.h>
#include <iostream>
#include <fstream>


void BatSuiveur::Save(int vitesse, int acceler, int cadence, int effort) {

 FILE * fp;

   fp = fopen ("data.txt", "a");
   fprintf(fp, "\nVitesse: %d Acceleration: %d Cadence: %d Effort: %d",vitesse, acceler, cadence, effort);
   
   fclose(fp);

}

BatSuiveur::BatSuiveur() {
}

BatSuiveur::~BatSuiveur() {
}

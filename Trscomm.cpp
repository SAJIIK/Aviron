#include "Trscomm.h"
#include <iostream>
#include <fstream>
#include "clib.h"

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//#define DEBUG

Trscomm::Trscomm(){
	
	vitesse=9600;
	parite='n';
	nbStops=1;
	nbBits=8;
}

Trscomm::Trscomm(long bauds, char parit, int bits, int stops, int flow){
	
	vitesse=bauds;
	parite=parit;
	nbStops=stops;
	nbBits=bits;
}

Trscomm::~Trscomm(){
}

// Initialisation des ports
int Trscomm::OuvreRs(int port) {

    int rep;

    if (fossil_init(port) == 0x1954) 
	{
		rep=1;
      fossil_setbaud (port, 9600, FOSSIL_PARITY_NO, 8, 1);
      fossil_purge_input ( port );
      fossil_purge_output ( port );
	}
	else 
	{
		rep=-1;
   }

	return (rep);
}

// Fermeture des ports
int Trscomm::FermeRs(int port) {
	
    int rep;
	fossil_deinit(port);
}


// Fonction d'envois des trames au poste distant
int Trscomm::EcrisCom(int port, int vitesse, int acceler, int cadence, int effort ) { 

   char msg[50];
   unsigned int ecris;
   sprintf(msg,"\nV:%d A:%d C:%d E:%d\n",vitesse,acceler,cadence,effort );
   ecris=fossil_writeblock (port, msg,strlen(msg)-1);
   return ecris;
}

// Fonction d'ecriture vers l'orphy
int Trscomm::EcrisOr(int val, int port ) {
	
	unsigned int ecris; 
    ecris=fossil_putbyte (port, val );
	
}

// Fonction de lecture de l'orphy
int Trscomm::LisRs(int port) {
	
    int recu;
    recu=fossil_getbyte_wait(port);
    return recu;
	
}

// Fonction de lecture d'un terminal type pc
int Trscomm::LisTer(int port) {
	
    int ordre;
    sleep(2);
    ordre=fossil_getbyte(port);
    return ordre;
	
}


 




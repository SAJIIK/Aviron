#ifndef _TRSCOMM_H
#define _TRSCOMM_H

class Trscomm {
  public:
    // Constructeur par défaut. Initialise les paramètres de communication à
    // leur valeur par défaut.
    Trscomm();

    // mémorise les paramètres dans les attributs associés
    Trscomm(long bauds, char parit, int bits, int stops, int flow);

    // destructeur
    ~Trscomm();

    // Ouvre (monopolise) la voie série sur le port désigné.
    int OuvreRs(int port);

    // Libère la voie série 
    int FermeRs(int port);

    // Emet le caractère passé en paramètre sur la voie série vers l'orphy
    int EcrisOr(int val, int port);
    
	//Emet les valeurs passé en paramètre sur la voie série vers le poste distant
    int EcrisCom(int port, int vitesse, int acceler, int cadence, int effort);

    // Retourne la valeur envoyer par l'orphy
    int LisRs(int port);
 
    // Retourne la valeur envoyer par le poste distant
    int LisTer(int port); 

	
  private:
    // méthode à usage interne
	
    // Vitesse de communication (bauds ou bits/s) par défaut 9600 bauds
    long vitesse;
    
    char parite;
    
    int nbStops;
    
    int nbBits;

    

};
#endif

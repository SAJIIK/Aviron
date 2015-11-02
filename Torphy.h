#ifndef _TORPHY_H
#define _TORPHY_H


#include "Trscomm.h"

class Torphy : public Trscomm {
  public:
    int LisEA(short numEA);

    int LisEB(short numEB);

    int LisEF(short numEF);


    Torphy();

    ~Torphy();

};
#endif

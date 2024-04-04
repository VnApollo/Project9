#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Model.h"
#include "View.h"

class CaroController {
private:
    CaroModel model;
    CaroView view;
public:
    void playGame();
};

#endif // CONTROLLER_H

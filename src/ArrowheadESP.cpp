//
// Created by Szvetlin Tanyi <szvetlin@aitia.ai> on 2020. 04. 06.
//

#include "ArrowheadESP.h"

// #######################################
// Constructors
// #######################################

ArrowheadESP::ArrowheadESP() {
    debugPrintln("ArrowheadESP Default Constructor");
}

ArrowheadESPFS ArrowheadESP::getArrowheadESPFS() {
    return arrowheadEspFs;
}
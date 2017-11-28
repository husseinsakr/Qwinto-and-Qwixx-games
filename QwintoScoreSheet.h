/*
 * =================================
 * File: QwintoScoreSheet.h
 * 
 * Authors: 
 * Jordan Stanley (7432058)
 * jstan064@uottawa.ca
 * Hussein Sakr (7897706)
 * hsakr011@uottawa.ca
 * =================================
 */

#ifndef QWINTOSCORESHEET_H
#define QWINTOSCORESHEET_H

#include "QwintoRow.h"
#include "ScoreSheet.h"


class QwintoScoreSheet: protected ScoreSheet {
public:
    QwintoRow<Colour::RED> redRow;
    QwintoRow<Colour::BLUE> blueRow;
    QwintoRow<Colour::YELLOW> yellowRow;
        
    bool validate(RollOfDice &rollOfDice, Colour colour, int position);
    
    int calcTotal(); //helper method for setTotal

};



#endif /* QWINTOSCORESHEET_H */

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


class QwintoScoreSheet: public ScoreSheet {
public:
    QwintoRow<Colour::RED> redRow;
    QwintoRow<Colour::BLUE> blueRow;
    QwintoRow<Colour::YELLOW> yellowRow;
        
    QwintoScoreSheet();
    bool validate(RollOfDice &rollOfDice, Colour colour, int position);
    bool score(RollOfDice &rollOfDice, Colour colour, int position);
    bool operator! (); //returns true if the scoresheet indicates the game is done
    
    int calcTotal(); //helper method for setTotal
    
    ostream& doprint(ostream& os) const {
        os << "               ------------------------------- " << endl;
        os << "Red            " << redRow << endl;
	os << "            ---------------------------------- " << endl;
	os << "Yellow      " << yellowRow << endl;
	os << "         ---------------------------------- " << endl;
	os << "Blue     " << blueRow << endl;
	os << "         ------------------------------- " << endl;
        return os;
    }
    
    friend ostream& operator<<(ostream &os, const QwintoScoreSheet &aQwintoScoreSheet) {
        os << static_cast<const ScoreSheet &>(aQwintoScoreSheet);
    }
    
};



#endif /* QWINTOSCORESHEET_H */

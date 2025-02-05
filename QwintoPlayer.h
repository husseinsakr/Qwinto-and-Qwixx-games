/*
 * =================================
 * File: QwintoPlayer.h
 * 
 * Authors: 
 * Jordan Stanley (7432058)
 * jstan064@uottawa.ca
 * Hussein Sakr (7897706)
 * hsakr011@uottawa.ca
 * =================================
 */


#ifndef QWINTOPLAYER_H
#define QWINTOPLAYER_H

#include "Player.h"
#include "QwintoScoreSheet.h"

class QwintoPlayer : public Player {
	
public:
    QwintoScoreSheet qss;
    QwintoPlayer();
    RollOfDice inputAfterRoll(RollOfDice &rollOfDice);
    RollOfDice inputBeforeRoll(RollOfDice &rollOfDice);
};

#endif /* QWINTOPLAYER_H */

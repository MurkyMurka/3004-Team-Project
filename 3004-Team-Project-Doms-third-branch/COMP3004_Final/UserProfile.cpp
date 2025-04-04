#include "UserProfile.h"

userProfile::userProfile(float i, float cor, float tar, float curr, float io, float immBol) {
    icr = i;
    correctionFactor = cor;
    targetBG = tar;
    currBG = curr;
    iob = io;
    immediateBolus = immBol;
    isActiveBool = false;
}

void userProfile::addTimeSegment(double t) {
    timeSegments.append(t);
}

void userProfile::activateProfile() { isActiveBool = true; }

void userProfile::setIcr(float newNum) { icr = newNum; }

void userProfile::setCorrectionFactor(float newNum) { correctionFactor = newNum; }

void userProfile::setTargetBG(float newNum) { targetBG = newNum; }

void userProfile::setCurrBG(float newNum) { currBG = newNum; }

void userProfile::setIob(float newNum) { iob = newNum; }

void userProfile::setImmediate(float newNum) { immediateBolus = newNum; }

bool userProfile::isActive() { return isActiveBool; }

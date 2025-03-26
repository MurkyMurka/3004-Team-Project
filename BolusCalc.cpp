#include "BolusCalc.h"

BolusCalc::BolusCalc(float i, float b, float c, float cor, float tar, float curr, float io, float immBol, float t) {
    icr = i;
    basal = b;
    carb = c;
    correctionFactor = cor;
    targetBG = tar;
    currBG = curr;
    iob = io;
    immediateBolus = immBol;
    time = t;
}

float BolusCalc::calculateFoodBolus() {
    return carb / icr;
}

float BolusCalc::calculateCorrectionBolus() {
    return (currBG - targetBG) / correctionFactor;
}

float BolusCalc::calculateTotalBolus() {
    return calculateFoodBolus() + calculateCorrectionBolus();
}

float BolusCalc::calculateFinalBolus() {
    return calculateTotalBolus() - iob;
}

float BolusCalc::calculateImmediateBolus() {
    return immediateBolus * calculateFinalBolus();
}

float BolusCalc::calculateExtendedBolus() {
    return (1 - immediateBolus) * calculateFinalBolus();
}

float BolusCalc::caluculateBolusRate() {
    return calculateExtendedBolus() / time;
}

void BolusCalc::setIcr(float newNum) {
    icr = newNum;
};

void BolusCalc::setBasal(float newNum) {
    basal = newNum;
};

void BolusCalc::setCarb(float newNum) {
    carb = newNum;
};

void BolusCalc::setCorrectionFactor(float newNum) {
    correctionFactor = newNum;
};

void BolusCalc::setTargetBG(float newNum) {
    targetBG = newNum;
};

void BolusCalc::setCurrBG(float newNum) {
    currBG = newNum;
};

void BolusCalc::setIob(float newNum) {
    iob = newNum;
};

void BolusCalc::setTime(float newNum) {
    time = newNum;
};

void BolusCalc::setImmediate(float newNum) {
    immediateBolus = newNum;
};

#include "BolusCalc.h"

BolusCalc::BolusCalc(double i, double b, double c, double cor, double tar, double curr, double io, double immBol, double t) {
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

double BolusCalc::calculateFoodBolus() {
    return carb / icr;
}

double BolusCalc::calculateCorrectionBolus() {
    return (currBG - targetBG) / correctionFactor;
}

double BolusCalc::calculateTotalBolus() {
    return calculateFoodBolus() + calculateCorrectionBolus();
}

double BolusCalc::calculateFinalBolus() {
    return calculateTotalBolus() - iob;
}

double BolusCalc::calculateImmediateBolus() {
    return immediateBolus * calculateFinalBolus();
}

double BolusCalc::calculateExtendedBolus() {
    return (1 - immediateBolus) * calculateFinalBolus();
}

double BolusCalc::caluculateBolusRate() {
    return calculateExtendedBolus() / time;
}

void BolusCalc::setIcr(double newNum) {
    icr = newNum;
}

void BolusCalc::setBasal(double newNum) {
    basal = newNum;
}

void BolusCalc::setCarb(double newNum) {
    carb = newNum;
}

void BolusCalc::setCorrectionFactor(double newNum) {
    correctionFactor = newNum;
}

void BolusCalc::setTargetBG(double newNum) {
    targetBG = newNum;
}

void BolusCalc::setCurrBG(double newNum) {
    currBG = newNum;
}

void BolusCalc::setIob(double newNum) {
    iob = newNum;
}

void BolusCalc::setTime(double newNum) {
    time = newNum;
}

void BolusCalc::setImmediate(double newNum) {
    immediateBolus = newNum;
}

double BolusCalc::getImemdiate(){
    return immediateBolus;
}

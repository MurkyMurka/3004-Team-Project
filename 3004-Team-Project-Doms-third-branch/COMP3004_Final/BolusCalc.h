#ifndef BOLUSCALC_H
#define BOLUSCALC_H

class BolusCalc {

public:
    BolusCalc(double = 1, double = 0, double = 0, double = 1, double = 0, double = 0, double = 0, double = 1, double = 0);
    double calculateFoodBolus();
    double calculateCorrectionBolus();
    double calculateTotalBolus();
    double calculateFinalBolus();
    double calculateImmediateBolus();
    double calculateExtendedBolus();
    double caluculateBolusRate();
    void setIcr(double);
    void setBasal(double);
    void setCarb(double);
    void setCorrectionFactor(double);
    void setTargetBG(double);
    void setCurrBG(double);
    void setIob(double);
    void setTime(double);
    void setImmediate(double);
    double getImemdiate();

private:
    double icr;
    double basal;
    double carb;
    double correctionFactor;
    double targetBG;
    double currBG;
    double iob;
    double time; //can be changed TBD.
    double immediateBolus;

};

#endif // BOLUSCALC_H

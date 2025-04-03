#ifndef BOLUSCALC_H
#define BOLUSCALC_H

class BolusCalc {

public:
    BolusCalc(float = 0, float = 0, float = 0, float = 0, float = 0, float = 0, float = 0, float = 0, double = 0);
    float calculateFoodBolus();
    float calculateCorrectionBolus();
    float calculateTotalBolus();
    float calculateFinalBolus();
    float calculateImmediateBolus();
    float calculateExtendedBolus();
    float caluculateBolusRate();
    void setIcr(float);
    void setBasal(float);
    void setCarb(float);
    void setCorrectionFactor(float);
    void setTargetBG(float);
    void setCurrBG(float);
    void setIob(float);
    void setTime(double);
    void setImmediate(float);

private:
    float icr;
    float basal;
    float carb;
    float correctionFactor;
    float targetBG;
    float currBG;
    float iob;
    double time; //can be changed TBD.
    float immediateBolus;

};

#endif // BOLUSCALC_H

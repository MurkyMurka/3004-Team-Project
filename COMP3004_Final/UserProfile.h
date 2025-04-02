#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <QVector>

class userProfile {
    public:
        userProfile(float, float, float, float, float, float);
        void addTimeSegment(double);
        void activateProfile();
        void setIcr(float);
        void setCorrectionFactor(float);
        void setTargetBG(float);
        void setCurrBG(float);
        void setIob(float);
        void setImmediate(float);
        bool isActive();


    private:
        bool isActiveBool;
        float icr;
        float correctionFactor;
        float targetBG;
        float currBG;
        float iob;
        QVector<double> timeSegments; //can be changed TBD. Use .push_back to push the push to the back of the QVector
        float immediateBolus;
};

#endif // USERPROFILE_H

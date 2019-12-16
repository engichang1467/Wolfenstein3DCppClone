#ifndef ATTENUATION_H
#define ATTENUATION_H

#include "Attenuation.h"

class Attenuation
{
    private:
        float constant;
        float linear;
        float exponent;

    public:
        Attenuation(float constant, float linear, float exponent);
        float getConstant();
        void setConstant(float constant);
        float getLinear();
        void setLinear(float linear);
        float getExponent();
        void setExponent(float exponent);
    
};

#endif
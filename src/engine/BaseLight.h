#ifndef BASELIGHT_H
#define BASELIGHT_H

#include "Vector3f.h"

class BaseLight
{
    private:
        Vector3f color;
        float intensity;

    public:
        BaseLight(Vector3f color, float intensity);
        Vector3f getColor();
        void setColor(Vector3f color);
        float getIntensity();
        void setIntensity(float intensity);
};

#endif
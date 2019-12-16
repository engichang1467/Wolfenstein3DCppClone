#ifndef QUATERNION_H
#define QUATERNION_H

#include "Vector3f.h"

class Quaternion
{
    private:
        float x, y, z, w;

    public:
        Quaternion(float x, float y, float z, float w);
        float lenght();
        Quaternion normalize();
        Quaternion conjugate();
        Quaternion mul(Quaternion r);
        Quaternion mul(Vector3f r);
        float getX();
        void setX(float x);
        float getY();
        void setY(float y);
        float getZ();
        void setZ(float z);
        float getW();
        void setW(float w);
};

#endif
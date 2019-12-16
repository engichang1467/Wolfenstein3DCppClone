#ifndef DIRECTIONALLIGHT_H
#define DIRECTIONALLIGHT_H

#include "BaseLight.h"
#include "Vector3f.h"

class DirectionalLight
{
    private:
        BaseLight base;
        Vector3f direction;

    public:
        DirectionalLight(BaseLight base, Vector3f direction);

        BaseLight getBase();
        void setBase(BaseLight base);

        Vector3f getDirection();
        void setDirection(Vector3f direction);
};

#endif
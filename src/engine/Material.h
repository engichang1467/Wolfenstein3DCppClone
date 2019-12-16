#ifndef MATERIAL_H
#define MATERIAL_H

#include "Texture.h"
#include "Vector3f.h"

class Material
{
    private:
        Texture texture;
        Vector3f color;
        float specularIntensity;
        float specularPower;

    public:
        Material(Texture texture);
        Material(Texture texture, Vector3f color);
        Material(Texture texture, Vector3f color, float specularIntensity, float specularPower);

        Texture getTexture();
        void setTexture(Texture texture);
        Vector3f getColor();
        void setColor(Vector3f color);
        float getSpecularIntensity();
        void setSpecularIntensity(float specularIntensity);
        float getSpecularPower();
        void setSpecularPower(float specularPower);


};

#endif
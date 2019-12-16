#ifndef MATRIX4F_H
#define MATRIX4F_H

#include <cstdio>
#include "Vector3f.h"

class Matrix4f
{
    private:
        float m[4][4];

    public:
        Matrix4f();
        Matrix4f initIdentity();
        Matrix4f initTranslation(float x, float y, float z);
        Matrix4f initRotation(float x, float y, float z);
        Matrix4f initScale(float x, float y, float z);
        Matrix4f initProjection(float fov, float width, float height, float zNear, float zFar);
        Matrix4f initCamera(Vector3f forward, Vector3f up);

        Matrix4f mul(Matrix4f r);

        float **getM();
        float get(int x, int y);
        void setM(float m[4][4]);
        void set(int x, int y, float value);
};

#endif
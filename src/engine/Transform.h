#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "Camera.h"
#include "Vector3f.h"
#include "Matrix4f.h"

class Transform
{
    private:
        static Camera camera;

        static float zNear;
        static float zFar;
        static float width;
        static float height;
        static float fov;

        Vector3f translation;
        Vector3f rotation;
        Vector3f scale;

    public:
        Transform();
        Matrix4f getTransformation();
        Matrix4f getProjectedTransformation();

        Vector3f getTranslation();
        static void setProjection(float fov, float width, float height, float zNear, float zFar);
        void setTranslation(Vector3f translation);
        void setTranslation(float x, float y, float z);

        Vector3f getRotation();
        void setRotation(Vector3f rotation);
        void setRotation(float x, float y, float z);

        Vector3f getScale();
        void setScale(Vector3f scale);
        void setScale(float x, float y, float z);

        static Camera getCamera();
        static void setCamera(Camera camera);
};

#endif
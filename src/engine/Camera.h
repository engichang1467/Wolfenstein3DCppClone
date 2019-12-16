#ifndef CAMERA_H
#define CAMERA_H

#include <stdbool.h>
#include "Vector3f.h"
#include "Vector2f.h"

class Camera
{
    public:
        static Vector3f yAxis;
        // static final Vector3f yAxis = new Vector3f(0,1,0);

    private:
        Vector3f pos, forward, up;

    public:
        Camera();
        Camera(Vector3f pos, Vector3f forward, Vector3f up);
        
        // bool mouseLocked = false;
        // Vector2f centerPosition = new Vector2f(Window.getWidth()/2, Window.getHeight()/2);

        void input();
        void move(Vector3f dir, float amt);
        void rotateY(float angle);
        void rotateX(float angle);

        Vector3f getLeft();
        Vector3f getRight();

        Vector3f getPos();
        void setPos(Vector3f pos);
        Vector3f getForward();
        void setForward(Vector3f forward);
        Vector3f getUp();
        void setUp(Vector3f up);
};

#endif
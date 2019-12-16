#ifndef DOOR_H
#define DOOR_H

#include <stdbool.h>
#include "Mesh.h"
#include "Material.h"
#include "Transform.h"
#include "Vector3f.h"
#include "Vector2f.h"


#define LENGTH 1.0
#define HEIGHT 1.0
#define WEIGHT 0.125f
#define START 0.0
#define TIME_TO_OPEN 0.25
#define CLOSE_DELAY 2.00

class Door
{
    private:
        Mesh mesh;
        Material material;
        Transform transform;

        Vector3f openPosition;
        Vector3f closePosition; 

        bool isOpening;
        double openingStartTime;
        double openTime;
        double closingStartTime;
        double closeTime;
    
    public:
        Door(Transform transform, Material material, Vector3f openPosition);
        void open();
        Vector3f VectorLerp(Vector3f startPos, Vector3f endPos, float lerpFactor);
        void update();
        void render();
        Vector2f getDoorSize();
        Transform getTransform();
};

#endif
#include "color/color.h"
#include "color/fourcolor
void CylinderXY(){
    const element1[4][4] =
        {{0,1,0,1},
        {1,0,1,0},
        {0,0,0,1},
        {0,0,0,0}}
    const element2[4][4] =
        {{0,1,0,1},
        {0,0,1,0},
        {0,1,0,1},
        {0,0,0,0}}
    const element3[4][4] =
        {{0,1,0,1},
        {0,0,1,0},
        {0,0,0,1},
        {0,0,1,0}}
    const element4[4][4] =
        {{0,1,0,1},
        {0,0,1,0},
        {0,0,0,1},
        {1,0,0,0}}
}
void CylinderYZ(){
    const element5[4][4] =
           {{1,0,1,0},
            {0,1,0,0},
            {0,0,1,0},
            {0,0,0,1}}

    const element6[4][4] =
           {{1,0,0,0},
            {0,1,0,1},
            {0,0,1,0},
            {0,0,0,1}}

    const element7[4][4] =
           {{1,0,0,0},
            {0,1,0,0},
            {0,0,1,0},
            {0,1,0,1}}

    const element8[4][4] =
           {{1,0,0,0},
            {0,1,0,0},
            {1,0,1,0},
            {0,0,0,1}}
}
void CylinderXZ() {
    const element9[4][4] =
           {{0,1,0,1},
            {1,0,1,0},
            {0,0,0,1},
            {0,0,0,0}}

    const element10[4][4] =
           {{0,1,0,1},
            {0,0,1,0},
            {0,1,0,1},
            {0,0,0,0}}

    const element11[4][4] =
           {{0,1,0,1},
            {0,0,1,0},
            {0,0,0,1},
            {0,0,1,0}}

    const element12[4][4] =
           {{0,1,0,1},
            {0,0,1,0},
            {0,0,0,1},
            {1,0,0,0}}
}
void CylinderXYZ(){
    const element13[4][4] =
        {{1,0,1,0},
            {0,0,0,1},
            {1,0,0,0},
            {0,1,0,0}}

    const element14[4][4] =
        {{0,0,1,0},
            {0,1,0,1},
            {1,0,0,0},
            {0,1,0,0}}

    const element15[4][4] =
           {{0,0,1,0},
            {0,0,0,1},
            {1,0,1,0},
            {0,1,0,0}}

    const element16[4][4] =
           {{0,0,1,0},
            {0,0,0,1},
            {1,0,0,0},
            {0,1,0,1}}

    const element17[4][4] =
           {{0,1,0,0},
            {1,0,0,0},
            {0,1,0,0},
            {1,0,1,0}}

    const element18[4][4] =
           {{0,0,0,0},
            {1,0,1,0},
            {0,1,0,0},
            {1,0,1,0}}

    const element19[4][4] =
           {{0,0,0,0},
            {1,0,0,0},
            {0,1,0,1},
            {0,0,1,0}}

    const element20[4][4] =
           {{0,0,0,1},
            {1,0,0,0},
            {0,1,0,0},
            {0,0,1,0}}
}
void Cylinder{
    const CylinderXY = 'Cylinder.X+ Cylinder.Y'
    const CylinderYZ = 'Cylinder.Y+ Cylinder.Z'
    const CylinderZX = 'Cylinder.Z + Cylinder.X'
    const CylinderXYZ = 'Cylinder.X + Cylinder.Y + Cylinder.Z'
    return {CylinderXY,CylinderYZ,CylinderZX,CylinderXYZ,X,Y,Z}
}

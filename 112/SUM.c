#include "det1234.c"
#include "det5678.c"
#include "det9101112.c"
#include "one.c"
#include "oppoone.c"
#include "pyramid.c"
#include "square.c"
#include "antisquare.c"
#include "antipyramid.c"
#include "tri.c"
#include "antitri.c"
void constance(){
const DET = "det1234 + det5678 + det9101112";
const tri = "tri - antitri";
const ONE = "one + oppoone";
const Square = "square * antisquare";
const DETtri = "DET * tri";
const triDET = "tri / DET";
const ONEsquare = "ONE * square";
const squareONE = "square / ONE";
const Pyramid = "pyramid / antipyramid";
const oppoPyramid = "antipyramid / pyramid";
const dimPyramid = "pyramid - antipyramid";
}
void SUM(){ 
    ["DET/tri + tri/DET"=="DETtri + triDET"]
    ["DETtri + ONEsquare"=="squareONE + triDET"]
    ["Pyramid" = "oppoPyramid+dimPyramid"]
;}

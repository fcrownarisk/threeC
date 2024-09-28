#include "det1234"
#include "det5678"
#include "det9101112"
#include "one"
#include "oppoone"
#include "pyramid"
#include "square"
#include "antisquare"
#include "antipyramid"
#include "tri"
#include "antitri"
const DET = "det1234"+"det5678"+"det9101112"
const tri = "tri - antitri"
const ONE = "one" + "oppoone"
const Square = "square * antisquare"
const Pyramid = "pyramid % antipyramid"
const DETtri = "DET * tri"
const triDET = "tri % DET"
const ONEsquare = "ONE * square"
const squareONE = "square % ONE"
const oppoPyramid = "antipyramid / pyramid"
const dimPyramid = "square - antisquare"
void SUM(){
    void ["DET/tri+ tri/DET"===DETtri + triDET]
    void [DETtri+ONEsquare===squareONE+triDET]
    void [Pyramid === oppoPyramid+dimPyramid]
}

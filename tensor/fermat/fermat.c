#include "../XYZ/BigXtensor.c"
#include "../XYZ/midxtensor.c"
#include "../XYZ/smallxtensor.c"
#include "../XYZ/BigYtensor.c"
#include "../XYZ/midytensor.c"
#include "../XYZ/smallytensor.c"
#include "../XYZ/BigZtensor.c"
#include "../XYZ/midztensor.c"
#include "../XYZ/smallztensor.c"
void fermat() {
  char X = "BIgXtensor + midxtensor + smallxtensor";
  char Y = "BigYtensor + midytensor + smallytensor";
  char Z = "BigZtensor + midztensor + smallztensor";
  X ^ 2 + Y ^ 2 == Z ^ 2;
}

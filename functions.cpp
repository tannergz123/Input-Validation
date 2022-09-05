#include <stdexcept>
int Largest(int a, int b, int c) {
  int d = a;
  if (a > d) {
    d = a;
  } if (b > d) {
    d = b;
  } if (c > d) {
    d = c;
  }
  return d;
}

bool SumIsEven(int a, int b) {
  if((a+b) % 2 == 0){
    return true;
  } else {
    return false;
  }
}

int BoxesNeeded(int apples) {
  int boxes = ((apples + 19) / 20);
  if (apples < 0) {
    boxes = 0;
  }
  return (boxes);
}

bool SmarterSection(int A_correct, int A_total, int B_correct, int B_total) {
  if ((A_correct < 0) || (A_total <= 0) || (B_correct < 0) || (B_total <= 0 || A_correct > A_total || B_correct > B_total)) {
      throw std::invalid_argument("Input cant be negative");
    }
    float a = (float) A_correct / A_total;
    float b = (float) B_correct / B_total;
  if (a > b) {
    return true;
  } else {
    return false;
  }
}

bool GoodDinner(int pizzas, bool is_weekend) {
  if (pizzas >= 10 && pizzas <= 20) {
    return true;
  }
  if (is_weekend && pizzas >= 10) {
    return true;
  } else
    return false;
}

int SumBetween(int low, int high) {
  int value = 0;
  int max = INT32_MAX;
  if (high < low) {
      throw std::invalid_argument("wrong order");
    }
  for (int n = low; n <= high; n++) {
    value += n;
    max = max - abs(n);
    if (max < 0 ) {
      throw std::overflow_error("Too many digits");
    }
  }
  return value;
}

int Product(int a, int b) {
  return (a * b);
}
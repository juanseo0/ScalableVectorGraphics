/**
 * SVG Rect
 **/

#ifndef RECT_H
#define RECT_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Rect : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:
  // coordinates for the rect
  int cx{0}, cy{0}, width{0}, height{0};

  // color of rect
  string color{"black"};
};

#endif

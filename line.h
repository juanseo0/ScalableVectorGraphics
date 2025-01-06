/**
 * SVG Line
 **/

#ifndef LINE_H
#define LINE_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Line : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:
  // coordinates for the line
  int cx1{0}, cy1{0}, cx2{0}, cy2{0};

  // width of the line
  int sWidth{0};

  // color of line
  string color{"black"};
};

#endif

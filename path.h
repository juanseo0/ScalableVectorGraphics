/**
 * SVG Path
 **/

#ifndef PATH_H
#define PATH_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Path : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:
  // coordinates for the path
  string path{};

  // color of path
  string fill{};

  // transformation of path
  string transform{};
};

#endif

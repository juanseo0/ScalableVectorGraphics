#include "rect.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the object out
ostream &Rect::write(ostream &out) const {
  out << "      <rect ";
  out << "x=\"" << cx << "\" ";
  out << "y=\"" << cy << "\" ";
  out << "width=\"" << width << "\" ";
  out << "height=\"" << height << "\" ";
  out << "fill=\"" << color << "\" ";
  out << " />" << endl;

  return out;
}

// operator>> equivalent to read the object contents
istream &Rect::read(istream &in) {
  in >> cx >> cy >> width >> height >> color;
  return in;
}
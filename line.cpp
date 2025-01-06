#include "line.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the object out
ostream &Line::write(ostream &out) const {
  out << "      <g stroke=\"" << color << "\">";
  out << " <line ";
  out << "x1=\"" << cx1 << "\" ";
  out << "y1=\"" << cy1 << "\" ";
  out << "x2=\"" << cx2 << "\" ";
  out << "y2=\"" << cy2 << "\" ";
  out << "stroke-width=\"" << sWidth << "\" ";
  out << " />";
  out << " </g>" << endl;

  return out;
}

// operator>> equivalent to read the object contents
istream &Line::read(istream &in) {
  in >> cx1 >> cy1 >> cx2 >> cy2 >> sWidth >> color;
  return in;
}
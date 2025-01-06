#include "path.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// operator<< equivalent to write the object out
ostream &Path::write(ostream &out) const {
  out << "<path d=\"" << path << "\" fill=\"" << fill << "\" transform=\""
      << transform << "\"/>" << endl;
  return out;
}

// operator>> equivalent to read the object contents
istream &Path::read(istream &in) {
  // Read input
  getline(in, path);

  // Check if there is a '#' character in the string
  size_t posC1 = path.find('#');
  if (posC1 != string::npos) {
    fill = path.substr(posC1, 7);
    path.erase(posC1, 7);
  }

  // Read the transform value
  size_t posT1 = path.find("translate");
  if (posT1 != string::npos) {
    transform = path.substr(posT1);
    path.erase(posT1);
  }

  return in;
}
#include "BoolJsonHandler.h"
#include <cassert>

using namespace CesiumGltf;

void BoolJsonHandler::reset(IJsonHandler* pParent, bool* pBool) {
  JsonHandler::reset(pParent);
  this->_pBool = pBool;
}

IJsonHandler* BoolJsonHandler::Bool(bool b) {
  assert(this->_pBool);
  *this->_pBool = b;
  return this->parent();
}

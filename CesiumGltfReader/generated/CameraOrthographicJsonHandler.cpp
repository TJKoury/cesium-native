// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "CameraOrthographicJsonHandler.h"
#include "CesiumGltf/CameraOrthographic.h"

#include <cassert>
#include <string>

using namespace CesiumGltf;

void CameraOrthographicJsonHandler::reset(
    IJsonHandler* pParent,
    CameraOrthographic* pObject) {
  ExtensibleObjectJsonHandler::reset(pParent, pObject);
  this->_pObject = pObject;
}

CameraOrthographic* CameraOrthographicJsonHandler::getObject() {
  return this->_pObject;
}

void CameraOrthographicJsonHandler::reportWarning(
    const std::string& warning,
    std::vector<std::string>&& context) {
  if (this->getCurrentKey()) {
    context.emplace_back(std::string(".") + this->getCurrentKey());
  }
  this->parent()->reportWarning(warning, std::move(context));
}

IJsonHandler* CameraOrthographicJsonHandler::Key(
    const char* str,
    size_t /*length*/,
    bool /*copy*/) {
  assert(this->_pObject);
  return this->CameraOrthographicKey(str, *this->_pObject);
}

IJsonHandler* CameraOrthographicJsonHandler::CameraOrthographicKey(
    const char* str,
    CameraOrthographic& o) {
  using namespace std::string_literals;

  if ("xmag"s == str)
    return property("xmag", this->_xmag, o.xmag);
  if ("ymag"s == str)
    return property("ymag", this->_ymag, o.ymag);
  if ("zfar"s == str)
    return property("zfar", this->_zfar, o.zfar);
  if ("znear"s == str)
    return property("znear", this->_znear, o.znear);

  return this->ExtensibleObjectKey(str, *this->_pObject);
}

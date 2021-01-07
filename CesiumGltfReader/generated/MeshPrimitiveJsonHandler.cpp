// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "MeshPrimitiveJsonHandler.h"
#include "CesiumGltf/MeshPrimitive.h"
#include <cassert>
#include <string>

using namespace CesiumGltf;

void MeshPrimitiveJsonHandler::reset(IJsonHandler* pParent, MeshPrimitive* pObject) {
  ExtensibleObjectJsonHandler::reset(pParent);
  this->_pObject = pObject;
}

MeshPrimitive* MeshPrimitiveJsonHandler::getObject() {
  return this->_pObject;
}

void MeshPrimitiveJsonHandler::reportWarning(const std::string& warning, std::vector<std::string>&& context) {
  if (this->getCurrentKey()) {
    context.emplace_back(std::string(".") + this->getCurrentKey());
  }
  this->parent()->reportWarning(warning, std::move(context));
}

IJsonHandler* MeshPrimitiveJsonHandler::Key(const char* str, size_t /*length*/, bool /*copy*/) {
  using namespace std::string_literals;

  assert(this->_pObject);

  if ("attributes"s == str) return property("attributes", this->_attributes, this->_pObject->attributes);
  if ("indices"s == str) return property("indices", this->_indices, this->_pObject->indices);
  if ("material"s == str) return property("material", this->_material, this->_pObject->material);
  if ("mode"s == str) return property("mode", this->_mode, this->_pObject->mode);
  if ("targets"s == str) return property("targets", this->_targets, this->_pObject->targets);

  return this->ExtensibleObjectKey(str, *this->_pObject);
}
// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "TextureJsonHandler.h"
#include "CesiumGltf/Texture.h"

#include <cassert>
#include <string>

using namespace CesiumGltf;

void TextureJsonHandler::reset(IJsonHandler* pParent, Texture* pObject) {
  NamedObjectJsonHandler::reset(pParent, pObject);
  this->_pObject = pObject;
}

Texture* TextureJsonHandler::getObject() { return this->_pObject; }

void TextureJsonHandler::reportWarning(
    const std::string& warning,
    std::vector<std::string>&& context) {
  if (this->getCurrentKey()) {
    context.emplace_back(std::string(".") + this->getCurrentKey());
  }
  this->parent()->reportWarning(warning, std::move(context));
}

IJsonHandler*
TextureJsonHandler::Key(const char* str, size_t /*length*/, bool /*copy*/) {
  assert(this->_pObject);
  return this->TextureKey(str, *this->_pObject);
}

IJsonHandler* TextureJsonHandler::TextureKey(const char* str, Texture& o) {
  using namespace std::string_literals;

  if ("sampler"s == str)
    return property("sampler", this->_sampler, o.sampler);
  if ("source"s == str)
    return property("source", this->_source, o.source);

  return this->NamedObjectKey(str, *this->_pObject);
}

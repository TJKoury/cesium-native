// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "ArrayJsonHandler.h"
#include "IntegerJsonHandler.h"
#include "NamedObjectJsonHandler.h"

namespace CesiumGltf {
struct Scene;

class SceneJsonHandler : public NamedObjectJsonHandler {
public:
  void reset(IJsonHandler* pHandler, Scene* pObject);
  Scene* getObject();
  virtual void reportWarning(
      const std::string& warning,
      std::vector<std::string>&& context = std::vector<std::string>()) override;

  virtual IJsonHandler* Key(const char* str, size_t length, bool copy) override;

protected:
  IJsonHandler* SceneKey(const char* str, Scene& o);

private:
  Scene* _pObject = nullptr;
  ArrayJsonHandler<int32_t, IntegerJsonHandler<int32_t>> _nodes;
};
} // namespace CesiumGltf

// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "ArrayJsonHandler.h"
#include "BoolJsonHandler.h"
#include "CesiumGltf/Material.h"
#include "DoubleJsonHandler.h"
#include "MaterialNormalTextureInfoJsonHandler.h"
#include "MaterialOcclusionTextureInfoJsonHandler.h"
#include "MaterialPBRMetallicRoughnessJsonHandler.h"
#include "NamedObjectJsonHandler.h"
#include "TextureInfoJsonHandler.h"

namespace CesiumGltf {
struct Material;

class MaterialJsonHandler : public NamedObjectJsonHandler {
public:
  void reset(IJsonHandler* pHandler, Material* pObject);
  Material* getObject();
  virtual void reportWarning(
      const std::string& warning,
      std::vector<std::string>&& context = std::vector<std::string>()) override;

  virtual IJsonHandler* Key(const char* str, size_t length, bool copy) override;

protected:
  IJsonHandler* MaterialKey(const char* str, Material& o);

private:
  class AlphaModeJsonHandler : public JsonHandler {
  public:
    void reset(IJsonHandler* pParent, Material::AlphaMode* pEnum);
    virtual IJsonHandler*
    String(const char* str, size_t length, bool copy) override;

  private:
    Material::AlphaMode* _pEnum = nullptr;
  };

  Material* _pObject = nullptr;
  MaterialPBRMetallicRoughnessJsonHandler _pbrMetallicRoughness;
  MaterialNormalTextureInfoJsonHandler _normalTexture;
  MaterialOcclusionTextureInfoJsonHandler _occlusionTexture;
  TextureInfoJsonHandler _emissiveTexture;
  ArrayJsonHandler<double, DoubleJsonHandler> _emissiveFactor;
  AlphaModeJsonHandler _alphaMode;
  DoubleJsonHandler _alphaCutoff;
  BoolJsonHandler _doubleSided;
};
} // namespace CesiumGltf

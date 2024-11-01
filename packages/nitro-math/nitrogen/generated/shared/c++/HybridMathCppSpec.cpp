///
/// HybridMathCppSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridMathCppSpec.hpp"

namespace margelo::nitro::nitromath {

  void HybridMathCppSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridMethod("add", &HybridMathCppSpec::add);
    });
  }

} // namespace margelo::nitro::nitromath

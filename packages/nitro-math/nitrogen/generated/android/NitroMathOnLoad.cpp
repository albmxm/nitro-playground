///
/// NitroMathOnLoad.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroMathOnLoad.hpp"

#include <jni.h>
#include <fbjni/fbjni.h>
#include <NitroModules/HybridObjectRegistry.hpp>

#include "JHybridMathSpec.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include "HybridMathCpp.hpp"

namespace margelo::nitro::nitromath {

int initialize(JavaVM* vm) {
  using namespace margelo::nitro;
  using namespace margelo::nitro::nitromath;
  using namespace facebook;

  return facebook::jni::initialize(vm, [] {
    // Register native JNI methods
    margelo::nitro::nitromath::JHybridMathSpec::registerNatives();

    // Register Nitro Hybrid Objects
    HybridObjectRegistry::registerHybridObjectConstructor(
      "Math",
      []() -> std::shared_ptr<HybridObject> {
        static auto javaClass = jni::findClassStatic("com/margelo/nitro/nitromath/HybridMath");
        static auto defaultConstructor = javaClass->getConstructor<JHybridMathSpec::javaobject()>();
    
        auto instance = javaClass->newObject(defaultConstructor);
    #ifdef NITRO_DEBUG
        if (instance == nullptr) [[unlikely]] {
          throw std::runtime_error("Failed to create an instance of \"JHybridMathSpec\" - the constructor returned null!");
        }
    #endif
        auto globalRef = jni::make_global(instance);
        return JNISharedPtr::make_shared_from_jni<JHybridMathSpec>(globalRef);
      }
    );
    HybridObjectRegistry::registerHybridObjectConstructor(
      "MathCpp",
      []() -> std::shared_ptr<HybridObject> {
        static_assert(std::is_default_constructible_v<HybridMathCpp>,
                      "The HybridObject \"HybridMathCpp\" is not default-constructible! "
                      "Create a public constructor that takes zero arguments to be able to autolink this HybridObject.");
        return std::make_shared<HybridMathCpp>();
      }
    );
  });
}

} // namespace margelo::nitro::nitromath

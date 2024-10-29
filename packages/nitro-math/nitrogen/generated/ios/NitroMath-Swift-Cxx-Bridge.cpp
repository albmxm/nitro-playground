///
/// NitroMath-Swift-Cxx-Bridge.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroMath-Swift-Cxx-Bridge.hpp"

// Include C++ implementation defined types
#include "HybridMathSpecSwift.hpp"
#include "NitroMath-Swift-Cxx-Umbrella.hpp"
#include <NitroModules/HybridContext.hpp>

namespace margelo::nitro::nitromath::bridge::swift {

  // pragma MARK: std::shared_ptr<margelo::nitro::nitromath::HybridMathSpec>
  std::shared_ptr<margelo::nitro::nitromath::HybridMathSpec> create_std__shared_ptr_margelo__nitro__nitromath__HybridMathSpec_(void* NONNULL swiftUnsafePointer) {
    NitroMath::HybridMathSpecCxx swiftPart = NitroMath::HybridMathSpecCxxUnsafe::fromUnsafe(swiftUnsafePointer);
    return HybridContext::getOrCreate<margelo::nitro::nitromath::HybridMathSpecSwift>(swiftPart);
  }
  void* NONNULL get_std__shared_ptr_margelo__nitro__nitromath__HybridMathSpec_(std__shared_ptr_margelo__nitro__nitromath__HybridMathSpec_ cppType) {
    std::shared_ptr<margelo::nitro::nitromath::HybridMathSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::nitromath::HybridMathSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridMathSpec\" is not implemented in Swift!");
    }
  #endif
    NitroMath::HybridMathSpecCxx swiftPart = swiftWrapper->getSwiftPart();
    return NitroMath::HybridMathSpecCxxUnsafe::toUnsafe(swiftPart);
  }

} // namespace margelo::nitro::nitromath::bridge::swift
///
/// NitroMath-Swift-Cxx-Bridge.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declarations of C++ defined types
// Forward declaration of `HybridMathSpec` to properly resolve imports.
namespace margelo::nitro::nitromath { class HybridMathSpec; }

// Forward declarations of Swift defined types
// Forward declaration of `HybridMathSpecCxx` to properly resolve imports.
namespace NitroMath { class HybridMathSpecCxx; }

// Include C++ defined types
#include "HybridMathSpec.hpp"
#include <memory>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::nitromath::bridge::swift {

  // pragma MARK: std::shared_ptr<margelo::nitro::nitromath::HybridMathSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::nitromath::HybridMathSpec>`.
   */
  using std__shared_ptr_margelo__nitro__nitromath__HybridMathSpec_ = std::shared_ptr<margelo::nitro::nitromath::HybridMathSpec>;
  std::shared_ptr<margelo::nitro::nitromath::HybridMathSpec> create_std__shared_ptr_margelo__nitro__nitromath__HybridMathSpec_(void* NONNULL swiftUnsafePointer);
  void* NONNULL get_std__shared_ptr_margelo__nitro__nitromath__HybridMathSpec_(std__shared_ptr_margelo__nitro__nitromath__HybridMathSpec_ cppType);

} // namespace margelo::nitro::nitromath::bridge::swift
#pragma once

#include "HybridMathCppSpec.hpp"

namespace margelo::nitro::nitromath
{
  class HybridMathCpp : public HybridMathCppSpec
  {
  public:
    HybridMathCpp() : HybridObject(TAG) {}
    ~HybridMathCpp();
    double add(double a, double b) override;
  };
}
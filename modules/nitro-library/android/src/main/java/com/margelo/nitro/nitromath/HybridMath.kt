package com.margelo.nitro.nitromath

class HybridMath : HybridMathSpec() {
  override val memorySize: Long
    get() = 0L

  override fun add(a: Double, b: Double): Double {
    return a + b
  }
}

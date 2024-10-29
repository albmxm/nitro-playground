///
/// HybridMathSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the Math HybridObject.
 * Implement this protocol to create Swift-based instances of Math.
 *
 * When implementing this protocol, make sure to initialize `hybridContext` - example:
 * ```
 * public class HybridMath : HybridMathSpec {
 *   // Initialize HybridContext
 *   var hybridContext = margelo.nitro.HybridContext()
 *
 *   // Return size of the instance to inform JS GC about memory pressure
 *   var memorySize: Int {
 *     return getSizeOf(self)
 *   }
 *
 *   // ...
 * }
 * ```
 */
public protocol HybridMathSpec: AnyObject, HybridObjectSpec {
  // Properties
  

  // Methods
  func add(a: Double, b: Double) throws -> Double
}
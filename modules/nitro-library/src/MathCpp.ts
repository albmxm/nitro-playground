import { type HybridObject } from 'react-native-nitro-modules'

export interface MathCpp extends HybridObject<{ android: 'c++'; ios: 'c++' }> {
  add(a: number, b: number): number
}

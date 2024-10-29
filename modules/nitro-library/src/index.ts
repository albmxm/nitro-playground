import { NitroModules } from 'react-native-nitro-modules'
import type { Math as MathType } from './Math.nitro'
// import type { MathCpp as MathCppType } from './MathCpp.nitro'

// TODO: Export all HybridObjects here
// export * from './Math.nitro'
// export * from './MathCpp.nitro'

export const Math = NitroModules.createHybridObject<MathType>('Math')
// export const MathCpp = NitroModules.createHybridObject<MathCppType>('MathCpp')

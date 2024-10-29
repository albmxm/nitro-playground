import { NitroModules } from 'react-native-nitro-modules'
import { type Math } from './Math.nitro'

// TODO: Export all HybridObjects here
export * from './Math.nitro'

export const MathConstructor = NitroModules.createHybridObject<Math>('Math')

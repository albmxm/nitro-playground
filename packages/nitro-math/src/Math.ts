import { NitroModules } from 'react-native-nitro-modules'
import type { Math as MathType } from './Math.nitro'

export const Math = NitroModules.createHybridObject<MathType>('Math')

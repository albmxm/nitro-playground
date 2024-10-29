import { NitroModules } from 'react-native-nitro-modules'
import type { MathCpp as MathCppType } from './MathCpp.nitro'

export const MathCpp = NitroModules.createHybridObject<MathCppType>('MathCpp')

#include <jni.h>
#include "NitroMathOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *)
{
  return margelo::nitro::nitromath::initialize(vm);
}

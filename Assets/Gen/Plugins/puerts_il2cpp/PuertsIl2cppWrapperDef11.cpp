// Auto Gen

#include "il2cpp-api.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-object-internals.h"
#include "vm/InternalCalls.h"
#include "vm/Object.h"
#include "vm/Array.h"
#include "vm/Runtime.h"
#include "vm/Reflection.h"
#include "vm/MetadataCache.h"
#include "vm/Field.h"
#include "vm/GenericClass.h"
#include "vm/Thread.h"
#include "vm/Method.h"
#include "vm/Parameter.h"
#include "vm/Image.h"
#include "utils/StringUtils.h"
#include "gc/WriteBarrier.h"
#include "pesapi.h"
#include "TDataTrans.h"
#include "PuertsValueType.h"
#if defined(__EMSCRIPTEN__)
#include "pesapi_webgl.h"
using namespace pesapi::webglimpl;
#endif

namespace puerts
{


// Void Greater(UInt64, UInt64, System.String, System.Object[]) declare in NUnit.Framework.Assert
bool w_vu8u8sVO(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkJSArgument, WrapData* wrapData) {
    // PLog("Running w_vu8u8sVO");
    
    auto TIp2 = wrapData->TypeInfos[0];
    auto TIp3 = wrapData->TypeInfos[1];

    int js_args_len = apis->get_args_len(info);
    
    pesapi_value _sv0 = apis->get_arg(info, 0);
    pesapi_value _sv1 = apis->get_arg(info, 1);
    pesapi_value _sv2 = apis->get_arg(info, 2);
    pesapi_value _sv3 = apis->get_arg(info, 3);

    if (checkJSArgument) {
        if (js_args_len < 3) return false;
        if (!converter::Converter<uint64_t>::accept(apis, env, _sv0)) return false;
        if (!converter::Converter<uint64_t>::accept(apis, env, _sv1)) return false;
        if (!converter::Converter<Il2CppString*>::accept(apis, env, _sv2)) return false;
    }
    
    // JSValToCSVal P any
    uint64_t p0 = converter::Converter<uint64_t>::toCpp(apis, env, _sv0);
    // JSValToCSVal P any
    uint64_t p1 = converter::Converter<uint64_t>::toCpp(apis, env, _sv1);
    // JSValToCSVal s
    Il2CppString* p2 = converter::Converter<Il2CppString*>::toCpp(apis, env, _sv2);
    // JSValToCSVal ref params
    Il2CppArray* p3 = Params<void*>::PackRef(apis, env, info, TIp3, js_args_len, 3);
                

    typedef void (*FuncToCall)(uint64_t p0, uint64_t p1, Il2CppString* p2, Il2CppArray* p3, const void* method);
    ((FuncToCall)methodPointer)( p0, p1, p2, p3,  method);

    
    return true;
}

}


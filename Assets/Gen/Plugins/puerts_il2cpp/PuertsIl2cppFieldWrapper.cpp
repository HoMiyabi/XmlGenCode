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


namespace puerts
{

static void ifg_O(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_O");

    pesapi_env env = apis->get_env(info);
    Il2CppObject* ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, CSRefToJsValue(apis, env, TIret, ret));
}

static void ifs_O(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_O");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal o/O
    Il2CppObject* p = JsValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_O_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_O_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_O_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_O_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_O_* pp = DataTransfer::GetPointer<S_O_>(apis, env, apis->get_arg(info, 0));
    S_O_ p = pp ? *pp : S_O_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_Op_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_Op_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_Op_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_Op_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_Op_* pp = DataTransfer::GetPointer<S_Op_>(apis, env, apis->get_arg(info, 0));
    S_Op_ p = pp ? *pp : S_Op_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_Oi4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_Oi4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_Oi4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_Oi4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_Oi4i4__* pp = DataTransfer::GetPointer<S_S_Oi4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_Oi4i4__ p = pp ? *pp : S_S_Oi4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_S_r4r4r4r4__S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_S_r4r4r4r4__S_r4r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_S_r4r4r4r4__S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_S_r4r4r4r4__S_r4r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_S_r4r4r4r4__S_r4r4r4__* pp = DataTransfer::GetPointer<S_S_S_r4r4r4r4__S_r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_S_r4r4r4r4__S_r4r4r4__ p = pp ? *pp : S_S_S_r4r4r4r4__S_r4r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__* pp = DataTransfer::GetPointer<S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__ p = pp ? *pp : S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_i4i4_S_i4i4_S_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_i4i4_S_i4i4_S_i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_i4i4_S_i4i4_S_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_i4i4_S_i4i4_S_i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_i4i4_S_i4i4_S_i4i4__* pp = DataTransfer::GetPointer<S_S_i4i4_S_i4i4_S_i4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4_S_i4i4_S_i4i4__ p = pp ? *pp : S_S_i4i4_S_i4i4_S_i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_i4i4_S_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_i4i4_S_i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_i4i4_S_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_i4i4_S_i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_i4i4_S_i4i4__* pp = DataTransfer::GetPointer<S_S_i4i4_S_i4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4_S_i4i4__ p = pp ? *pp : S_S_i4i4_S_i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__* pp = DataTransfer::GetPointer<S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__ p = pp ? *pp : S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_i4i4i4_S_i4i4i4_S_i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_i4i4i4_S_i4i4i4_S_i4i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_i4i4i4_S_i4i4i4_S_i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_i4i4i4_S_i4i4i4_S_i4i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_i4i4i4_S_i4i4i4_S_i4i4i4__* pp = DataTransfer::GetPointer<S_S_i4i4i4_S_i4i4i4_S_i4i4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4i4_S_i4i4i4_S_i4i4i4__ p = pp ? *pp : S_S_i4i4i4_S_i4i4i4_S_i4i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_i4i4i4_S_i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_i4i4i4_S_i4i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_i4i4i4_S_i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_i4i4i4_S_i4i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_i4i4i4_S_i4i4i4__* pp = DataTransfer::GetPointer<S_S_i4i4i4_S_i4i4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4i4_S_i4i4i4__ p = pp ? *pp : S_S_i4i4i4_S_i4i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__* pp = DataTransfer::GetPointer<S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__ p = pp ? *pp : S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__* pp = DataTransfer::GetPointer<S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__ p = pp ? *pp : S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_i4i4i4i4_S_i4i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_i4i4i4i4_S_i4i4i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_i4i4i4i4_S_i4i4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_i4i4i4i4_S_i4i4i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_i4i4i4i4_S_i4i4i4i4__* pp = DataTransfer::GetPointer<S_S_i4i4i4i4_S_i4i4i4i4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4i4i4_S_i4i4i4i4__ p = pp ? *pp : S_S_i4i4i4i4_S_i4i4i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___* pp = DataTransfer::GetPointer<S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___>(apis, env, apis->get_arg(info, 0));
    S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___ p = pp ? *pp : S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__ p = pp ? *pp : S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4_S_r4r4_S_r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4_S_r4r4_S_r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4_S_r4r4_S_r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4_S_r4r4_S_r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4_S_r4r4_S_r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4_S_r4r4_S_r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4_S_r4r4_S_r4r4__ p = pp ? *pp : S_S_r4r4_S_r4r4_S_r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4_S_r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4_S_r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4_S_r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4_S_r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4_S_r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4_S_r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4_S_r4r4__ p = pp ? *pp : S_S_r4r4_S_r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__ p = pp ? *pp : S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4_S_r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4__ p = pp ? *pp : S_S_r4r4r4_S_r4r4r4_S_r4r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__ p = pp ? *pp : S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4r4_S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4r4_S_r4r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4r4_S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4r4_S_r4r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4r4_S_r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4r4__ p = pp ? *pp : S_S_r4r4r4_S_r4r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_* pp = DataTransfer::GetPointer<S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_ p = pp ? *pp : S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__ p = pp ? *pp : S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__ p = pp ? *pp : S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4r4r4_S_r4r4r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4r4r4_S_r4r4r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4r4r4_S_r4r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4r4_S_r4r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4r4_S_r4r4r4r4__ p = pp ? *pp : S_S_r4r4r4r4_S_r4r4r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r4r4r4r4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r4r4r4r4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r4r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4r4__ p = pp ? *pp : S_S_r4r4r4r4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__* pp = DataTransfer::GetPointer<S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__>(apis, env, apis->get_arg(info, 0));
    S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__ p = pp ? *pp : S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r8r8_S_r8r8_S_r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r8r8_S_r8r8_S_r8r8__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r8r8_S_r8r8_S_r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r8r8_S_r8r8_S_r8r8__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r8r8_S_r8r8_S_r8r8__* pp = DataTransfer::GetPointer<S_S_r8r8_S_r8r8_S_r8r8__>(apis, env, apis->get_arg(info, 0));
    S_S_r8r8_S_r8r8_S_r8r8__ p = pp ? *pp : S_S_r8r8_S_r8r8_S_r8r8__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r8r8_S_r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r8r8_S_r8r8__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r8r8_S_r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r8r8_S_r8r8__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r8r8_S_r8r8__* pp = DataTransfer::GetPointer<S_S_r8r8_S_r8r8__>(apis, env, apis->get_arg(info, 0));
    S_S_r8r8_S_r8r8__ p = pp ? *pp : S_S_r8r8_S_r8r8__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__* pp = DataTransfer::GetPointer<S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__>(apis, env, apis->get_arg(info, 0));
    S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__ p = pp ? *pp : S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r8r8r8_S_r8r8r8_S_r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r8r8r8_S_r8r8r8_S_r8r8r8__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r8r8r8_S_r8r8r8_S_r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r8r8r8_S_r8r8r8_S_r8r8r8__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r8r8r8_S_r8r8r8_S_r8r8r8__* pp = DataTransfer::GetPointer<S_S_r8r8r8_S_r8r8r8_S_r8r8r8__>(apis, env, apis->get_arg(info, 0));
    S_S_r8r8r8_S_r8r8r8_S_r8r8r8__ p = pp ? *pp : S_S_r8r8r8_S_r8r8r8_S_r8r8r8__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r8r8r8_S_r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r8r8r8_S_r8r8r8__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r8r8r8_S_r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r8r8r8_S_r8r8r8__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r8r8r8_S_r8r8r8__* pp = DataTransfer::GetPointer<S_S_r8r8r8_S_r8r8r8__>(apis, env, apis->get_arg(info, 0));
    S_S_r8r8r8_S_r8r8r8__ p = pp ? *pp : S_S_r8r8r8_S_r8r8r8__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__* pp = DataTransfer::GetPointer<S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__>(apis, env, apis->get_arg(info, 0));
    S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__ p = pp ? *pp : S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__* pp = DataTransfer::GetPointer<S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__>(apis, env, apis->get_arg(info, 0));
    S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__ p = pp ? *pp : S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_r8r8r8r8_S_r8r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_r8r8r8r8_S_r8r8r8r8__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_r8r8r8r8_S_r8r8r8r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_r8r8r8r8_S_r8r8r8r8__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_r8r8r8r8_S_r8r8r8r8__* pp = DataTransfer::GetPointer<S_S_r8r8r8r8_S_r8r8r8r8__>(apis, env, apis->get_arg(info, 0));
    S_S_r8r8r8r8_S_r8r8r8r8__ p = pp ? *pp : S_S_r8r8r8r8_S_r8r8r8r8__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u2_S_u2_S_u2_S_u2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u2_S_u2_S_u2_S_u2__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u2_S_u2_S_u2_S_u2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u2_S_u2_S_u2_S_u2__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u2_S_u2_S_u2_S_u2__* pp = DataTransfer::GetPointer<S_S_u2_S_u2_S_u2_S_u2__>(apis, env, apis->get_arg(info, 0));
    S_S_u2_S_u2_S_u2_S_u2__ p = pp ? *pp : S_S_u2_S_u2_S_u2_S_u2__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u2_S_u2_S_u2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u2_S_u2_S_u2__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u2_S_u2_S_u2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u2_S_u2_S_u2__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u2_S_u2_S_u2__* pp = DataTransfer::GetPointer<S_S_u2_S_u2_S_u2__>(apis, env, apis->get_arg(info, 0));
    S_S_u2_S_u2_S_u2__ p = pp ? *pp : S_S_u2_S_u2_S_u2__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u2_S_u2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u2_S_u2__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u2_S_u2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u2_S_u2__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u2_S_u2__* pp = DataTransfer::GetPointer<S_S_u2_S_u2__>(apis, env, apis->get_arg(info, 0));
    S_S_u2_S_u2__ p = pp ? *pp : S_S_u2_S_u2__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__* pp = DataTransfer::GetPointer<S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__>(apis, env, apis->get_arg(info, 0));
    S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__ p = pp ? *pp : S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u4u4_S_u4u4_S_u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u4u4_S_u4u4_S_u4u4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u4u4_S_u4u4_S_u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u4u4_S_u4u4_S_u4u4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u4u4_S_u4u4_S_u4u4__* pp = DataTransfer::GetPointer<S_S_u4u4_S_u4u4_S_u4u4__>(apis, env, apis->get_arg(info, 0));
    S_S_u4u4_S_u4u4_S_u4u4__ p = pp ? *pp : S_S_u4u4_S_u4u4_S_u4u4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u4u4_S_u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u4u4_S_u4u4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u4u4_S_u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u4u4_S_u4u4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u4u4_S_u4u4__* pp = DataTransfer::GetPointer<S_S_u4u4_S_u4u4__>(apis, env, apis->get_arg(info, 0));
    S_S_u4u4_S_u4u4__ p = pp ? *pp : S_S_u4u4_S_u4u4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__* pp = DataTransfer::GetPointer<S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__>(apis, env, apis->get_arg(info, 0));
    S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__ p = pp ? *pp : S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u4u4u4_S_u4u4u4_S_u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u4u4u4_S_u4u4u4_S_u4u4u4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u4u4u4_S_u4u4u4_S_u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u4u4u4_S_u4u4u4_S_u4u4u4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u4u4u4_S_u4u4u4_S_u4u4u4__* pp = DataTransfer::GetPointer<S_S_u4u4u4_S_u4u4u4_S_u4u4u4__>(apis, env, apis->get_arg(info, 0));
    S_S_u4u4u4_S_u4u4u4_S_u4u4u4__ p = pp ? *pp : S_S_u4u4u4_S_u4u4u4_S_u4u4u4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u4u4u4_S_u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u4u4u4_S_u4u4u4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u4u4u4_S_u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u4u4u4_S_u4u4u4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u4u4u4_S_u4u4u4__* pp = DataTransfer::GetPointer<S_S_u4u4u4_S_u4u4u4__>(apis, env, apis->get_arg(info, 0));
    S_S_u4u4u4_S_u4u4u4__ p = pp ? *pp : S_S_u4u4u4_S_u4u4u4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__* pp = DataTransfer::GetPointer<S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__>(apis, env, apis->get_arg(info, 0));
    S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__ p = pp ? *pp : S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__* pp = DataTransfer::GetPointer<S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__>(apis, env, apis->get_arg(info, 0));
    S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__ p = pp ? *pp : S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u4u4u4u4_S_u4u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u4u4u4u4_S_u4u4u4u4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u4u4u4u4_S_u4u4u4u4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u4u4u4u4_S_u4u4u4u4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u4u4u4u4_S_u4u4u4u4__* pp = DataTransfer::GetPointer<S_S_u4u4u4u4_S_u4u4u4u4__>(apis, env, apis->get_arg(info, 0));
    S_S_u4u4u4u4_S_u4u4u4u4__ p = pp ? *pp : S_S_u4u4u4u4_S_u4u4u4u4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_S_u8_i2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_S_u8_i2_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_S_u8_i2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_S_u8_i2_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_S_u8_i2_* pp = DataTransfer::GetPointer<S_S_u8_i2_>(apis, env, apis->get_arg(info, 0));
    S_S_u8_i2_ p = pp ? *pp : S_S_u8_i2_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S__* pp = DataTransfer::GetPointer<S__>(apis, env, apis->get_arg(info, 0));
    S__ p = pp ? *pp : S__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_bi2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_bi2_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_bi2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_bi2_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_bi2_* pp = DataTransfer::GetPointer<S_bi2_>(apis, env, apis->get_arg(info, 0));
    S_bi2_ p = pp ? *pp : S_bi2_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_bi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_bi4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_bi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_bi4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_bi4_* pp = DataTransfer::GetPointer<S_bi4_>(apis, env, apis->get_arg(info, 0));
    S_bi4_ p = pp ? *pp : S_bi4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_bi4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_bi4i4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_bi4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_bi4i4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_bi4i4_* pp = DataTransfer::GetPointer<S_bi4i4_>(apis, env, apis->get_arg(info, 0));
    S_bi4i4_ p = pp ? *pp : S_bi4i4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_bi8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_bi8_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_bi8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_bi8_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_bi8_* pp = DataTransfer::GetPointer<S_bi8_>(apis, env, apis->get_arg(info, 0));
    S_bi8_ p = pp ? *pp : S_bi8_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_br4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_br4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_br4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_br4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_br4_* pp = DataTransfer::GetPointer<S_br4_>(apis, env, apis->get_arg(info, 0));
    S_br4_ p = pp ? *pp : S_br4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_br8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_br8_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_br8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_br8_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_br8_* pp = DataTransfer::GetPointer<S_br8_>(apis, env, apis->get_arg(info, 0));
    S_br8_ p = pp ? *pp : S_br8_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_bu1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_bu1_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_bu1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_bu1_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_bu1_* pp = DataTransfer::GetPointer<S_bu1_>(apis, env, apis->get_arg(info, 0));
    S_bu1_ p = pp ? *pp : S_bu1_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4S_i4i4i4pi4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4S_i4i4i4pi4i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4S_i4i4i4pi4i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4S_i4i4i4pi4i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4S_i4i4i4pi4i4i4__* pp = DataTransfer::GetPointer<S_i4S_i4i4i4pi4i4i4__>(apis, env, apis->get_arg(info, 0));
    S_i4S_i4i4i4pi4i4i4__ p = pp ? *pp : S_i4S_i4i4i4pi4i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4_* pp = DataTransfer::GetPointer<S_i4_>(apis, env, apis->get_arg(info, 0));
    S_i4_ p = pp ? *pp : S_i4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4i2i2u1u1u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4i2i2u1u1u1u1u1u1u1u1_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4i2i2u1u1u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4i2i2u1u1u1u1u1u1u1u1_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4i2i2u1u1u1u1u1u1u1u1_* pp = DataTransfer::GetPointer<S_i4i2i2u1u1u1u1u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_i4i2i2u1u1u1u1u1u1u1u1_ p = pp ? *pp : S_i4i2i2u1u1u1u1u1u1u1u1_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4i4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4i4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4i4_* pp = DataTransfer::GetPointer<S_i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4_ p = pp ? *pp : S_i4i4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4i4bi4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4i4bi4i4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4i4bi4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4i4bi4i4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4i4bi4i4_* pp = DataTransfer::GetPointer<S_i4i4bi4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4bi4i4_ p = pp ? *pp : S_i4i4bi4i4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4i4i4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4i4i4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4i4i4_* pp = DataTransfer::GetPointer<S_i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4_ p = pp ? *pp : S_i4i4i4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4i4i4i4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4i4i4i4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4i4i4i4_* pp = DataTransfer::GetPointer<S_i4i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4i4_ p = pp ? *pp : S_i4i4i4i4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4i4i4i4u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4i4i4i4u8_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4i4i4i4u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4i4i4i4u8_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4i4i4i4u8_* pp = DataTransfer::GetPointer<S_i4i4i4i4u8_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4i4u8_ p = pp ? *pp : S_i4i4i4i4u8_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4i4r4u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4i4r4u1u1u1u1_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4i4r4u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4i4r4u1u1u1u1_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4i4r4u1u1u1u1_* pp = DataTransfer::GetPointer<S_i4i4r4u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_i4i4r4u1u1u1u1_ p = pp ? *pp : S_i4i4r4u1u1u1u1_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4i4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4i4u4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4i4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4i4u4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4i4u4_* pp = DataTransfer::GetPointer<S_i4i4u4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4u4_ p = pp ? *pp : S_i4i4u4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i4o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i4o_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i4o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i4o_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i4o_* pp = DataTransfer::GetPointer<S_i4o_>(apis, env, apis->get_arg(info, 0));
    S_i4o_ p = pp ? *pp : S_i4o_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i8S_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i8S_i4i4__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i8S_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i8S_i4i4__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i8S_i4i4__* pp = DataTransfer::GetPointer<S_i8S_i4i4__>(apis, env, apis->get_arg(info, 0));
    S_i8S_i4i4__ p = pp ? *pp : S_i8S_i4i4__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i8_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i8_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i8_* pp = DataTransfer::GetPointer<S_i8_>(apis, env, apis->get_arg(info, 0));
    S_i8_ p = pp ? *pp : S_i8_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i8i8i8i8i8i8i8i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i8i8i8i8i8i8i8i4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i8i8i8i8i8i8i8i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i8i8i8i8i8i8i8i4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i8i8i8i8i8i8i8i4_* pp = DataTransfer::GetPointer<S_i8i8i8i8i8i8i8i4_>(apis, env, apis->get_arg(info, 0));
    S_i8i8i8i8i8i8i8i4_ p = pp ? *pp : S_i8i8i8i8i8i8i8i4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_i8s_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_i8s_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_i8s_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_i8s_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_i8s_* pp = DataTransfer::GetPointer<S_i8s_>(apis, env, apis->get_arg(info, 0));
    S_i8s_ p = pp ? *pp : S_i8s_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_oO_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_oO_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_oO_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_oO_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_oO_* pp = DataTransfer::GetPointer<S_oO_>(apis, env, apis->get_arg(info, 0));
    S_oO_ p = pp ? *pp : S_oO_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_o_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_o_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_o_* pp = DataTransfer::GetPointer<S_o_>(apis, env, apis->get_arg(info, 0));
    S_o_ p = pp ? *pp : S_o_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_oi2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_oi2_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_oi2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_oi2_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_oi2_* pp = DataTransfer::GetPointer<S_oi2_>(apis, env, apis->get_arg(info, 0));
    S_oi2_ p = pp ? *pp : S_oi2_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_ooS_r4r4_sssbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_ooS_r4r4_sssbb_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_ooS_r4r4_sssbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_ooS_r4r4_sssbb_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_ooS_r4r4_sssbb_* pp = DataTransfer::GetPointer<S_ooS_r4r4_sssbb_>(apis, env, apis->get_arg(info, 0));
    S_ooS_r4r4_sssbb_ p = pp ? *pp : S_ooS_r4r4_sssbb_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_oooo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_oooo_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_oooo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_oooo_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_oooo_* pp = DataTransfer::GetPointer<S_oooo_>(apis, env, apis->get_arg(info, 0));
    S_oooo_ p = pp ? *pp : S_oooo_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_ou8oo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_ou8oo_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_ou8oo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_ou8oo_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_ou8oo_* pp = DataTransfer::GetPointer<S_ou8oo_>(apis, env, apis->get_arg(info, 0));
    S_ou8oo_ p = pp ? *pp : S_ou8oo_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_p_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_p_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_p_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_p_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_p_* pp = DataTransfer::GetPointer<S_p_>(apis, env, apis->get_arg(info, 0));
    S_p_ p = pp ? *pp : S_p_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_pu4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_pu4u4u4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_pu4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_pu4u4u4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_pu4u4u4_* pp = DataTransfer::GetPointer<S_pu4u4u4_>(apis, env, apis->get_arg(info, 0));
    S_pu4u4u4_ p = pp ? *pp : S_pu4u4u4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r4r4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r4r4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_r4r4_* pp = DataTransfer::GetPointer<S_r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4_ p = pp ? *pp : S_r4r4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r4r4r4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r4r4r4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4_ p = pp ? *pp : S_r4r4r4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r4r4r4r4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r4r4r4r4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_r4r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4r4_ p = pp ? *pp : S_r4r4r4r4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r8r8_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r8r8_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_r8r8_* pp = DataTransfer::GetPointer<S_r8r8_>(apis, env, apis->get_arg(info, 0));
    S_r8r8_ p = pp ? *pp : S_r8r8_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r8r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r8r8r8_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_r8r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r8r8r8_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_r8r8r8_* pp = DataTransfer::GetPointer<S_r8r8r8_>(apis, env, apis->get_arg(info, 0));
    S_r8r8r8_ p = pp ? *pp : S_r8r8r8_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_r8r8r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_r8r8r8r8_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_r8r8r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_r8r8r8r8_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_r8r8r8r8_* pp = DataTransfer::GetPointer<S_r8r8r8r8_>(apis, env, apis->get_arg(info, 0));
    S_r8r8r8r8_ p = pp ? *pp : S_r8r8r8r8_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_s_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_s_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_s_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_s_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_s_* pp = DataTransfer::GetPointer<S_s_>(apis, env, apis->get_arg(info, 0));
    S_s_ p = pp ? *pp : S_s_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_si4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_si4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_si4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_si4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_si4_* pp = DataTransfer::GetPointer<S_si4_>(apis, env, apis->get_arg(info, 0));
    S_si4_ p = pp ? *pp : S_si4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_si4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_si4i4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_si4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_si4i4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_si4i4_* pp = DataTransfer::GetPointer<S_si4i4_>(apis, env, apis->get_arg(info, 0));
    S_si4i4_ p = pp ? *pp : S_si4i4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_soi4i4b_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_soi4i4b_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_soi4i4b_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_soi4i4b_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_soi4i4b_* pp = DataTransfer::GetPointer<S_soi4i4b_>(apis, env, apis->get_arg(info, 0));
    S_soi4i4b_ p = pp ? *pp : S_soi4i4b_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u1_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u1_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u1_* pp = DataTransfer::GetPointer<S_u1_>(apis, env, apis->get_arg(info, 0));
    S_u1_ p = pp ? *pp : S_u1_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u1o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u1o_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u1o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u1o_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u1o_* pp = DataTransfer::GetPointer<S_u1o_>(apis, env, apis->get_arg(info, 0));
    S_u1o_ p = pp ? *pp : S_u1o_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__* pp = DataTransfer::GetPointer<S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__>(apis, env, apis->get_arg(info, 0));
    S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__ p = pp ? *pp : S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u1u1u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u1u1u1u1u1u1u1u1_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u1u1u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u1u1u1u1u1u1u1u1_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u1u1u1u1u1u1u1u1_* pp = DataTransfer::GetPointer<S_u1u1u1u1u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_u1u1u1u1u1u1u1u1_ p = pp ? *pp : S_u1u1u1u1u1u1u1u1_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u1u1u1u1u4u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u1u1u1u1u4u4u4u4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u1u1u1u1u4u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u1u1u1u1u4u4u4u4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u1u1u1u1u4u4u4u4_* pp = DataTransfer::GetPointer<S_u1u1u1u1u4u4u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u1u1u1u1u4u4u4u4_ p = pp ? *pp : S_u1u1u1u1u4u4u4u4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u2_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u2_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u2_* pp = DataTransfer::GetPointer<S_u2_>(apis, env, apis->get_arg(info, 0));
    S_u2_ p = pp ? *pp : S_u2_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u4_* pp = DataTransfer::GetPointer<S_u4_>(apis, env, apis->get_arg(info, 0));
    S_u4_ p = pp ? *pp : S_u4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u4u4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u4u4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u4u4_* pp = DataTransfer::GetPointer<S_u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4_ p = pp ? *pp : S_u4u4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u4u4u4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u4u4u4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u4u4u4_* pp = DataTransfer::GetPointer<S_u4u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4u4_ p = pp ? *pp : S_u4u4u4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u4u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u4u4u4u4_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u4u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u4u4u4u4_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u4u4u4u4_* pp = DataTransfer::GetPointer<S_u4u4u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4u4u4_ p = pp ? *pp : S_u4u4u4u4_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_S_u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_S_u8_");

    pesapi_env env = apis->get_env(info);
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_S_u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_S_u8_");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal struct
    S_u8_* pp = DataTransfer::GetPointer<S_u8_>(apis, env, apis->get_arg(info, 0));
    S_u8_ p = pp ? *pp : S_u8_ {};
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_b(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_b");

    pesapi_env env = apis->get_env(info);
    bool ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<bool>::toScript(apis, env, ret));
}

static void ifs_b(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_b");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    bool p = converter::Converter<bool>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_c(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_c");

    pesapi_env env = apis->get_env(info);
    Il2CppChar ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<Il2CppChar>::toScript(apis, env, ret));
}

static void ifs_c(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_c");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    Il2CppChar p = converter::Converter<Il2CppChar>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_i1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_i1");

    pesapi_env env = apis->get_env(info);
    int8_t ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<int8_t>::toScript(apis, env, ret));
}

static void ifs_i1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_i1");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    int8_t p = converter::Converter<int8_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_i2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_i2");

    pesapi_env env = apis->get_env(info);
    int16_t ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<int16_t>::toScript(apis, env, ret));
}

static void ifs_i2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_i2");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    int16_t p = converter::Converter<int16_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_i4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_i4");

    pesapi_env env = apis->get_env(info);
    int32_t ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<int32_t>::toScript(apis, env, ret));
}

static void ifs_i4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_i4");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    int32_t p = converter::Converter<int32_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_i8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_i8");

    pesapi_env env = apis->get_env(info);
    int64_t ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<int64_t>::toScript(apis, env, ret));
}

static void ifs_i8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_i8");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    int64_t p = converter::Converter<int64_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_o(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_o");

    pesapi_env env = apis->get_env(info);
    Il2CppObject* ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, CSRefToJsValue(apis, env, TIret, ret));
}

static void ifs_o(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_o");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal o/O
    Il2CppObject* p = JsValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, p);
}

static void ifg_p(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_p");

    pesapi_env env = apis->get_env(info);
    void* ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, apis->create_binary(env, ret, 0));
}

static void ifs_p(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_p");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    void* p = DataTransfer::GetPointer<void>(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, p);
}

static void ifg_r4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_r4");

    pesapi_env env = apis->get_env(info);
    float ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<float>::toScript(apis, env, ret));
}

static void ifs_r4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_r4");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    float p = converter::Converter<float>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_r8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_r8");

    pesapi_env env = apis->get_env(info);
    double ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<double>::toScript(apis, env, ret));
}

static void ifs_r8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_r8");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    double p = converter::Converter<double>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_s(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_s");

    pesapi_env env = apis->get_env(info);
    Il2CppString* ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<Il2CppString*>::toScript(apis, env, ret));
}

static void ifs_s(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_s");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal s
    Il2CppString* p = converter::Converter<Il2CppString*>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, p);
}

static void ifg_tN_bS_Pvi4i4i4S_pi4i4_i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tN_bS_Pvi4i4i4S_pi4i4_i4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tN_bS_Pvi4i4i4S_pi4i4_i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tN_bS_Pvi4i4i4S_pi4i4_i4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    N_bS_Pvi4i4i4S_pi4i4_i4__* pp = DataTransfer::GetPointer<N_bS_Pvi4i4i4S_pi4i4_i4__>(apis, env, apis->get_arg(info, 0));
    N_bS_Pvi4i4i4S_pi4i4_i4__ p = pp ? *pp : N_bS_Pvi4i4i4S_pi4i4_i4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tN_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tN_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tN_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tN_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    N_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__* pp = DataTransfer::GetPointer<N_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__>(apis, env, apis->get_arg(info, 0));
    N_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__ p = pp ? *pp : N_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tN_bS_i8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tN_bS_i8__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tN_bS_i8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tN_bS_i8__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    N_bS_i8__* pp = DataTransfer::GetPointer<N_bS_i8__>(apis, env, apis->get_arg(info, 0));
    N_bS_i8__ p = pp ? *pp : N_bS_i8__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tN_bS_s__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tN_bS_s__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tN_bS_s__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tN_bS_s__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    N_bS_s__* pp = DataTransfer::GetPointer<N_bS_s__>(apis, env, apis->get_arg(info, 0));
    N_bS_s__ p = pp ? *pp : N_bS_s__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tN_bS_u8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tN_bS_u8__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tN_bS_u8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tN_bS_u8__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    N_bS_u8__* pp = DataTransfer::GetPointer<N_bS_u8__>(apis, env, apis->get_arg(info, 0));
    N_bS_u8__ p = pp ? *pp : N_bS_u8__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tN_bi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tN_bi4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tN_bi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tN_bi4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    N_bi4_* pp = DataTransfer::GetPointer<N_bi4_>(apis, env, apis->get_arg(info, 0));
    N_bi4_ p = pp ? *pp : N_bi4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tN_br8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tN_br8_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tN_br8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tN_br8_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    N_br8_* pp = DataTransfer::GetPointer<N_br8_>(apis, env, apis->get_arg(info, 0));
    N_br8_ p = pp ? *pp : N_br8_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tN_bu4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tN_bu4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tN_bu4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tN_bu4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    N_bu4_* pp = DataTransfer::GetPointer<N_bu4_>(apis, env, apis->get_arg(info, 0));
    N_bu4_ p = pp ? *pp : N_bu4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tO(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tO");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    Il2CppObject* ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, CSRefToJsValue(apis, env, TIret, ret));
}

static void ifs_tO(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tO");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal o/O
    Il2CppObject* p = JsValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tPv(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tPv");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    void* ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, apis->create_binary(env, ret, 0));
}

static void ifs_tPv(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tPv");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    void* p = DataTransfer::GetPointer<void>(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_Pvi4i4i4S_pi4i4_i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_Pvi4i4i4S_pi4i4_i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_Pvi4i4i4S_pi4i4_i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_Pvi4i4i4S_pi4i4_i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_Pvi4i4i4S_pi4i4_i4_* pp = DataTransfer::GetPointer<S_Pvi4i4i4S_pi4i4_i4_>(apis, env, apis->get_arg(info, 0));
    S_Pvi4i4i4S_pi4i4_i4_ p = pp ? *pp : S_Pvi4i4i4S_pi4i4_i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_* pp = DataTransfer::GetPointer<S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_ p = pp ? *pp : S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_i4i2_S_pi2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_i4i2_S_pi2__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_i4i2_S_pi2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_i4i2_S_pi2__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_i4i2_S_pi2__* pp = DataTransfer::GetPointer<S_S_i4i2_S_pi2__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i2_S_pi2__ p = pp ? *pp : S_S_i4i2_S_pi2__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_i4i4_i4u4i4S_i2i2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_i4i4_i4u4i4S_i2i2__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_i4i4_i4u4i4S_i2i2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_i4i4_i4u4i4S_i2i2__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_i4i4_i4u4i4S_i2i2__* pp = DataTransfer::GetPointer<S_S_i4i4_i4u4i4S_i2i2__>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4_i4u4i4S_i2i2__ p = pp ? *pp : S_S_i4i4_i4u4i4S_i2i2__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_i4i4_o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_i4i4_o_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_i4i4_o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_i4i4_o_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_i4i4_o_* pp = DataTransfer::GetPointer<S_S_i4i4_o_>(apis, env, apis->get_arg(info, 0));
    S_S_i4i4_o_ p = pp ? *pp : S_S_i4i4_o_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_i4u1u1u1u1_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_i4u1u1u1u1_S_r4r4r4r4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_i4u1u1u1u1_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_i4u1u1u1u1_S_r4r4r4r4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_i4u1u1u1u1_S_r4r4r4r4__* pp = DataTransfer::GetPointer<S_S_i4u1u1u1u1_S_r4r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_i4u1u1u1u1_S_r4r4r4r4__ p = pp ? *pp : S_S_i4u1u1u1u1_S_r4r4r4r4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_pi2_S_S_i4i2_S_pi2___(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_pi2_S_S_i4i2_S_pi2___");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_pi2_S_S_i4i2_S_pi2___(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_pi2_S_S_i4i2_S_pi2___");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_pi2_S_S_i4i2_S_pi2___* pp = DataTransfer::GetPointer<S_S_pi2_S_S_i4i2_S_pi2___>(apis, env, apis->get_arg(info, 0));
    S_S_pi2_S_S_i4i2_S_pi2___ p = pp ? *pp : S_S_pi2_S_S_i4i2_S_pi2___ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_pi2_S_S_pi2_S_pi2___(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_pi2_S_S_pi2_S_pi2___");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_pi2_S_S_pi2_S_pi2___(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_pi2_S_S_pi2_S_pi2___");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_pi2_S_S_pi2_S_pi2___* pp = DataTransfer::GetPointer<S_S_pi2_S_S_pi2_S_pi2___>(apis, env, apis->get_arg(info, 0));
    S_S_pi2_S_S_pi2_S_pi2___ p = pp ? *pp : S_S_pi2_S_S_pi2_S_pi2___ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_pi2_S_pi2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_pi2_S_pi2__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_pi2_S_pi2__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_pi2_S_pi2__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_pi2_S_pi2__* pp = DataTransfer::GetPointer<S_S_pi2_S_pi2__>(apis, env, apis->get_arg(info, 0));
    S_S_pi2_S_pi2__ p = pp ? *pp : S_S_pi2_S_pi2__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4_S_r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4_S_r4r4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_r4r4_S_r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4_S_r4r4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_r4r4_S_r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4_S_r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4_S_r4r4__ p = pp ? *pp : S_S_r4r4_S_r4r4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__* pp = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__ p = pp ? *pp : S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_* pp = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_ p = pp ? *pp : S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_* pp = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_ p = pp ? *pp : S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4r4_S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4r4_S_r4r4r4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_r4r4r4_S_r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4r4_S_r4r4r4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_r4r4r4_S_r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4_S_r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4_S_r4r4r4__ p = pp ? *pp : S_S_r4r4r4_S_r4r4r4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__ p = pp ? *pp : S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4r4r4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4r4r4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_r4r4r4r4__* pp = DataTransfer::GetPointer<S_S_r4r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4r4__ p = pp ? *pp : S_S_r4r4r4r4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4r4r4_oS_r4r4r4r4_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4r4r4_oS_r4r4r4r4_r4r4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_r4r4r4r4_oS_r4r4r4r4_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4r4r4_oS_r4r4r4r4_r4r4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_r4r4r4r4_oS_r4r4r4r4_r4r4_* pp = DataTransfer::GetPointer<S_S_r4r4r4r4_oS_r4r4r4r4_r4r4_>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4r4_oS_r4r4r4r4_r4r4_ p = pp ? *pp : S_S_r4r4r4r4_oS_r4r4r4r4_r4r4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_* pp = DataTransfer::GetPointer<S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_>(apis, env, apis->get_arg(info, 0));
    S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_ p = pp ? *pp : S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_bb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_bb_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_bb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_bb_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_bb_* pp = DataTransfer::GetPointer<S_bb_>(apis, env, apis->get_arg(info, 0));
    S_bb_ p = pp ? *pp : S_bb_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_bbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_bbb_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_bbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_bbb_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_bbb_* pp = DataTransfer::GetPointer<S_bbb_>(apis, env, apis->get_arg(info, 0));
    S_bbb_ p = pp ? *pp : S_bbb_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_bbbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_bbbb_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_bbbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_bbbb_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_bbbb_* pp = DataTransfer::GetPointer<S_bbbb_>(apis, env, apis->get_arg(info, 0));
    S_bbbb_ p = pp ? *pp : S_bbbb_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_* pp = DataTransfer::GetPointer<S_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_>(apis, env, apis->get_arg(info, 0));
    S_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_ p = pp ? *pp : S_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_bi4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_bi4r4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_bi4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_bi4r4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_bi4r4_* pp = DataTransfer::GetPointer<S_bi4r4_>(apis, env, apis->get_arg(info, 0));
    S_bi4r4_ p = pp ? *pp : S_bi4r4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i2i4i4pi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i2i4i4pi4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i2i4i4pi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i2i4i4pi4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i2i4i4pi4_* pp = DataTransfer::GetPointer<S_i2i4i4pi4_>(apis, env, apis->get_arg(info, 0));
    S_i2i4i4pi4_ p = pp ? *pp : S_i2i4i4pi4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4S_r4r4r4_r4r4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4S_r4r4r4_r4r4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4S_r4r4r4_r4r4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4S_r4r4r4_r4r4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4S_r4r4r4_r4r4i4_* pp = DataTransfer::GetPointer<S_i4S_r4r4r4_r4r4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4S_r4r4r4_r4r4i4_ p = pp ? *pp : S_i4S_r4r4r4_r4r4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__* pp = DataTransfer::GetPointer<S_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__>(apis, env, apis->get_arg(info, 0));
    S_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__ p = pp ? *pp : S_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4_* pp = DataTransfer::GetPointer<S_i4_>(apis, env, apis->get_arg(info, 0));
    S_i4_ p = pp ? *pp : S_i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4bi4b_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4bi4b_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4bi4b_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4bi4b_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4bi4b_* pp = DataTransfer::GetPointer<S_i4bi4b_>(apis, env, apis->get_arg(info, 0));
    S_i4bi4b_ p = pp ? *pp : S_i4bi4b_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i2_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i2_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i2_* pp = DataTransfer::GetPointer<S_i4i2_>(apis, env, apis->get_arg(info, 0));
    S_i4i2_ p = pp ? *pp : S_i4i2_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i2i2u1u1u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i2i2u1u1u1u1u1u1u1u1_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i2i2u1u1u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i2i2u1u1u1u1u1u1u1u1_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i2i2u1u1u1u1u1u1u1u1_* pp = DataTransfer::GetPointer<S_i4i2i2u1u1u1u1u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_i4i2i2u1u1u1u1u1u1u1u1_ p = pp ? *pp : S_i4i2i2u1u1u1u1u1u1u1u1_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i4_* pp = DataTransfer::GetPointer<S_i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4_ p = pp ? *pp : S_i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4bb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4bb_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i4bb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4bb_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i4bb_* pp = DataTransfer::GetPointer<S_i4i4bb_>(apis, env, apis->get_arg(info, 0));
    S_i4i4bb_ p = pp ? *pp : S_i4i4bb_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_* pp = DataTransfer::GetPointer<S_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_ p = pp ? *pp : S_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i4i4_* pp = DataTransfer::GetPointer<S_i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4_ p = pp ? *pp : S_i4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i4i4i4_* pp = DataTransfer::GetPointer<S_i4i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4i4_ p = pp ? *pp : S_i4i4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4i4i4i4i4i4i4i4i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4i4i4i4i4i4i4i4i4i4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i4i4i4i4i4i4i4i4i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4i4i4i4i4i4i4i4i4i4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i4i4i4i4i4i4i4i4i4i4i4i4_* pp = DataTransfer::GetPointer<S_i4i4i4i4i4i4i4i4i4i4i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4i4i4i4i4i4i4i4i4i4i4_ p = pp ? *pp : S_i4i4i4i4i4i4i4i4i4i4i4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___* pp = DataTransfer::GetPointer<S_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___>(apis, env, apis->get_arg(info, 0));
    S_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___ p = pp ? *pp : S_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4oo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4oo_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i4oo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4oo_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i4oo_* pp = DataTransfer::GetPointer<S_i4i4oo_>(apis, env, apis->get_arg(info, 0));
    S_i4i4oo_ p = pp ? *pp : S_i4i4oo_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4i4si8i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4i4si8i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4i4si8i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4i4si8i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4i4si8i4i4_* pp = DataTransfer::GetPointer<S_i4i4si8i4i4_>(apis, env, apis->get_arg(info, 0));
    S_i4i4si8i4i4_ p = pp ? *pp : S_i4i4si8i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4p_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4p_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4p_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4p_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4p_* pp = DataTransfer::GetPointer<S_i4p_>(apis, env, apis->get_arg(info, 0));
    S_i4p_ p = pp ? *pp : S_i4p_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i4u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i4u1u1u1u1_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i4u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i4u1u1u1u1_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i4u1u1u1u1_* pp = DataTransfer::GetPointer<S_i4u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_i4u1u1u1u1_ p = pp ? *pp : S_i4u1u1u1u1_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_i8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_i8_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_i8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_i8_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_i8_* pp = DataTransfer::GetPointer<S_i8_>(apis, env, apis->get_arg(info, 0));
    S_i8_ p = pp ? *pp : S_i8_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oN_bS_i8__i8o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oN_bS_i8__i8o_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oN_bS_i8__i8o_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oN_bS_i8__i8o_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oN_bS_i8__i8o_* pp = DataTransfer::GetPointer<S_oN_bS_i8__i8o_>(apis, env, apis->get_arg(info, 0));
    S_oN_bS_i8__i8o_ p = pp ? *pp : S_oN_bS_i8__i8o_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oS_i4i4i4i4_i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oS_i4i4i4i4_i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oS_i4i4i4i4_i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oS_i4i4i4i4_i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oS_i4i4i4i4_i4i4_* pp = DataTransfer::GetPointer<S_oS_i4i4i4i4_i4i4_>(apis, env, apis->get_arg(info, 0));
    S_oS_i4i4i4i4_i4i4_ p = pp ? *pp : S_oS_i4i4i4i4_i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_obbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_obbb_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_obbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_obbb_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_obbb_* pp = DataTransfer::GetPointer<S_obbb_>(apis, env, apis->get_arg(info, 0));
    S_obbb_ p = pp ? *pp : S_obbb_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_* pp = DataTransfer::GetPointer<S_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_ p = pp ? *pp : S_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oi4S_i4ooobbor4i4_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oi4S_i4ooobbor4i4_i4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oi4S_i4ooobbor4i4_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oi4S_i4ooobbor4i4_i4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oi4S_i4ooobbor4i4_i4i4i4_* pp = DataTransfer::GetPointer<S_oi4S_i4ooobbor4i4_i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_oi4S_i4ooobbor4i4_i4i4i4_ p = pp ? *pp : S_oi4S_i4ooobbor4i4_i4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oi4S_i4u1u1u1u1_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oi4S_i4u1u1u1u1_i4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oi4S_i4u1u1u1u1_i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oi4S_i4u1u1u1u1_i4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oi4S_i4u1u1u1u1_i4i4i4_* pp = DataTransfer::GetPointer<S_oi4S_i4u1u1u1u1_i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_oi4S_i4u1u1u1u1_i4i4i4_ p = pp ? *pp : S_oi4S_i4u1u1u1u1_i4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oi4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oi4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oi4_* pp = DataTransfer::GetPointer<S_oi4_>(apis, env, apis->get_arg(info, 0));
    S_oi4_ p = pp ? *pp : S_oi4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oi4i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oi4i4i4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oi4i4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oi4i4i4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oi4i4i4i4i4_* pp = DataTransfer::GetPointer<S_oi4i4i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_oi4i4i4i4i4_ p = pp ? *pp : S_oi4i4i4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oi4oi4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oi4oi4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oi4oi4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oi4oi4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oi4oi4i4i4_* pp = DataTransfer::GetPointer<S_oi4oi4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_oi4oi4i4i4_ p = pp ? *pp : S_oi4oi4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oi4r4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oi4r4i4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oi4r4i4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oi4r4i4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oi4r4i4i4i4_* pp = DataTransfer::GetPointer<S_oi4r4i4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_oi4r4i4i4i4_ p = pp ? *pp : S_oi4r4i4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_ooS_oo_oooi4N_bS_s__ooo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_ooS_oo_oooi4N_bS_s__ooo_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_ooS_oo_oooi4N_bS_s__ooo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_ooS_oo_oooi4N_bS_s__ooo_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_ooS_oo_oooi4N_bS_s__ooo_* pp = DataTransfer::GetPointer<S_ooS_oo_oooi4N_bS_s__ooo_>(apis, env, apis->get_arg(info, 0));
    S_ooS_oo_oooi4N_bS_s__ooo_ p = pp ? *pp : S_ooS_oo_oooi4N_bS_s__ooo_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oo_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oo_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oo_* pp = DataTransfer::GetPointer<S_oo_>(apis, env, apis->get_arg(info, 0));
    S_oo_ p = pp ? *pp : S_oo_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oooObS_r4r4r4r4_bb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oooObS_r4r4r4r4_bb_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oooObS_r4r4r4r4_bb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oooObS_r4r4r4r4_bb_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oooObS_r4r4r4r4_bb_* pp = DataTransfer::GetPointer<S_oooObS_r4r4r4r4_bb_>(apis, env, apis->get_arg(info, 0));
    S_oooObS_r4r4r4r4_bb_ p = pp ? *pp : S_oooObS_r4r4r4r4_bb_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oooi4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oooi4i4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oooi4i4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oooi4i4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oooi4i4i4_* pp = DataTransfer::GetPointer<S_oooi4i4i4_>(apis, env, apis->get_arg(info, 0));
    S_oooi4i4i4_ p = pp ? *pp : S_oooi4i4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_oooo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_oooo_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_oooo_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_oooo_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_oooo_* pp = DataTransfer::GetPointer<S_oooo_>(apis, env, apis->get_arg(info, 0));
    S_oooo_ p = pp ? *pp : S_oooo_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_pPvS_pi4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_pPvS_pi4i4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_pPvS_pi4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_pPvS_pi4i4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_pPvS_pi4i4__* pp = DataTransfer::GetPointer<S_pPvS_pi4i4__>(apis, env, apis->get_arg(info, 0));
    S_pPvS_pi4i4__ p = pp ? *pp : S_pPvS_pi4i4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_pS_pi4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_pS_pi4i4__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_pS_pi4i4__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_pS_pi4i4__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_pS_pi4i4__* pp = DataTransfer::GetPointer<S_pS_pi4i4__>(apis, env, apis->get_arg(info, 0));
    S_pS_pi4i4__ p = pp ? *pp : S_pS_pi4i4__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_pi2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_pi2_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_pi2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_pi2_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_pi2_* pp = DataTransfer::GetPointer<S_pi2_>(apis, env, apis->get_arg(info, 0));
    S_pi2_ p = pp ? *pp : S_pi2_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_pppu8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_pppu8_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_pppu8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_pppu8_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_pppu8_* pp = DataTransfer::GetPointer<S_pppu8_>(apis, env, apis->get_arg(info, 0));
    S_pppu8_ p = pp ? *pp : S_pppu8_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_r4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_r4i4_* pp = DataTransfer::GetPointer<S_r4i4_>(apis, env, apis->get_arg(info, 0));
    S_r4i4_ p = pp ? *pp : S_r4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r4r4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r4r4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_r4r4_* pp = DataTransfer::GetPointer<S_r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4_ p = pp ? *pp : S_r4r4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r4r4r4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r4r4r4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4_ p = pp ? *pp : S_r4r4r4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r4r4r4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r4r4r4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_r4r4r4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r4r4r4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_r4r4r4i4_* pp = DataTransfer::GetPointer<S_r4r4r4i4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4i4_ p = pp ? *pp : S_r4r4r4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r4r4r4r4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r4r4r4r4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_r4r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4r4_ p = pp ? *pp : S_r4r4r4r4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_* pp = DataTransfer::GetPointer<S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_>(apis, env, apis->get_arg(info, 0));
    S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p = pp ? *pp : S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r8r8_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r8r8_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_r8r8_* pp = DataTransfer::GetPointer<S_r8r8_>(apis, env, apis->get_arg(info, 0));
    S_r8r8_ p = pp ? *pp : S_r8r8_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r8r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r8r8r8_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_r8r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r8r8r8_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_r8r8r8_* pp = DataTransfer::GetPointer<S_r8r8r8_>(apis, env, apis->get_arg(info, 0));
    S_r8r8r8_ p = pp ? *pp : S_r8r8r8_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_r8r8r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_r8r8r8r8_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_r8r8r8r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_r8r8r8r8_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_r8r8r8r8_* pp = DataTransfer::GetPointer<S_r8r8r8r8_>(apis, env, apis->get_arg(info, 0));
    S_r8r8r8r8_ p = pp ? *pp : S_r8r8r8r8_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_si4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_si4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_si4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_si4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_si4_* pp = DataTransfer::GetPointer<S_si4_>(apis, env, apis->get_arg(info, 0));
    S_si4_ p = pp ? *pp : S_si4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_si4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_si4i4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_si4i4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_si4i4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_si4i4_* pp = DataTransfer::GetPointer<S_si4i4_>(apis, env, apis->get_arg(info, 0));
    S_si4i4_ p = pp ? *pp : S_si4i4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_sssi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_sssi4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_sssi4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_sssi4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_sssi4_* pp = DataTransfer::GetPointer<S_sssi4_>(apis, env, apis->get_arg(info, 0));
    S_sssi4_ p = pp ? *pp : S_sssi4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u1_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u1_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u1_* pp = DataTransfer::GetPointer<S_u1_>(apis, env, apis->get_arg(info, 0));
    S_u1_ p = pp ? *pp : S_u1_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_* pp = DataTransfer::GetPointer<S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_>(apis, env, apis->get_arg(info, 0));
    S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_ p = pp ? *pp : S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u1u1u1u1u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u1u1u1u1u1u1u1u1u1u1_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u1u1u1u1u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u1u1u1u1u1u1u1u1u1u1_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u1u1u1u1u1u1u1u1u1u1_* pp = DataTransfer::GetPointer<S_u1u1u1u1u1u1u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_u1u1u1u1u1u1u1u1u1u1_ p = pp ? *pp : S_u1u1u1u1u1u1u1u1u1u1_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__* pp = DataTransfer::GetPointer<S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__>(apis, env, apis->get_arg(info, 0));
    S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__ p = pp ? *pp : S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u2_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u2_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u2_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u2_* pp = DataTransfer::GetPointer<S_u2_>(apis, env, apis->get_arg(info, 0));
    S_u2_ p = pp ? *pp : S_u2_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u4_* pp = DataTransfer::GetPointer<S_u4_>(apis, env, apis->get_arg(info, 0));
    S_u4_ p = pp ? *pp : S_u4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4u1u1u1u1u1u1_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u4u1u1u1u1u1u1_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4u1u1u1u1u1u1_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u4u1u1u1u1u1u1_* pp = DataTransfer::GetPointer<S_u4u1u1u1u1u1u1_>(apis, env, apis->get_arg(info, 0));
    S_u4u1u1u1u1u1u1_ p = pp ? *pp : S_u4u1u1u1u1u1u1_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4u4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4u4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u4u4_* pp = DataTransfer::GetPointer<S_u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4_ p = pp ? *pp : S_u4u4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4u4u4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4u4u4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u4u4u4_* pp = DataTransfer::GetPointer<S_u4u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4u4_ p = pp ? *pp : S_u4u4u4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4u4u4u4_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u4u4u4u4_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4u4u4u4_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u4u4u4u4_* pp = DataTransfer::GetPointer<S_u4u4u4u4_>(apis, env, apis->get_arg(info, 0));
    S_u4u4u4u4_ p = pp ? *pp : S_u4u4u4u4_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u4u4u4u4u4bbbbbbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u4u4u4u4u4bbbbbbb_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u4u4u4u4u4bbbbbbb_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u4u4u4u4u4bbbbbbb_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u4u4u4u4u4bbbbbbb_* pp = DataTransfer::GetPointer<S_u4u4u4u4u4bbbbbbb_>(apis, env, apis->get_arg(info, 0));
    S_u4u4u4u4u4bbbbbbb_ p = pp ? *pp : S_u4u4u4u4u4bbbbbbb_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u8_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u8_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u8_* pp = DataTransfer::GetPointer<S_u8_>(apis, env, apis->get_arg(info, 0));
    S_u8_ p = pp ? *pp : S_u8_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tS_u8u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tS_u8u8_");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    auto ret = (char*)self + offset;

    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));
}

static void ifs_tS_u8u8_(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tS_u8u8_");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal struct
    S_u8u8_* pp = DataTransfer::GetPointer<S_u8u8_>(apis, env, apis->get_arg(info, 0));
    S_u8u8_ p = pp ? *pp : S_u8u8_ {};
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tb(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tb");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    bool ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<bool>::toScript(apis, env, ret));
}

static void ifs_tb(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tb");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    bool p = converter::Converter<bool>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tc(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tc");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    Il2CppChar ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<Il2CppChar>::toScript(apis, env, ret));
}

static void ifs_tc(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tc");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    Il2CppChar p = converter::Converter<Il2CppChar>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_ti1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ti1");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    int8_t ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<int8_t>::toScript(apis, env, ret));
}

static void ifs_ti1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ti1");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    int8_t p = converter::Converter<int8_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_ti2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ti2");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    int16_t ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<int16_t>::toScript(apis, env, ret));
}

static void ifs_ti2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ti2");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    int16_t p = converter::Converter<int16_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_ti4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ti4");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    int32_t ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<int32_t>::toScript(apis, env, ret));
}

static void ifs_ti4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ti4");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    int32_t p = converter::Converter<int32_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_ti8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ti8");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    int64_t ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<int64_t>::toScript(apis, env, ret));
}

static void ifs_ti8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ti8");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    int64_t p = converter::Converter<int64_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_to(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_to");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    Il2CppObject* ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, CSRefToJsValue(apis, env, TIret, ret));
}

static void ifs_to(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_to");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal o/O
    Il2CppObject* p = JsValueToCSRef(apis, TIp, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tp(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tp");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    void* ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, apis->create_binary(env, ret, 0));
}

static void ifs_tp(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tp");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    void* p = DataTransfer::GetPointer<void>(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tr4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tr4");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    float ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<float>::toScript(apis, env, ret));
}

static void ifs_tr4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tr4");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    float p = converter::Converter<float>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tr8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tr8");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    double ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<double>::toScript(apis, env, ret));
}

static void ifs_tr8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tr8");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    double p = converter::Converter<double>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_ts(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_ts");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    Il2CppString* ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<Il2CppString*>::toScript(apis, env, ret));
}

static void ifs_ts(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_ts");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal s
    Il2CppString* p = converter::Converter<Il2CppString*>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tu1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tu1");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    uint8_t ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<uint8_t>::toScript(apis, env, ret));
}

static void ifs_tu1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tu1");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    uint8_t p = converter::Converter<uint8_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tu2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tu2");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    uint16_t ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<uint16_t>::toScript(apis, env, ret));
}

static void ifs_tu2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tu2");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    uint16_t p = converter::Converter<uint16_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tu4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tu4");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    uint32_t ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<uint32_t>::toScript(apis, env, ret));
}

static void ifs_tu4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tu4");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    uint32_t p = converter::Converter<uint32_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_tu8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_tu8");

    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

    uint64_t ret;

    GetFieldValue(self, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<uint64_t>::toScript(apis, env, ret));
}

static void ifs_tu8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_tu8");
    
    pesapi_env env = apis->get_env(info);

    auto self = apis->get_native_holder_ptr(info);

        // JSValToCSVal P any
    uint64_t p = converter::Converter<uint64_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(self, fieldInfo, offset, &p);
}

static void ifg_u1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_u1");

    pesapi_env env = apis->get_env(info);
    uint8_t ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<uint8_t>::toScript(apis, env, ret));
}

static void ifs_u1(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_u1");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    uint8_t p = converter::Converter<uint8_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_u2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_u2");

    pesapi_env env = apis->get_env(info);
    uint16_t ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<uint16_t>::toScript(apis, env, ret));
}

static void ifs_u2(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_u2");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    uint16_t p = converter::Converter<uint16_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_u4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_u4");

    pesapi_env env = apis->get_env(info);
    uint32_t ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<uint32_t>::toScript(apis, env, ret));
}

static void ifs_u4(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_u4");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    uint32_t p = converter::Converter<uint32_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static void ifg_u8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_u8");

    pesapi_env env = apis->get_env(info);
    uint64_t ret;

    GetFieldValue(nullptr, fieldInfo, offset, &ret);
    
    apis->add_return(info, converter::Converter<uint64_t>::toScript(apis, env, ret));
}

static void ifs_u8(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_u8");
    
    pesapi_env env = apis->get_env(info);
        // JSValToCSVal P any
    uint64_t p = converter::Converter<uint64_t>::toCpp(apis, env, apis->get_arg(info, 0));
    SetFieldValue(nullptr, fieldInfo, offset, &p);
}

static FieldWrapFuncInfo g_fieldWrapFuncInfos[] = {
    
    {"O", ifg_O, ifs_O},
    {"S_O_", ifg_S_O_, ifs_S_O_},
    {"S_Op_", ifg_S_Op_, ifs_S_Op_},
    {"S_S_Oi4i4__", ifg_S_S_Oi4i4__, ifs_S_S_Oi4i4__},
    {"S_S_S_r4r4r4r4__S_r4r4r4__", ifg_S_S_S_r4r4r4r4__S_r4r4r4__, ifs_S_S_S_r4r4r4r4__S_r4r4r4__},
    {"S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__", ifg_S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__, ifs_S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__},
    {"S_S_i4i4_S_i4i4_S_i4i4__", ifg_S_S_i4i4_S_i4i4_S_i4i4__, ifs_S_S_i4i4_S_i4i4_S_i4i4__},
    {"S_S_i4i4_S_i4i4__", ifg_S_S_i4i4_S_i4i4__, ifs_S_S_i4i4_S_i4i4__},
    {"S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__", ifg_S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__, ifs_S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__},
    {"S_S_i4i4i4_S_i4i4i4_S_i4i4i4__", ifg_S_S_i4i4i4_S_i4i4i4_S_i4i4i4__, ifs_S_S_i4i4i4_S_i4i4i4_S_i4i4i4__},
    {"S_S_i4i4i4_S_i4i4i4__", ifg_S_S_i4i4i4_S_i4i4i4__, ifs_S_S_i4i4i4_S_i4i4i4__},
    {"S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__", ifg_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__, ifs_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__},
    {"S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__", ifg_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__, ifs_S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__},
    {"S_S_i4i4i4i4_S_i4i4i4i4__", ifg_S_S_i4i4i4i4_S_i4i4i4i4__, ifs_S_S_i4i4i4i4_S_i4i4i4i4__},
    {"S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___", ifg_S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___, ifs_S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___},
    {"S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__", ifg_S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__, ifs_S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__},
    {"S_S_r4r4_S_r4r4_S_r4r4__", ifg_S_S_r4r4_S_r4r4_S_r4r4__, ifs_S_S_r4r4_S_r4r4_S_r4r4__},
    {"S_S_r4r4_S_r4r4__", ifg_S_S_r4r4_S_r4r4__, ifs_S_S_r4r4_S_r4r4__},
    {"S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__", ifg_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__, ifs_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__},
    {"S_S_r4r4r4_S_r4r4r4_S_r4r4r4__", ifg_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__, ifs_S_S_r4r4r4_S_r4r4r4_S_r4r4r4__},
    {"S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__", ifg_S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__, ifs_S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__},
    {"S_S_r4r4r4_S_r4r4r4__", ifg_S_S_r4r4r4_S_r4r4r4__, ifs_S_S_r4r4r4_S_r4r4r4__},
    {"S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_", ifg_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_, ifs_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_},
    {"S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__", ifg_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__, ifs_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__},
    {"S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__", ifg_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__, ifs_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__},
    {"S_S_r4r4r4r4_S_r4r4r4r4__", ifg_S_S_r4r4r4r4_S_r4r4r4r4__, ifs_S_S_r4r4r4r4_S_r4r4r4r4__},
    {"S_S_r4r4r4r4__", ifg_S_S_r4r4r4r4__, ifs_S_S_r4r4r4r4__},
    {"S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__", ifg_S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__, ifs_S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__},
    {"S_S_r8r8_S_r8r8_S_r8r8__", ifg_S_S_r8r8_S_r8r8_S_r8r8__, ifs_S_S_r8r8_S_r8r8_S_r8r8__},
    {"S_S_r8r8_S_r8r8__", ifg_S_S_r8r8_S_r8r8__, ifs_S_S_r8r8_S_r8r8__},
    {"S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__", ifg_S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__, ifs_S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__},
    {"S_S_r8r8r8_S_r8r8r8_S_r8r8r8__", ifg_S_S_r8r8r8_S_r8r8r8_S_r8r8r8__, ifs_S_S_r8r8r8_S_r8r8r8_S_r8r8r8__},
    {"S_S_r8r8r8_S_r8r8r8__", ifg_S_S_r8r8r8_S_r8r8r8__, ifs_S_S_r8r8r8_S_r8r8r8__},
    {"S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__", ifg_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__, ifs_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__},
    {"S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__", ifg_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__, ifs_S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__},
    {"S_S_r8r8r8r8_S_r8r8r8r8__", ifg_S_S_r8r8r8r8_S_r8r8r8r8__, ifs_S_S_r8r8r8r8_S_r8r8r8r8__},
    {"S_S_u2_S_u2_S_u2_S_u2__", ifg_S_S_u2_S_u2_S_u2_S_u2__, ifs_S_S_u2_S_u2_S_u2_S_u2__},
    {"S_S_u2_S_u2_S_u2__", ifg_S_S_u2_S_u2_S_u2__, ifs_S_S_u2_S_u2_S_u2__},
    {"S_S_u2_S_u2__", ifg_S_S_u2_S_u2__, ifs_S_S_u2_S_u2__},
    {"S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__", ifg_S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__, ifs_S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__},
    {"S_S_u4u4_S_u4u4_S_u4u4__", ifg_S_S_u4u4_S_u4u4_S_u4u4__, ifs_S_S_u4u4_S_u4u4_S_u4u4__},
    {"S_S_u4u4_S_u4u4__", ifg_S_S_u4u4_S_u4u4__, ifs_S_S_u4u4_S_u4u4__},
    {"S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__", ifg_S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__, ifs_S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__},
    {"S_S_u4u4u4_S_u4u4u4_S_u4u4u4__", ifg_S_S_u4u4u4_S_u4u4u4_S_u4u4u4__, ifs_S_S_u4u4u4_S_u4u4u4_S_u4u4u4__},
    {"S_S_u4u4u4_S_u4u4u4__", ifg_S_S_u4u4u4_S_u4u4u4__, ifs_S_S_u4u4u4_S_u4u4u4__},
    {"S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__", ifg_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__, ifs_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__},
    {"S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__", ifg_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__, ifs_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__},
    {"S_S_u4u4u4u4_S_u4u4u4u4__", ifg_S_S_u4u4u4u4_S_u4u4u4u4__, ifs_S_S_u4u4u4u4_S_u4u4u4u4__},
    {"S_S_u8_i2_", ifg_S_S_u8_i2_, ifs_S_S_u8_i2_},
    {"S__", ifg_S__, ifs_S__},
    {"S_bi2_", ifg_S_bi2_, ifs_S_bi2_},
    {"S_bi4_", ifg_S_bi4_, ifs_S_bi4_},
    {"S_bi4i4_", ifg_S_bi4i4_, ifs_S_bi4i4_},
    {"S_bi8_", ifg_S_bi8_, ifs_S_bi8_},
    {"S_br4_", ifg_S_br4_, ifs_S_br4_},
    {"S_br8_", ifg_S_br8_, ifs_S_br8_},
    {"S_bu1_", ifg_S_bu1_, ifs_S_bu1_},
    {"S_i4S_i4i4i4pi4i4i4__", ifg_S_i4S_i4i4i4pi4i4i4__, ifs_S_i4S_i4i4i4pi4i4i4__},
    {"S_i4_", ifg_S_i4_, ifs_S_i4_},
    {"S_i4i2i2u1u1u1u1u1u1u1u1_", ifg_S_i4i2i2u1u1u1u1u1u1u1u1_, ifs_S_i4i2i2u1u1u1u1u1u1u1u1_},
    {"S_i4i4_", ifg_S_i4i4_, ifs_S_i4i4_},
    {"S_i4i4bi4i4_", ifg_S_i4i4bi4i4_, ifs_S_i4i4bi4i4_},
    {"S_i4i4i4_", ifg_S_i4i4i4_, ifs_S_i4i4i4_},
    {"S_i4i4i4i4_", ifg_S_i4i4i4i4_, ifs_S_i4i4i4i4_},
    {"S_i4i4i4i4u8_", ifg_S_i4i4i4i4u8_, ifs_S_i4i4i4i4u8_},
    {"S_i4i4r4u1u1u1u1_", ifg_S_i4i4r4u1u1u1u1_, ifs_S_i4i4r4u1u1u1u1_},
    {"S_i4i4u4_", ifg_S_i4i4u4_, ifs_S_i4i4u4_},
    {"S_i4o_", ifg_S_i4o_, ifs_S_i4o_},
    {"S_i8S_i4i4__", ifg_S_i8S_i4i4__, ifs_S_i8S_i4i4__},
    {"S_i8_", ifg_S_i8_, ifs_S_i8_},
    {"S_i8i8i8i8i8i8i8i4_", ifg_S_i8i8i8i8i8i8i8i4_, ifs_S_i8i8i8i8i8i8i8i4_},
    {"S_i8s_", ifg_S_i8s_, ifs_S_i8s_},
    {"S_oO_", ifg_S_oO_, ifs_S_oO_},
    {"S_o_", ifg_S_o_, ifs_S_o_},
    {"S_oi2_", ifg_S_oi2_, ifs_S_oi2_},
    {"S_ooS_r4r4_sssbb_", ifg_S_ooS_r4r4_sssbb_, ifs_S_ooS_r4r4_sssbb_},
    {"S_oooo_", ifg_S_oooo_, ifs_S_oooo_},
    {"S_ou8oo_", ifg_S_ou8oo_, ifs_S_ou8oo_},
    {"S_p_", ifg_S_p_, ifs_S_p_},
    {"S_pu4u4u4_", ifg_S_pu4u4u4_, ifs_S_pu4u4u4_},
    {"S_r4r4_", ifg_S_r4r4_, ifs_S_r4r4_},
    {"S_r4r4r4_", ifg_S_r4r4r4_, ifs_S_r4r4r4_},
    {"S_r4r4r4r4_", ifg_S_r4r4r4r4_, ifs_S_r4r4r4r4_},
    {"S_r8r8_", ifg_S_r8r8_, ifs_S_r8r8_},
    {"S_r8r8r8_", ifg_S_r8r8r8_, ifs_S_r8r8r8_},
    {"S_r8r8r8r8_", ifg_S_r8r8r8r8_, ifs_S_r8r8r8r8_},
    {"S_s_", ifg_S_s_, ifs_S_s_},
    {"S_si4_", ifg_S_si4_, ifs_S_si4_},
    {"S_si4i4_", ifg_S_si4i4_, ifs_S_si4i4_},
    {"S_soi4i4b_", ifg_S_soi4i4b_, ifs_S_soi4i4b_},
    {"S_u1_", ifg_S_u1_, ifs_S_u1_},
    {"S_u1o_", ifg_S_u1o_, ifs_S_u1o_},
    {"S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__", ifg_S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__, ifs_S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__},
    {"S_u1u1u1u1u1u1u1u1_", ifg_S_u1u1u1u1u1u1u1u1_, ifs_S_u1u1u1u1u1u1u1u1_},
    {"S_u1u1u1u1u4u4u4u4_", ifg_S_u1u1u1u1u4u4u4u4_, ifs_S_u1u1u1u1u4u4u4u4_},
    {"S_u2_", ifg_S_u2_, ifs_S_u2_},
    {"S_u4_", ifg_S_u4_, ifs_S_u4_},
    {"S_u4u4_", ifg_S_u4u4_, ifs_S_u4u4_},
    {"S_u4u4u4_", ifg_S_u4u4u4_, ifs_S_u4u4u4_},
    {"S_u4u4u4u4_", ifg_S_u4u4u4u4_, ifs_S_u4u4u4u4_},
    {"S_u8_", ifg_S_u8_, ifs_S_u8_},
    {"b", ifg_b, ifs_b},
    {"c", ifg_c, ifs_c},
    {"i1", ifg_i1, ifs_i1},
    {"i2", ifg_i2, ifs_i2},
    {"i4", ifg_i4, ifs_i4},
    {"i8", ifg_i8, ifs_i8},
    {"o", ifg_o, ifs_o},
    {"p", ifg_p, ifs_p},
    {"r4", ifg_r4, ifs_r4},
    {"r8", ifg_r8, ifs_r8},
    {"s", ifg_s, ifs_s},
    {"tN_bS_Pvi4i4i4S_pi4i4_i4__", ifg_tN_bS_Pvi4i4i4S_pi4i4_i4__, ifs_tN_bS_Pvi4i4i4S_pi4i4_i4__},
    {"tN_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__", ifg_tN_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__, ifs_tN_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__},
    {"tN_bS_i8__", ifg_tN_bS_i8__, ifs_tN_bS_i8__},
    {"tN_bS_s__", ifg_tN_bS_s__, ifs_tN_bS_s__},
    {"tN_bS_u8__", ifg_tN_bS_u8__, ifs_tN_bS_u8__},
    {"tN_bi4_", ifg_tN_bi4_, ifs_tN_bi4_},
    {"tN_br8_", ifg_tN_br8_, ifs_tN_br8_},
    {"tN_bu4_", ifg_tN_bu4_, ifs_tN_bu4_},
    {"tO", ifg_tO, ifs_tO},
    {"tPv", ifg_tPv, ifs_tPv},
    {"tS_Pvi4i4i4S_pi4i4_i4_", ifg_tS_Pvi4i4i4S_pi4i4_i4_, ifs_tS_Pvi4i4i4S_pi4i4_i4_},
    {"tS_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_", ifg_tS_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_, ifs_tS_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_},
    {"tS_S_i4i2_S_pi2__", ifg_tS_S_i4i2_S_pi2__, ifs_tS_S_i4i2_S_pi2__},
    {"tS_S_i4i4_i4u4i4S_i2i2__", ifg_tS_S_i4i4_i4u4i4S_i2i2__, ifs_tS_S_i4i4_i4u4i4S_i2i2__},
    {"tS_S_i4i4_o_", ifg_tS_S_i4i4_o_, ifs_tS_S_i4i4_o_},
    {"tS_S_i4u1u1u1u1_S_r4r4r4r4__", ifg_tS_S_i4u1u1u1u1_S_r4r4r4r4__, ifs_tS_S_i4u1u1u1u1_S_r4r4r4r4__},
    {"tS_S_pi2_S_S_i4i2_S_pi2___", ifg_tS_S_pi2_S_S_i4i2_S_pi2___, ifs_tS_S_pi2_S_S_i4i2_S_pi2___},
    {"tS_S_pi2_S_S_pi2_S_pi2___", ifg_tS_S_pi2_S_S_pi2_S_pi2___, ifs_tS_S_pi2_S_S_pi2_S_pi2___},
    {"tS_S_pi2_S_pi2__", ifg_tS_S_pi2_S_pi2__, ifs_tS_S_pi2_S_pi2__},
    {"tS_S_r4r4_S_r4r4__", ifg_tS_S_r4r4_S_r4r4__, ifs_tS_S_r4r4_S_r4r4__},
    {"tS_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__", ifg_tS_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__, ifs_tS_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__},
    {"tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_", ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_, ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_},
    {"tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_", ifg_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_, ifs_tS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_},
    {"tS_S_r4r4r4_S_r4r4r4__", ifg_tS_S_r4r4r4_S_r4r4r4__, ifs_tS_S_r4r4r4_S_r4r4r4__},
    {"tS_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__", ifg_tS_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__, ifs_tS_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__},
    {"tS_S_r4r4r4r4__", ifg_tS_S_r4r4r4r4__, ifs_tS_S_r4r4r4r4__},
    {"tS_S_r4r4r4r4_oS_r4r4r4r4_r4r4_", ifg_tS_S_r4r4r4r4_oS_r4r4r4r4_r4r4_, ifs_tS_S_r4r4r4r4_oS_r4r4r4r4_r4r4_},
    {"tS_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_", ifg_tS_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_, ifs_tS_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_},
    {"tS_bb_", ifg_tS_bb_, ifs_tS_bb_},
    {"tS_bbb_", ifg_tS_bbb_, ifs_tS_bbb_},
    {"tS_bbbb_", ifg_tS_bbbb_, ifs_tS_bbbb_},
    {"tS_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_", ifg_tS_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_, ifs_tS_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_},
    {"tS_bi4r4_", ifg_tS_bi4r4_, ifs_tS_bi4r4_},
    {"tS_i2i4i4pi4_", ifg_tS_i2i4i4pi4_, ifs_tS_i2i4i4pi4_},
    {"tS_i4S_r4r4r4_r4r4i4_", ifg_tS_i4S_r4r4r4_r4r4i4_, ifs_tS_i4S_r4r4r4_r4r4i4_},
    {"tS_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__", ifg_tS_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__, ifs_tS_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__},
    {"tS_i4_", ifg_tS_i4_, ifs_tS_i4_},
    {"tS_i4bi4b_", ifg_tS_i4bi4b_, ifs_tS_i4bi4b_},
    {"tS_i4i2_", ifg_tS_i4i2_, ifs_tS_i4i2_},
    {"tS_i4i2i2u1u1u1u1u1u1u1u1_", ifg_tS_i4i2i2u1u1u1u1u1u1u1u1_, ifs_tS_i4i2i2u1u1u1u1u1u1u1u1_},
    {"tS_i4i4_", ifg_tS_i4i4_, ifs_tS_i4i4_},
    {"tS_i4i4bb_", ifg_tS_i4i4bb_, ifs_tS_i4i4bb_},
    {"tS_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_", ifg_tS_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_, ifs_tS_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_},
    {"tS_i4i4i4_", ifg_tS_i4i4i4_, ifs_tS_i4i4i4_},
    {"tS_i4i4i4i4_", ifg_tS_i4i4i4i4_, ifs_tS_i4i4i4i4_},
    {"tS_i4i4i4i4i4i4i4i4i4i4i4i4i4_", ifg_tS_i4i4i4i4i4i4i4i4i4i4i4i4i4_, ifs_tS_i4i4i4i4i4i4i4i4i4i4i4i4i4_},
    {"tS_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___", ifg_tS_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___, ifs_tS_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___},
    {"tS_i4i4oo_", ifg_tS_i4i4oo_, ifs_tS_i4i4oo_},
    {"tS_i4i4si8i4i4_", ifg_tS_i4i4si8i4i4_, ifs_tS_i4i4si8i4i4_},
    {"tS_i4p_", ifg_tS_i4p_, ifs_tS_i4p_},
    {"tS_i4u1u1u1u1_", ifg_tS_i4u1u1u1u1_, ifs_tS_i4u1u1u1u1_},
    {"tS_i8_", ifg_tS_i8_, ifs_tS_i8_},
    {"tS_oN_bS_i8__i8o_", ifg_tS_oN_bS_i8__i8o_, ifs_tS_oN_bS_i8__i8o_},
    {"tS_oS_i4i4i4i4_i4i4_", ifg_tS_oS_i4i4i4i4_i4i4_, ifs_tS_oS_i4i4i4i4_i4i4_},
    {"tS_obbb_", ifg_tS_obbb_, ifs_tS_obbb_},
    {"tS_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_", ifg_tS_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_, ifs_tS_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_},
    {"tS_oi4S_i4ooobbor4i4_i4i4i4_", ifg_tS_oi4S_i4ooobbor4i4_i4i4i4_, ifs_tS_oi4S_i4ooobbor4i4_i4i4i4_},
    {"tS_oi4S_i4u1u1u1u1_i4i4i4_", ifg_tS_oi4S_i4u1u1u1u1_i4i4i4_, ifs_tS_oi4S_i4u1u1u1u1_i4i4i4_},
    {"tS_oi4_", ifg_tS_oi4_, ifs_tS_oi4_},
    {"tS_oi4i4i4i4i4_", ifg_tS_oi4i4i4i4i4_, ifs_tS_oi4i4i4i4i4_},
    {"tS_oi4oi4i4i4_", ifg_tS_oi4oi4i4i4_, ifs_tS_oi4oi4i4i4_},
    {"tS_oi4r4i4i4i4_", ifg_tS_oi4r4i4i4i4_, ifs_tS_oi4r4i4i4i4_},
    {"tS_ooS_oo_oooi4N_bS_s__ooo_", ifg_tS_ooS_oo_oooi4N_bS_s__ooo_, ifs_tS_ooS_oo_oooi4N_bS_s__ooo_},
    {"tS_oo_", ifg_tS_oo_, ifs_tS_oo_},
    {"tS_oooObS_r4r4r4r4_bb_", ifg_tS_oooObS_r4r4r4r4_bb_, ifs_tS_oooObS_r4r4r4r4_bb_},
    {"tS_oooi4i4i4_", ifg_tS_oooi4i4i4_, ifs_tS_oooi4i4i4_},
    {"tS_oooo_", ifg_tS_oooo_, ifs_tS_oooo_},
    {"tS_pPvS_pi4i4__", ifg_tS_pPvS_pi4i4__, ifs_tS_pPvS_pi4i4__},
    {"tS_pS_pi4i4__", ifg_tS_pS_pi4i4__, ifs_tS_pS_pi4i4__},
    {"tS_pi2_", ifg_tS_pi2_, ifs_tS_pi2_},
    {"tS_pppu8_", ifg_tS_pppu8_, ifs_tS_pppu8_},
    {"tS_r4i4_", ifg_tS_r4i4_, ifs_tS_r4i4_},
    {"tS_r4r4_", ifg_tS_r4r4_, ifs_tS_r4r4_},
    {"tS_r4r4r4_", ifg_tS_r4r4r4_, ifs_tS_r4r4r4_},
    {"tS_r4r4r4i4_", ifg_tS_r4r4r4i4_, ifs_tS_r4r4r4i4_},
    {"tS_r4r4r4r4_", ifg_tS_r4r4r4r4_, ifs_tS_r4r4r4r4_},
    {"tS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_", ifg_tS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_, ifs_tS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_},
    {"tS_r8r8_", ifg_tS_r8r8_, ifs_tS_r8r8_},
    {"tS_r8r8r8_", ifg_tS_r8r8r8_, ifs_tS_r8r8r8_},
    {"tS_r8r8r8r8_", ifg_tS_r8r8r8r8_, ifs_tS_r8r8r8r8_},
    {"tS_si4_", ifg_tS_si4_, ifs_tS_si4_},
    {"tS_si4i4_", ifg_tS_si4i4_, ifs_tS_si4i4_},
    {"tS_sssi4_", ifg_tS_sssi4_, ifs_tS_sssi4_},
    {"tS_u1_", ifg_tS_u1_, ifs_tS_u1_},
    {"tS_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_", ifg_tS_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_, ifs_tS_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_},
    {"tS_u1u1u1u1u1u1u1u1u1u1_", ifg_tS_u1u1u1u1u1u1u1u1u1u1_, ifs_tS_u1u1u1u1u1u1u1u1u1u1_},
    {"tS_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__", ifg_tS_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__, ifs_tS_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__},
    {"tS_u2_", ifg_tS_u2_, ifs_tS_u2_},
    {"tS_u4_", ifg_tS_u4_, ifs_tS_u4_},
    {"tS_u4u1u1u1u1u1u1_", ifg_tS_u4u1u1u1u1u1u1_, ifs_tS_u4u1u1u1u1u1u1_},
    {"tS_u4u4_", ifg_tS_u4u4_, ifs_tS_u4u4_},
    {"tS_u4u4u4_", ifg_tS_u4u4u4_, ifs_tS_u4u4u4_},
    {"tS_u4u4u4u4_", ifg_tS_u4u4u4u4_, ifs_tS_u4u4u4u4_},
    {"tS_u4u4u4u4u4bbbbbbb_", ifg_tS_u4u4u4u4u4bbbbbbb_, ifs_tS_u4u4u4u4u4bbbbbbb_},
    {"tS_u8_", ifg_tS_u8_, ifs_tS_u8_},
    {"tS_u8u8_", ifg_tS_u8u8_, ifs_tS_u8u8_},
    {"tb", ifg_tb, ifs_tb},
    {"tc", ifg_tc, ifs_tc},
    {"ti1", ifg_ti1, ifs_ti1},
    {"ti2", ifg_ti2, ifs_ti2},
    {"ti4", ifg_ti4, ifs_ti4},
    {"ti8", ifg_ti8, ifs_ti8},
    {"to", ifg_to, ifs_to},
    {"tp", ifg_tp, ifs_tp},
    {"tr4", ifg_tr4, ifs_tr4},
    {"tr8", ifg_tr8, ifs_tr8},
    {"ts", ifg_ts, ifs_ts},
    {"tu1", ifg_tu1, ifs_tu1},
    {"tu2", ifg_tu2, ifs_tu2},
    {"tu4", ifg_tu4, ifs_tu4},
    {"tu8", ifg_tu8, ifs_tu8},
    {"u1", ifg_u1, ifs_u1},
    {"u2", ifg_u2, ifs_u2},
    {"u4", ifg_u4, ifs_u4},
    {"u8", ifg_u8, ifs_u8},
    {nullptr, nullptr, nullptr}    
};

FieldWrapFuncInfo * FindFieldWrapFuncInfo(const char* signature)
{
    auto begin = &g_fieldWrapFuncInfos[0];
    auto end = &g_fieldWrapFuncInfos[sizeof(g_fieldWrapFuncInfos) / sizeof(FieldWrapFuncInfo) - 1];
    auto first = std::lower_bound(begin, end, signature, [](const FieldWrapFuncInfo& x, const char* signature) {return strcmp(x.Signature, signature) < 0;});
    if (first != end && strcmp(first->Signature, signature) == 0) {
        return first;
    }
    return nullptr;
}

}


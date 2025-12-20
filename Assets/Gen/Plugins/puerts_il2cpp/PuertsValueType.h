// Auto Gen

#if !__SNC__
#ifndef __has_feature 
#define __has_feature(x) 0 
#endif
#endif

#if _MSC_VER
typedef wchar_t Il2CppChar;
#elif __has_feature(cxx_unicode_literals)
typedef char16_t Il2CppChar;
#else
typedef uint16_t Il2CppChar;
#endif

namespace puerts
{

// RegistryHive
struct i4
{
    int32_t p0;
};
    
// TimeSpan
struct S_i8_
{
    int64_t p0;
};
    
// DateTime
struct S_u8_
{
    uint64_t p0;
};
    
// DateTimeOffset
struct S_S_u8_i2_
{
    struct S_u8_ p0;
    int16_t p1;
};
    
// Guid
struct S_i4i2i2u1u1u1u1u1u1u1u1_
{
    int32_t p0;
    int16_t p1;
    int16_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
    uint8_t p7;
    uint8_t p8;
    uint8_t p9;
    uint8_t p10;
};
    
// HashCode
struct S_u4u4u4u4u4u4u4u4_
{
    uint32_t p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
    uint32_t p4;
    uint32_t p5;
    uint32_t p6;
    uint32_t p7;
};
    
// Index
struct S_i4_
{
    int32_t p0;
};
    
// CancellationToken
struct S_o_
{
    Il2CppObject* p0;
};
    
// Range
struct S_S_i4_S_i4__
{
    struct S_i4_ p0;
    struct S_i4_ p1;
};
    
// RuntimeTypeHandle
struct S_p_
{
    void* p0;
};
    
// ValueTuple
struct S__
{
    union
    {
        struct
        {
        };
        uint8_t __padding[1];
    };
};
    
// Void
struct v
{
    union
    {
        struct
        {
        };
        uint8_t __padding[1];
    };
};
    
// ConsoleKeyInfo
struct S_ci4i4_
{
    Il2CppChar p0;
    int32_t p1;
    int32_t p2;
};
    
// SequencePosition
struct S_Oi4_
{
    Il2CppObject* p0;
    int32_t p1;
};
    
// TypedReference
struct S_S_p_pp_
{
    struct S_p_ p0;
    void* p1;
    void* p2;
};
    
// ArgIterator
struct S_ppi4i4_
{
    void* p0;
    void* p1;
    int32_t p2;
    int32_t p3;
};
    
// Decimal
struct S_i4i4i4i4u8_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    uint64_t p4;
};
    
// NativeOverlapped
struct S_ppi4i4p_
{
    void* p0;
    void* p1;
    int32_t p2;
    int32_t p3;
    void* p4;
};
    
// SparselyPopulatedArrayAddInfo`1
struct S_oi4_
{
    Il2CppObject* p0;
    int32_t p1;
};
    
// CancellationTokenRegistration
struct S_oS_oi4__
{
    Il2CppObject* p0;
    struct S_oi4_ p1;
};
    
// AsyncFlowControl
struct S_boo_
{
    bool p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
};
    
// LockCookie
struct S_i4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
};
    
// ValueTask
struct S_Oi2b_
{
    Il2CppObject* p0;
    int16_t p1;
    bool p2;
};
    
// Nullable`1
struct N_bi8_
{
    bool hasValue;
    int64_t p1;
};
    
// ParallelLoopResult
struct S_bN_bi8__
{
    bool p0;
    struct N_bi8_ p1;
};
    
// SecurityRuleSet
struct u1
{
    uint8_t p0;
};
    
// HashAlgorithmName
struct S_s_
{
    Il2CppString* p0;
};
    
// DSAParameters
struct S_oooooooi4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    int32_t p7;
};
    
// RSAParameters
struct S_oooooooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
};
    
// Nullable`1
struct N_bb_
{
    bool hasValue;
    bool p1;
};
    
// SerializationEntry
struct S_sOo_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
};
    
// HandleRef
struct S_Op_
{
    Il2CppObject* p0;
    void* p1;
};
    
// ArrayWithOffset
struct S_Oi4i4_
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
};
    
// TYPEFLAGS
struct i2
{
    int16_t p0;
};
    
// TYPEDESC
struct S_pi2_
{
    void* p0;
    int16_t p1;
};
    
// IDLDESC
struct S_i4i2_
{
    int32_t p0;
    int16_t p1;
};
    
// TYPEATTR
struct S_S_i4i2i2u1u1u1u1u1u1u1u1_i4i4i4i4pi4i4i2i2i2i2i2i2i2i2S_pi2_S_i4i2__
{
    struct S_i4i2i2u1u1u1u1u1u1u1u1_ p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    void* p5;
    int32_t p6;
    int32_t p7;
    int16_t p8;
    int16_t p9;
    int16_t p10;
    int16_t p11;
    int16_t p12;
    int16_t p13;
    int16_t p14;
    int16_t p15;
    struct S_pi2_ p16;
    struct S_i4i2_ p17;
};
    
// DESCUNION
struct S_S_i4i2_S_pi2__
{
    struct S_i4i2_ p0;
    struct S_pi2_ p1;
};
    
// ELEMDESC
struct S_S_pi2_S_S_i4i2_S_pi2___
{
    struct S_pi2_ p0;
    struct S_S_i4i2_S_pi2__ p1;
};
    
// FUNCDESC
struct S_i4ppi4i4i4i2i2i2i2S_S_pi2_S_S_i4i2_S_pi2___i2_
{
    int32_t p0;
    void* p1;
    void* p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int16_t p6;
    int16_t p7;
    int16_t p8;
    int16_t p9;
    struct S_S_pi2_S_S_i4i2_S_pi2___ p10;
    int16_t p11;
};
    
// VARDESC
struct S_i4sS_S_pi2_S_S_i4i2_S_pi2___i2i4_
{
    int32_t p0;
    Il2CppString* p1;
    struct S_S_pi2_S_S_i4i2_S_pi2___ p2;
    int16_t p3;
    int32_t p4;
};
    
// EXCEPINFO
struct S_i2i2sssi4pp_
{
    int16_t p0;
    int16_t p1;
    Il2CppString* p2;
    Il2CppString* p3;
    Il2CppString* p4;
    int32_t p5;
    void* p6;
    void* p7;
};
    
// BINDPTR
struct S_ppp_
{
    void* p0;
    void* p1;
    void* p2;
};
    
// BIND_OPTS
struct S_i4i4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
};
    
// FILETIME
struct S_i4i4_
{
    int32_t p0;
    int32_t p1;
};
    
// STATSTG
struct S_si4i8S_i4i4_S_i4i4_S_i4i4_i4i4S_i4i2i2u1u1u1u1u1u1u1u1_i4i4_
{
    Il2CppString* p0;
    int32_t p1;
    int64_t p2;
    struct S_i4i4_ p3;
    struct S_i4i4_ p4;
    struct S_i4i4_ p5;
    int32_t p6;
    int32_t p7;
    struct S_i4i2i2u1u1u1u1u1u1u1u1_ p8;
    int32_t p9;
    int32_t p10;
};
    
// TYPELIBATTR
struct S_S_i4i2i2u1u1u1u1u1u1u1u1_i4i4i2i2i2_
{
    struct S_i4i2i2u1u1u1u1u1u1u1u1_ p0;
    int32_t p1;
    int32_t p2;
    int16_t p3;
    int16_t p4;
    int16_t p5;
};
    
// TYPEATTR
struct S_S_i4i2i2u1u1u1u1u1u1u1u1_i4i4i4i4pi4i4i2i2i2i2i2i2i2i2S_pi2_S_pi2__
{
    struct S_i4i2i2u1u1u1u1u1u1u1u1_ p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    void* p5;
    int32_t p6;
    int32_t p7;
    int16_t p8;
    int16_t p9;
    int16_t p10;
    int16_t p11;
    int16_t p12;
    int16_t p13;
    int16_t p14;
    int16_t p15;
    struct S_pi2_ p16;
    struct S_pi2_ p17;
};
    
// DESCUNION
struct S_S_pi2_S_pi2__
{
    struct S_pi2_ p0;
    struct S_pi2_ p1;
};
    
// ELEMDESC
struct S_S_pi2_S_S_pi2_S_pi2___
{
    struct S_pi2_ p0;
    struct S_S_pi2_S_pi2__ p1;
};
    
// FUNCDESC
struct S_i4ppi4i4i4i2i2i2i2S_S_pi2_S_S_pi2_S_pi2___i2_
{
    int32_t p0;
    void* p1;
    void* p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int16_t p6;
    int16_t p7;
    int16_t p8;
    int16_t p9;
    struct S_S_pi2_S_S_pi2_S_pi2___ p10;
    int16_t p11;
};
    
// DESCUNION
struct S_i4p_
{
    int32_t p0;
    void* p1;
};
    
// VARDESC
struct S_i4sS_i4p_S_S_pi2_S_S_pi2_S_pi2___i2i4_
{
    int32_t p0;
    Il2CppString* p1;
    struct S_i4p_ p2;
    struct S_S_pi2_S_S_pi2_S_pi2___ p3;
    int16_t p4;
    int32_t p5;
};
    
// EXCEPINFO
struct S_i2i2sssi4ppi4_
{
    int16_t p0;
    int16_t p1;
    Il2CppString* p2;
    Il2CppString* p3;
    Il2CppString* p4;
    int32_t p5;
    void* p6;
    void* p7;
    int32_t p8;
};
    
// AsyncMethodBuilderCore
struct S_oo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
};
    
// AsyncTaskMethodBuilder`1
struct S_S_oo_o_
{
    struct S_oo_ p0;
    Il2CppObject* p1;
};
    
// AsyncTaskMethodBuilder
struct S_S_S_oo_o__
{
    struct S_S_oo_o_ p0;
};
    
// AsyncIteratorMethodBuilder
struct S_S_S_S_oo_o___
{
    struct S_S_S_oo_o__ p0;
};
    
// AsyncValueTaskMethodBuilder
struct S_S_S_S_oo_o__bb_
{
    struct S_S_S_oo_o__ p0;
    bool p1;
    bool p2;
};
    
// ConfiguredAsyncDisposable
struct S_ob_
{
    Il2CppObject* p0;
    bool p1;
};
    
// ConfiguredValueTaskAwaitable
struct S_S_Oi2b__
{
    struct S_Oi2b_ p0;
};
    
// ConfiguredTaskAwaitable
struct S_S_ob__
{
    struct S_ob_ p0;
};
    
// AsyncVoidMethodBuilder
struct S_oS_oo_o_
{
    Il2CppObject* p0;
    struct S_oo_ p1;
    Il2CppObject* p2;
};
    
// InterfaceMapping
struct S_oooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
};
    
// CustomAttributeTypedArgument
struct S_oO_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
};
    
// CustomAttributeNamedArgument
struct S_S_oO_bsoo_
{
    struct S_oO_ p0;
    bool p1;
    Il2CppString* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
};
    
// ExceptionHandler
struct S_i4i4i4i4i4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
};
    
// OpCode
struct S_u1u1u1u1u1u1u1u1_
{
    uint8_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
    uint8_t p7;
};
    
// Nullable`1
struct N_bi4_
{
    bool hasValue;
    int32_t p1;
};
    
// EventKeywords
struct i8
{
    int64_t p0;
};
    
// EventSourceOptions
struct S_i8i4i4u1u1u1_
{
    int64_t p0;
    int32_t p1;
    int32_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
};
    
// AssemblyHash
struct S_i4o_
{
    int32_t p0;
    Il2CppObject* p1;
};
    
// DictionaryEntry
struct S_OO_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
};
    
// MemoryHandle
struct S_PvS_p_o_
{
    void* p0;
    struct S_p_ p1;
    Il2CppObject* p2;
};
    
// StandardFormat
struct S_u1u1_
{
    uint8_t p0;
    uint8_t p1;
};
    
// FILE_TIME
struct S_u4u4_
{
    uint32_t p0;
    uint32_t p1;
};
    
// WIN32_FILE_ATTRIBUTE_DATA
struct S_i4S_u4u4_S_u4u4_S_u4u4_u4u4_
{
    int32_t p0;
    struct S_u4u4_ p1;
    struct S_u4u4_ p2;
    struct S_u4u4_ p3;
    uint32_t p4;
    uint32_t p5;
};
    
// ReadOnlySpan`1
struct S_S_p_i4_
{
    struct S_p_ p0;
    int32_t p1;
};
    
// FileSystemEntry
struct S_PvS_S_p_i4_S_S_p_i4_S_S_p_i4__
{
    void* p0;
    struct S_S_p_i4_ p1;
    struct S_S_p_i4_ p2;
    struct S_S_p_i4_ p3;
};
    
// Vector3
struct S_r4r4r4_
{
    float p0;
    float p1;
    float p2;
};
    
// NavMeshLocation
struct S_S_u8_S_r4r4r4__
{
    struct S_u8_ p0;
    struct S_r4r4r4_ p1;
};
    
// AtomicSafetyHandle
struct S_pi4i4_
{
    void* p0;
    int32_t p1;
    int32_t p2;
};
    
// NavMeshQuery
struct S_pS_pi4i4__
{
    void* p0;
    struct S_pi4i4_ p1;
};
    
// OffMeshLinkData
struct S_i4i4i4i4S_r4r4r4_S_r4r4r4__
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    struct S_r4r4r4_ p4;
    struct S_r4r4r4_ p5;
};
    
// NavMeshHit
struct S_S_r4r4r4_S_r4r4r4_r4i4i4_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    float p2;
    int32_t p3;
    int32_t p4;
};
    
// NavMeshTriangulation
struct S_ooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
};
    
// NavMeshLinkData
struct S_S_r4r4r4_S_r4r4r4_r4i4r4i4i4_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    float p2;
    int32_t p3;
    float p4;
    int32_t p5;
    int32_t p6;
};
    
// NavMeshQueryFilter
struct S_oi4i4_
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
};
    
// Matrix4x4
struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    float p7;
    float p8;
    float p9;
    float p10;
    float p11;
    float p12;
    float p13;
    float p14;
    float p15;
};
    
// NavMeshBuildSource
struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_i4i4i4i4i4_
{
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
};
    
// NavMeshBuildMarkup
struct S_i4i4i4i4i4i4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
};
    
// NavMeshBuildDebugSettings
struct S_u1_
{
    uint8_t p0;
};
    
// NavMeshBuildSettings
struct S_i4r4r4r4r4r4r4r4i4r4i4i4i4u4i4S_u1__
{
    int32_t p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    float p7;
    int32_t p8;
    float p9;
    int32_t p10;
    int32_t p11;
    int32_t p12;
    uint32_t p13;
    int32_t p14;
    struct S_u1_ p15;
};
    
// jvalue
struct S_bi1ci2i4i8r4r8p_
{
    bool p0;
    int8_t p1;
    Il2CppChar p2;
    int16_t p3;
    int32_t p4;
    int64_t p5;
    float p6;
    double p7;
    void* p8;
};
    
// JNINativeMethod
struct S_ssp_
{
    Il2CppString* p0;
    Il2CppString* p1;
    void* p2;
};
    
// AnimatorStateInfo
struct S_i4i4i4r4r4r4r4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    float p3;
    float p4;
    float p5;
    float p6;
    int32_t p7;
    int32_t p8;
};
    
// AnimatorClipInfo
struct S_i4r4_
{
    int32_t p0;
    float p1;
};
    
// AnimatorTransitionInfo
struct S_i4i4i4br4r4bi4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    bool p3;
    float p4;
    float p5;
    bool p6;
    int32_t p7;
};
    
// MatchTargetWeightMask
struct S_S_r4r4r4_r4_
{
    struct S_r4r4r4_ p0;
    float p1;
};
    
// Quaternion
struct S_r4r4r4r4_
{
    float p0;
    float p1;
    float p2;
    float p3;
};
    
// SkeletonBone
struct S_ssS_r4r4r4_S_r4r4r4r4_S_r4r4r4__
{
    Il2CppString* p0;
    Il2CppString* p1;
    struct S_r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4_ p4;
};
    
// HumanLimit
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4_ p2;
    float p3;
    int32_t p4;
};
    
// HumanBone
struct S_ssS_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4__
{
    Il2CppString* p0;
    Il2CppString* p1;
    struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4i4_ p2;
};
    
// HumanDescription
struct S_oor4r4r4r4r4r4r4r4sbbb_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    float p7;
    float p8;
    float p9;
    Il2CppString* p10;
    bool p11;
    bool p12;
    bool p13;
};
    
// HumanPose
struct S_S_r4r4r4_S_r4r4r4r4_o_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    Il2CppObject* p2;
};
    
// PlayableHandle
struct S_pu4_
{
    void* p0;
    uint32_t p1;
};
    
// AnimationClipPlayable
struct S_S_pu4__
{
    struct S_pu4_ p0;
};
    
// AnimationStream
struct S_u4pppppp_
{
    uint32_t p0;
    void* p1;
    void* p2;
    void* p3;
    void* p4;
    void* p5;
    void* p6;
};
    
// TransformStreamHandle
struct S_u4i4i4_
{
    uint32_t p0;
    int32_t p1;
    int32_t p2;
};
    
// PropertyStreamHandle
struct S_u4i4i4i4_
{
    uint32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
};
    
// TransformSceneHandle
struct S_u4i4_
{
    uint32_t p0;
    int32_t p1;
};
    
// ConstraintSource
struct S_or4_
{
    Il2CppObject* p0;
    float p1;
};
    
// AudioConfiguration
struct S_i4i4i4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
};
    
// WebCamDevice
struct S_ssi4i4o_
{
    Il2CppString* p0;
    Il2CppString* p1;
    int32_t p2;
    int32_t p3;
    Il2CppObject* p4;
};
    
// ClothSkinningCoefficient
struct S_r4r4_
{
    float p0;
    float p1;
};
    
// ContentFileUnloadHandle
struct S_S_u8__
{
    struct S_u8_ p0;
};
    
// ContentSceneParameters
struct S_i4i4b_
{
    int32_t p0;
    int32_t p1;
    bool p2;
};
    
// JobHandle
struct S_u8i4i4p_
{
    uint64_t p0;
    int32_t p1;
    int32_t p2;
    void* p3;
};
    
// JobRanges
struct S_i4i4i4p_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    void* p3;
};
    
// ProfilerCategory
struct S_u2_
{
    uint16_t p0;
};
    
// ProfilerCategoryFlags
struct u2
{
    uint16_t p0;
};
    
// ProfilerRecorderSample
struct S_i8i8i8_
{
    int64_t p0;
    int64_t p1;
    int64_t p2;
};
    
// NativeArray`1
struct S_Pvi4i4i4S_pi4i4_i4_
{
    void* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    struct S_pi4i4_ p4;
    int32_t p5;
};
    
// DebugScreenCapture
struct S_S_Pvi4i4i4S_pi4i4_i4_i4i4i4_
{
    struct S_Pvi4i4i4S_pi4i4_i4_ p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
};
    
// ProfilerRecorderDescription
struct S_S_u2_u2u1u1i4i4Pv_
{
    struct S_u2_ p0;
    uint16_t p1;
    uint8_t p2;
    uint8_t p3;
    int32_t p4;
    int32_t p5;
    void* p6;
};
    
// ProfilerMarkerData
struct S_u1u1u2u4Pv_
{
    uint8_t p0;
    uint8_t p1;
    uint16_t p2;
    uint32_t p3;
    void* p4;
};
    
// Color32
struct S_i4u1u1u1u1_
{
    int32_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint8_t p4;
};
    
// ProfilerCategoryDescription
struct S_u2u2S_i4u1u1u1u1_i4i4Pv_
{
    uint16_t p0;
    uint16_t p1;
    struct S_i4u1u1u1u1_ p2;
    int32_t p3;
    int32_t p4;
    void* p5;
};
    
// CaptureFlags
struct u4
{
    uint32_t p0;
};
    
// ReadCommand
struct S_Pvi8i8_
{
    void* p0;
    int64_t p1;
    int64_t p2;
};
    
// ReadCommandArray
struct S_Pvi4_
{
    void* p0;
    int32_t p1;
};
    
// FileInfoResult
struct S_i8i4_
{
    int64_t p0;
    int32_t p1;
};
    
// FileHandle
struct S_pi4_
{
    void* p0;
    int32_t p1;
};
    
// AsyncReadManagerRequestMetric
struct S_ssu8u8u8u8u4bi4i4i4i4r8r8r8_
{
    Il2CppString* p0;
    Il2CppString* p1;
    uint64_t p2;
    uint64_t p3;
    uint64_t p4;
    uint64_t p5;
    uint32_t p6;
    bool p7;
    int32_t p8;
    int32_t p9;
    int32_t p10;
    int32_t p11;
    double p12;
    double p13;
    double p14;
};
    
// ArchiveFileInfo
struct S_su8_
{
    Il2CppString* p0;
    uint64_t p1;
};
    
// Keyframe
struct S_r4r4r4r4i4i4r4r4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    int32_t p4;
    int32_t p5;
    float p6;
    float p7;
};
    
// Hash128
struct S_u8u8_
{
    uint64_t p0;
    uint64_t p1;
};
    
// CachedAssetBundle
struct S_sS_u8u8__
{
    Il2CppString* p0;
    struct S_u8u8_ p1;
};
    
// CacheIndex
struct S_si4i4_
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
};
    
// CullingGroupEvent
struct S_i4u1u1_
{
    int32_t p0;
    uint8_t p1;
    uint8_t p2;
};
    
// BuildCompression
struct S_i4i4u4_
{
    int32_t p0;
    int32_t p1;
    uint32_t p2;
};
    
// Bounds
struct S_S_r4r4r4_S_r4r4r4__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
};
    
// BoundsInt
struct S_S_i4i4i4_S_i4i4i4__
{
    struct S_i4i4i4_ p0;
    struct S_i4i4i4_ p1;
};
    
// Ray2D
struct S_S_r4r4_S_r4r4__
{
    struct S_r4r4_ p0;
    struct S_r4r4_ p1;
};
    
// LightProbesQuery
struct S_pi4S_pi4i4__
{
    void* p0;
    int32_t p1;
    struct S_pi4i4_ p2;
};
    
// DisplayInfo
struct S_u8i4i4S_u4u4_S_i4i4i4i4_s_
{
    uint64_t p0;
    int32_t p1;
    int32_t p2;
    struct S_u4u4_ p3;
    struct S_i4i4i4i4_ p4;
    Il2CppString* p5;
};
    
// FrameTiming
struct S_r8r8r8r8r8u8u8u8u8r4r4u4_
{
    double p0;
    double p1;
    double p2;
    double p3;
    double p4;
    uint64_t p5;
    uint64_t p6;
    uint64_t p7;
    uint64_t p8;
    float p9;
    float p10;
    uint32_t p11;
};
    
// Resolution
struct S_i4i4S_u4u4__
{
    int32_t p0;
    int32_t p1;
    struct S_u4u4_ p2;
};
    
// RenderTargetSetup
struct S_oS_i4p_i4i4i4ooi4i4_
{
    Il2CppObject* p0;
    struct S_i4p_ p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    int32_t p7;
    int32_t p8;
};
    
// RenderParams
struct S_i4u4i4S_S_r4r4r4_S_r4r4r4__oi4i4ooi4bi4o_
{
    int32_t p0;
    uint32_t p1;
    int32_t p2;
    struct S_S_r4r4r4_S_r4r4r4__ p3;
    Il2CppObject* p4;
    int32_t p5;
    int32_t p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    int32_t p9;
    bool p10;
    int32_t p11;
    Il2CppObject* p12;
};
    
// GraphicsBufferHandle
struct S_u4_
{
    uint32_t p0;
};
    
// LightBakingOutput
struct S_i4i4i4i4b_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    bool p4;
};
    
// LOD
struct S_r4r4o_
{
    float p0;
    float p1;
    Il2CppObject* p2;
};
    
// BoneWeight
struct S_r4r4r4r4i4i4i4i4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
};
    
// BoneWeight1
struct S_r4i4_
{
    float p0;
    int32_t p1;
};
    
// CombineInstance
struct S_i4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__
{
    int32_t p0;
    int32_t p1;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
};
    
// CustomRenderTextureUpdateZone
struct S_S_r4r4r4_S_r4r4r4_r4i4b_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    float p2;
    int32_t p3;
    bool p4;
};
    
// RenderTextureDescriptor
struct S_i4i4i4i4i4i4i4i4i4i4i4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    int32_t p9;
    int32_t p10;
    int32_t p11;
    int32_t p12;
};
    
// GradientColorKey
struct S_S_r4r4r4r4_r4_
{
    struct S_r4r4r4r4_ p0;
    float p1;
};
    
// FrustumPlanes
struct S_r4r4r4r4r4r4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
};
    
// InstantiateParameters
struct S_oS_i4_b_
{
    Il2CppObject* p0;
    struct S_i4_ p1;
    bool p2;
};
    
// Pose
struct S_S_r4r4r4_S_r4r4r4r4__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
};
    
// SecondarySpriteTexture
struct S_so_
{
    Il2CppString* p0;
    Il2CppObject* p1;
};
    
// SpriteBone
struct S_ssS_r4r4r4_S_r4r4r4r4_r4i4S_i4u1u1u1u1__
{
    Il2CppString* p0;
    Il2CppString* p1;
    struct S_r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    float p4;
    int32_t p5;
    struct S_i4u1u1u1u1_ p6;
};
    
// TransformAccess
struct S_pi4b_
{
    void* p0;
    int32_t p1;
    bool p2;
};
    
// SecondaryTileData
struct S_sS_i4u1u1u1u1_bsi4sbsbbbbssssss_
{
    Il2CppString* p0;
    struct S_i4u1u1u1u1_ p1;
    bool p2;
    Il2CppString* p3;
    int32_t p4;
    Il2CppString* p5;
    bool p6;
    Il2CppString* p7;
    bool p8;
    bool p9;
    bool p10;
    bool p11;
    Il2CppString* p12;
    Il2CppString* p13;
    Il2CppString* p14;
    Il2CppString* p15;
    Il2CppString* p16;
    Il2CppString* p17;
};
    
// PhraseRecognizedEventArgs
struct S_i4osS_u8_S_i8__
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppString* p2;
    struct S_u8_ p3;
    struct S_i8_ p4;
};
    
// CameraParameters
struct S_r4r4i4i4i4_
{
    float p0;
    float p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
};
    
// MovedFromAttributeData
struct S_sssbbbb_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    bool p3;
    bool p4;
    bool p5;
    bool p6;
};
    
// PlayerLoopSystem
struct S_ooopp_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    void* p3;
    void* p4;
};
    
// SubMeshDescriptor
struct S_S_S_r4r4r4_S_r4r4r4__i4i4i4i4i4i4_
{
    struct S_S_r4r4r4_S_r4r4r4__ p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
};
    
// RenderTargetIdentifier
struct S_i4i4i4pi4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    void* p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
};
    
// RenderTargetBinding
struct S_oS_i4i4i4pi4i4i4_ooi4i4i4_
{
    Il2CppObject* p0;
    struct S_i4i4i4pi4i4i4_ p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
};
    
// SphericalHarmonicsL2
struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    float p7;
    float p8;
    float p9;
    float p10;
    float p11;
    float p12;
    float p13;
    float p14;
    float p15;
    float p16;
    float p17;
    float p18;
    float p19;
    float p20;
    float p21;
    float p22;
    float p23;
    float p24;
    float p25;
    float p26;
};
    
// BatchDrawCommand
struct S_u4u4S_u4_S_u4_S_u4_u2u2i4i4_
{
    uint32_t p0;
    uint32_t p1;
    struct S_u4_ p2;
    struct S_u4_ p3;
    struct S_u4_ p4;
    uint16_t p5;
    uint16_t p6;
    int32_t p7;
    int32_t p8;
};
    
// BatchFilterSettings
struct S_u4u1u1u1u1u1u1_
{
    uint32_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
};
    
// BatchDrawRange
struct S_u4u4S_u4u1u1u1u1u1u1__
{
    uint32_t p0;
    uint32_t p1;
    struct S_u4u1u1u1u1u1u1_ p2;
};
    
// BatchCullingOutputDrawCommands
struct S_PvPvPvPvPvi4i4i4i4_
{
    void* p0;
    void* p1;
    void* p2;
    void* p3;
    void* p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
};
    
// MetadataValue
struct S_i4u4_
{
    int32_t p0;
    uint32_t p1;
};
    
// CullingSplit
struct S_S_r4r4r4_r4i4i4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__
{
    struct S_r4r4r4_ p0;
    float p1;
    int32_t p2;
    int32_t p3;
    float p4;
    float p5;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p6;
};
    
// LODParameters
struct S_i4S_r4r4r4_r4r4i4_
{
    int32_t p0;
    struct S_r4r4r4_ p1;
    float p2;
    float p3;
    int32_t p4;
};
    
// BatchCullingContext
struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_i4S_r4r4r4_r4r4i4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_i4i4i4S_u8_u4u8u1i4i4_
{
    struct S_Pvi4i4i4S_pi4i4_i4_ p0;
    struct S_Pvi4i4i4S_pi4i4_i4_ p1;
    struct S_i4S_r4r4r4_r4r4i4_ p2;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    struct S_u8_ p7;
    uint32_t p8;
    uint64_t p9;
    uint8_t p10;
    int32_t p11;
    int32_t p12;
};
    
// BatchCullingOutput
struct S_S_Pvi4i4i4S_pi4i4_i4__
{
    struct S_Pvi4i4i4S_pi4i4_i4_ p0;
};
    
// AttachmentDescriptor
struct S_i4i4i4S_i4i4i4pi4i4i4_S_i4i4i4pi4i4i4_S_r4r4r4r4_r4u4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    struct S_i4i4i4pi4i4i4_ p3;
    struct S_i4i4i4pi4i4i4_ p4;
    struct S_r4r4r4r4_ p5;
    float p6;
    uint32_t p7;
};
    
// BlendState
struct S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_
{
    struct S_u1u1u1u1u1u1u1u1_ p0;
    struct S_u1u1u1u1u1u1u1u1_ p1;
    struct S_u1u1u1u1u1u1u1u1_ p2;
    struct S_u1u1u1u1u1u1u1u1_ p3;
    struct S_u1u1u1u1u1u1u1u1_ p4;
    struct S_u1u1u1u1u1u1u1u1_ p5;
    struct S_u1u1u1u1u1u1u1u1_ p6;
    struct S_u1u1u1u1u1u1u1u1_ p7;
    uint8_t p8;
    uint8_t p9;
    int16_t p10;
};
    
// <layerCullDistances>e__FixedBuffer
struct S_r4_
{
    float p0;
};
    
// CoreCameraValues
struct S_i4u4i4_
{
    int32_t p0;
    uint32_t p1;
    int32_t p2;
};
    
// CameraProperties
struct S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p7;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p8;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p9;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p10;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p11;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p12;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p13;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p14;
    struct S_r4r4r4_ p15;
    struct S_r4r4r4_ p16;
    struct S_r4r4r4_ p17;
    struct S_r4r4r4_ p18;
    struct S_r4r4r4_ p19;
    float p20;
    uint32_t p21;
    struct S_u1_ p22;
    struct S_u1_ p23;
    float p24;
    struct S_r4r4r4_ p25;
    struct S_r4_ p26;
    int32_t p27;
    struct S_i4u4i4_ p28;
    uint32_t p29;
    int32_t p30;
    int32_t p31;
};
    
// ScriptableCullingParameters
struct S_i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_
{
    int32_t p0;
    struct S_i4S_r4r4r4_r4r4i4_ p1;
    struct S_u1_ p2;
    int32_t p3;
    uint32_t p4;
    uint64_t p5;
    uint64_t p6;
    struct S_r4_ p7;
    int32_t p8;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p9;
    struct S_r4r4r4_ p10;
    float p11;
    float p12;
    int32_t p13;
    int32_t p14;
    struct S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_ p15;
    float p16;
    int32_t p17;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p18;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p19;
    float p20;
    int32_t p21;
    bool p22;
    int32_t p23;
};
    
// CullingResults
struct S_pPvS_pi4i4__
{
    void* p0;
    void* p1;
    struct S_pi4i4_ p2;
};
    
// DepthState
struct S_u1i1_
{
    uint8_t p0;
    int8_t p1;
};
    
// SortingSettings
struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_
{
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4_ p2;
    int32_t p3;
    int32_t p4;
};
    
// DrawingSettings
struct S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_
{
    struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_ p0;
    struct S_i4_ p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    int32_t p9;
    int32_t p10;
};
    
// SortingLayerRange
struct S_i2i2_
{
    int16_t p0;
    int16_t p1;
};
    
// FilteringSettings
struct S_S_i4i4_i4u4i4S_i2i2__
{
    struct S_i4i4_ p0;
    int32_t p1;
    uint32_t p2;
    int32_t p3;
    struct S_i2i2_ p4;
};
    
// RasterState
struct S_i4i4r4u1u1u1u1_
{
    int32_t p0;
    int32_t p1;
    float p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
};
    
// RendererList
struct S_pu4u4u4_
{
    void* p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
};
    
// Nullable`1
struct N_bS_Pvi4i4i4S_pi4i4_i4__
{
    bool hasValue;
    struct S_Pvi4i4i4S_pi4i4_i4_ p1;
};
    
// RendererListParams
struct S_S_pPvS_pi4i4__S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_S_S_i4i4_i4u4i4S_i2i2__S_i4_bN_bS_Pvi4i4i4S_pi4i4_i4__N_bS_Pvi4i4i4S_pi4i4_i4___
{
    struct S_pPvS_pi4i4__ p0;
    struct S_S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_i4i4_S_i4_i4i4i4i4i4i4i4i4i4_ p1;
    struct S_S_i4i4_i4u4i4S_i2i2__ p2;
    struct S_i4_ p3;
    bool p4;
    struct N_bS_Pvi4i4i4S_pi4i4_i4__ p5;
    struct N_bS_Pvi4i4i4S_pi4i4_i4__ p6;
};
    
// StencilState
struct S_u1u1u1u1u1u1u1u1u1u1u1u1_
{
    uint8_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
    uint8_t p7;
    uint8_t p8;
    uint8_t p9;
    uint8_t p10;
    uint8_t p11;
};
    
// RenderStateBlock
struct S_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4_
{
    struct S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_ p0;
    struct S_i4i4r4u1u1u1u1_ p1;
    struct S_u1i1_ p2;
    struct S_u1u1u1u1u1u1u1u1u1u1u1u1_ p3;
    int32_t p4;
    int32_t p5;
};
    
// ScopedRenderPass
struct S_S_pS_pi4i4___
{
    struct S_pS_pi4i4__ p0;
};
    
// ShadowSplitData
struct S_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__
{
    int32_t p0;
    struct S_u1_ p1;
    struct S_r4r4r4r4_ p2;
    float p3;
    float p4;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p5;
};
    
// ShadowDrawingSettings
struct S_S_pPvS_pi4i4__i4i4S_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__i4i4_
{
    struct S_pPvS_pi4i4__ p0;
    int32_t p1;
    int32_t p2;
    struct S_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__ p3;
    int32_t p4;
    int32_t p5;
};
    
// VisibleLight
struct S_i4S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4r4i4i4_
{
    int32_t p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p3;
    float p4;
    float p5;
    int32_t p6;
    int32_t p7;
};
    
// VisibleReflectionProbe
struct S_S_S_r4r4r4_S_r4r4r4__S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4_S_r4r4r4_r4i4i4i4i4_
{
    struct S_S_r4r4r4_S_r4r4r4__ p0;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4_ p3;
    float p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
};
    
// GlobalKeyword
struct S_su4_
{
    Il2CppString* p0;
    uint32_t p1;
};
    
// LocalKeyword
struct S_S_p_su4_
{
    struct S_p_ p0;
    Il2CppString* p1;
    uint32_t p2;
};
    
// ShaderKeyword
struct S_su4bbb_
{
    Il2CppString* p0;
    uint32_t p1;
    bool p2;
    bool p3;
    bool p4;
};
    
// ShaderKeywordSet
struct S_pppu8_
{
    void* p0;
    void* p1;
    void* p2;
    uint64_t p3;
};
    
// Nullable`1
struct N_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__
{
    bool hasValue;
    struct S_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4_ p1;
};
    
// RendererListDesc
struct S_i4i4S_i4i4_N_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__oobi4u4i4i4S_pPvS_pi4i4__oS_i4_o_
{
    int32_t p0;
    int32_t p1;
    struct S_i4i4_ p2;
    struct N_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__ p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    bool p6;
    int32_t p7;
    uint32_t p8;
    int32_t p9;
    int32_t p10;
    struct S_pPvS_pi4i4__ p11;
    Il2CppObject* p12;
    struct S_i4_ p13;
    Il2CppObject* p14;
};
    
// FrameData
struct S_u8r8r4r4r8r4r4i4S_S_pu4___
{
    uint64_t p0;
    double p1;
    float p2;
    float p3;
    double p4;
    float p5;
    float p6;
    int32_t p7;
    struct S_S_pu4__ p8;
};
    
// PlayableBinding
struct S_sooo_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
};
    
// CoveredSequencePoint
struct S_ou4u4su4u4_
{
    Il2CppObject* p0;
    uint32_t p1;
    uint32_t p2;
    Il2CppString* p3;
    uint32_t p4;
    uint32_t p5;
};
    
// DirectionalLight
struct S_i4bu1S_r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4S_r4r4r4__
{
    int32_t p0;
    bool p1;
    uint8_t p2;
    struct S_r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4r4_ p5;
    struct S_r4r4r4r4_ p6;
    float p7;
    struct S_r4r4r4_ p8;
};
    
// PointLight
struct S_i4bu1S_r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4u1_
{
    int32_t p0;
    bool p1;
    uint8_t p2;
    struct S_r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4r4_ p5;
    struct S_r4r4r4r4_ p6;
    float p7;
    float p8;
    uint8_t p9;
};
    
// SpotLight
struct S_i4bu1S_r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4r4r4u1u1_
{
    int32_t p0;
    bool p1;
    uint8_t p2;
    struct S_r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4r4_ p5;
    struct S_r4r4r4r4_ p6;
    float p7;
    float p8;
    float p9;
    float p10;
    uint8_t p11;
    uint8_t p12;
};
    
// RectangleLight
struct S_i4bu1S_r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4r4u1_
{
    int32_t p0;
    bool p1;
    uint8_t p2;
    struct S_r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4r4_ p5;
    struct S_r4r4r4r4_ p6;
    float p7;
    float p8;
    float p9;
    uint8_t p10;
};
    
// SpotLightBoxShape
struct S_i4bu1S_r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4r4_
{
    int32_t p0;
    bool p1;
    uint8_t p2;
    struct S_r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4r4_ p5;
    struct S_r4r4r4r4_ p6;
    float p7;
    float p8;
    float p9;
};
    
// Cookie
struct S_i4r4S_r4r4__
{
    int32_t p0;
    float p1;
    struct S_r4r4_ p2;
};
    
// LightDataGI
struct S_i4i4r4S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4u1u1u1u1_
{
    int32_t p0;
    int32_t p1;
    float p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4r4_ p5;
    struct S_r4r4r4_ p6;
    float p7;
    float p8;
    float p9;
    float p10;
    float p11;
    uint8_t p12;
    uint8_t p13;
    uint8_t p14;
    uint8_t p15;
};
    
// RayTracingInstanceCullingTest
struct S_u4i4i4bbb_
{
    uint32_t p0;
    int32_t p1;
    int32_t p2;
    bool p3;
    bool p4;
    bool p5;
};
    
// RayTracingInstanceMaterialConfig
struct S_i4i4oo_
{
    int32_t p0;
    int32_t p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
};
    
// RayTracingInstanceTriangleCullingConfig
struct S_obbb_
{
    Il2CppObject* p0;
    bool p1;
    bool p2;
    bool p3;
};
    
// RayTracingInstanceCullingConfig
struct S_i4S_r4r4r4_r4ooS_oo_S_i4i4oo_S_i4i4oo_S_i4i4i4_S_obbb_S_i4S_r4r4r4_r4r4i4__
{
    int32_t p0;
    struct S_r4r4r4_ p1;
    float p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    struct S_oo_ p5;
    struct S_i4i4oo_ p6;
    struct S_i4i4oo_ p7;
    struct S_i4i4i4_ p8;
    struct S_obbb_ p9;
    struct S_i4S_r4r4r4_r4r4i4_ p10;
};
    
// Touch
struct S_i4S_r4r4_S_r4r4_S_r4r4_r4i4i4i4r4r4r4r4r4r4_
{
    int32_t p0;
    struct S_r4r4_ p1;
    struct S_r4r4_ p2;
    struct S_r4r4_ p3;
    float p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    float p8;
    float p9;
    float p10;
    float p11;
    float p12;
    float p13;
};
    
// PenData
struct S_S_r4r4_S_r4r4_i4r4r4i4S_r4r4__
{
    struct S_r4r4_ p0;
    struct S_r4r4_ p1;
    int32_t p2;
    float p3;
    float p4;
    int32_t p5;
    struct S_r4r4_ p6;
};
    
// LocationInfo
struct S_r8r4r4r4r4r4_
{
    double p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
};
    
// DLSSCommandInitializationData
struct S_u4u4u4u4i4i4u4_
{
    uint32_t p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
    int32_t p4;
    int32_t p5;
    uint32_t p6;
};
    
// DLSSTextureTable
struct S_ooooooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
};
    
// DLSSCommandExecutionData
struct S_i4r4r4r4r4r4r4u4u4u4u4u4u4u4_
{
    int32_t p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    uint32_t p7;
    uint32_t p8;
    uint32_t p9;
    uint32_t p10;
    uint32_t p11;
    uint32_t p12;
    uint32_t p13;
};
    
// OptimalDLSSSettingsData
struct S_u4u4r4u4u4u4u4_
{
    uint32_t p0;
    uint32_t p1;
    float p2;
    uint32_t p3;
    uint32_t p4;
    uint32_t p5;
    uint32_t p6;
};
    
// DLSSDebugFeatureInfos
struct S_bu4S_i4r4r4r4r4r4r4u4u4u4u4u4u4u4_S_u4u4u4u4i4i4u4__
{
    bool p0;
    uint32_t p1;
    struct S_i4r4r4r4r4r4r4u4u4u4u4u4u4u4_ p2;
    struct S_u4u4u4u4i4i4u4_ p3;
};
    
// ParticleCollisionEvent
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_i4_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4_ p2;
    int32_t p3;
};
    
// ParticleSystemNativeArray3
struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__
{
    struct S_Pvi4i4i4S_pi4i4_i4_ p0;
    struct S_Pvi4i4i4S_pi4i4_i4_ p1;
    struct S_Pvi4i4i4S_pi4i4_i4_ p2;
};
    
// ParticleSystemNativeArray4
struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__
{
    struct S_Pvi4i4i4S_pi4i4_i4_ p0;
    struct S_Pvi4i4i4S_pi4i4_i4_ p1;
    struct S_Pvi4i4i4S_pi4i4_i4_ p2;
    struct S_Pvi4i4i4S_pi4i4_i4_ p3;
};
    
// ParticleSystemJobData
struct S_i4S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_Pvi4i4i4S_pi4i4_i4_S_pi4i4__
{
    int32_t p0;
    struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__ p1;
    struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__ p2;
    struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__ p3;
    struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__ p4;
    struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__ p5;
    struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__ p6;
    struct S_Pvi4i4i4S_pi4i4_i4_ p7;
    struct S_Pvi4i4i4S_pi4i4_i4_ p8;
    struct S_Pvi4i4i4S_pi4i4_i4_ p9;
    struct S_Pvi4i4i4S_pi4i4_i4_ p10;
    struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__ p11;
    struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__ p12;
    struct S_Pvi4i4i4S_pi4i4_i4_ p13;
    struct S_pi4i4_ p14;
};
    
// WheelFrictionCurve
struct S_r4r4r4r4r4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    float p4;
};
    
// JointDrive
struct S_r4r4r4i4_
{
    float p0;
    float p1;
    float p2;
    int32_t p3;
};
    
// JointMotor
struct S_r4r4i4_
{
    float p0;
    float p1;
    int32_t p2;
};
    
// JointLimits
struct S_r4r4r4r4r4r4r4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
};
    
// ContactPairHeader
struct S_i4i4pu4u2S_r4r4r4__
{
    int32_t p0;
    int32_t p1;
    void* p2;
    uint32_t p3;
    uint16_t p4;
    struct S_r4r4r4_ p5;
};
    
// ContactPair
struct S_i4i4pu4u2u2S_r4r4r4__
{
    int32_t p0;
    int32_t p1;
    void* p2;
    uint32_t p3;
    uint16_t p4;
    uint16_t p5;
    struct S_r4r4r4_ p6;
};
    
// ArticulationDrive
struct S_r4r4r4r4r4r4r4i4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    int32_t p7;
};
    
// ArticulationReducedSpace
struct S_S_r4_i4_
{
    struct S_r4_ p0;
    int32_t p1;
};
    
// ArticulationJacobian
struct S_i4i4o_
{
    int32_t p0;
    int32_t p1;
    Il2CppObject* p2;
};
    
// ModifiableContactPair
struct S_ppppS_r4r4r4r4_S_r4r4r4_S_r4r4r4r4_S_r4r4r4_i4p_
{
    void* p0;
    void* p1;
    void* p2;
    void* p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4_ p5;
    struct S_r4r4r4r4_ p6;
    struct S_r4r4r4_ p7;
    int32_t p8;
    void* p9;
};
    
// RaycastHit
struct S_S_r4r4r4_S_r4r4r4_u4r4S_r4r4_i4_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    uint32_t p2;
    float p3;
    struct S_r4r4_ p4;
    int32_t p5;
};
    
// ContactPoint
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_i4i4r4_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4_ p2;
    int32_t p3;
    int32_t p4;
    float p5;
};
    
// ContactPairPoint
struct S_S_r4r4r4_r4S_r4r4r4_u4S_r4r4r4_u4_
{
    struct S_r4r4r4_ p0;
    float p1;
    struct S_r4r4r4_ p2;
    uint32_t p3;
    struct S_r4r4r4_ p4;
    uint32_t p5;
};
    
// QueryParameters
struct S_i4bi4b_
{
    int32_t p0;
    bool p1;
    int32_t p2;
    bool p3;
};
    
// RaycastCommand
struct S_S_r4r4r4_S_r4r4r4_S_i4_r4S_i4bi4b__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_i4_ p2;
    float p3;
    struct S_i4bi4b_ p4;
};
    
// SpherecastCommand
struct S_S_r4r4r4_r4S_r4r4r4_r4S_i4_S_i4bi4b__
{
    struct S_r4r4r4_ p0;
    float p1;
    struct S_r4r4r4_ p2;
    float p3;
    struct S_i4_ p4;
    struct S_i4bi4b_ p5;
};
    
// CapsulecastCommand
struct S_S_r4r4r4_S_r4r4r4_r4S_r4r4r4_r4S_i4_S_i4bi4b__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    float p2;
    struct S_r4r4r4_ p3;
    float p4;
    struct S_i4_ p5;
    struct S_i4bi4b_ p6;
};
    
// BoxcastCommand
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_r4r4r4_r4S_i4_S_i4bi4b__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4_ p3;
    float p4;
    struct S_i4_ p5;
    struct S_i4bi4b_ p6;
};
    
// ClosestPointCommand
struct S_S_r4r4r4_i4S_r4r4r4_S_r4r4r4r4_S_r4r4r4__
{
    struct S_r4r4r4_ p0;
    int32_t p1;
    struct S_r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4_ p4;
};
    
// OverlapSphereCommand
struct S_S_r4r4r4_r4S_i4_S_i4bi4b__
{
    struct S_r4r4r4_ p0;
    float p1;
    struct S_i4_ p2;
    struct S_i4bi4b_ p3;
};
    
// OverlapBoxCommand
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4_S_i4bi4b__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_i4_ p3;
    struct S_i4bi4b_ p4;
};
    
// OverlapCapsuleCommand
struct S_S_r4r4r4_S_r4r4r4_r4S_i4_S_i4bi4b__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    float p2;
    struct S_i4_ p3;
    struct S_i4bi4b_ p4;
};
    
// PhysicsShape2D
struct S_i4r4i4i4i4i4S_r4r4_S_r4r4__
{
    int32_t p0;
    float p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    struct S_r4r4_ p6;
    struct S_r4r4_ p7;
};
    
// GroupState
struct S_ooS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p2;
};
    
// ColliderDistance2D
struct S_S_r4r4_S_r4r4_S_r4r4_r4i4_
{
    struct S_r4r4_ p0;
    struct S_r4r4_ p1;
    struct S_r4r4_ p2;
    float p3;
    int32_t p4;
};
    
// ContactFilter2D
struct S_bbbbbbS_i4_r4r4r4r4_
{
    bool p0;
    bool p1;
    bool p2;
    bool p3;
    bool p4;
    bool p5;
    struct S_i4_ p6;
    float p7;
    float p8;
    float p9;
    float p10;
};
    
// ContactPoint2D
struct S_S_r4r4_S_r4r4_S_r4r4_r4r4r4i4i4i4i4i4_
{
    struct S_r4r4_ p0;
    struct S_r4r4_ p1;
    struct S_r4r4_ p2;
    float p3;
    float p4;
    float p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    int32_t p9;
    int32_t p10;
};
    
// RaycastHit2D
struct S_S_r4r4_S_r4r4_S_r4r4_r4r4i4_
{
    struct S_r4r4_ p0;
    struct S_r4r4_ p1;
    struct S_r4r4_ p2;
    float p3;
    float p4;
    int32_t p5;
};
    
// PhysicsJobOptions2D
struct S_bbi4i4i4i4i4i4i4i4i4i4i4i4i4i4i4_
{
    bool p0;
    bool p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    int32_t p9;
    int32_t p10;
    int32_t p11;
    int32_t p12;
    int32_t p13;
    int32_t p14;
    int32_t p15;
    int32_t p16;
};
    
// PropertyPathPart
struct S_i4si4O_
{
    int32_t p0;
    Il2CppString* p1;
    int32_t p2;
    Il2CppObject* p3;
};
    
// PropertyPath
struct S_S_i4si4O_S_i4si4O_S_i4si4O_S_i4si4O_i4oi4_
{
    struct S_i4si4O_ p0;
    struct S_i4si4O_ p1;
    struct S_i4si4O_ p2;
    struct S_i4si4O_ p3;
    int32_t p4;
    Il2CppObject* p5;
    int32_t p6;
};
    
// SpriteShapeParameters
struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ou4u4r4r4r4r4bbbbb_
{
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0;
    Il2CppObject* p1;
    uint32_t p2;
    uint32_t p3;
    float p4;
    float p5;
    float p6;
    float p7;
    bool p8;
    bool p9;
    bool p10;
    bool p11;
    bool p12;
};
    
// SpriteShapeMetaData
struct S_r4r4r4u4b_
{
    float p0;
    float p1;
    float p2;
    uint32_t p3;
    bool p4;
};
    
// AngleRangeInfo
struct S_r4r4u4o_
{
    float p0;
    float p1;
    uint32_t p2;
    Il2CppObject* p3;
};
    
// TreeInstance
struct S_S_r4r4r4_r4r4r4S_i4u1u1u1u1_S_i4u1u1u1u1_i4r4_
{
    struct S_r4r4r4_ p0;
    float p1;
    float p2;
    float p3;
    struct S_i4u1u1u1u1_ p4;
    struct S_i4u1u1u1u1_ p5;
    int32_t p6;
    float p7;
};
    
// BrushTransform
struct S_S_r4r4_S_r4r4_S_r4r4_S_r4r4_S_r4r4_S_r4r4__
{
    struct S_r4r4_ p0;
    struct S_r4r4_ p1;
    struct S_r4r4_ p2;
    struct S_r4r4_ p3;
    struct S_r4r4_ p4;
    struct S_r4r4_ p5;
};
    
// FaceInfo
struct S_i4ssi4r4i4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_
{
    int32_t p0;
    Il2CppString* p1;
    Il2CppString* p2;
    int32_t p3;
    float p4;
    int32_t p5;
    float p6;
    float p7;
    float p8;
    float p9;
    float p10;
    float p11;
    float p12;
    float p13;
    float p14;
    float p15;
    float p16;
    float p17;
    float p18;
    float p19;
    float p20;
};
    
// GlyphAdjustmentRecord
struct S_u4S_r4r4r4r4__
{
    uint32_t p0;
    struct S_r4r4r4r4_ p1;
};
    
// GlyphPairAdjustmentRecord
struct S_S_u4S_r4r4r4r4__S_u4S_r4r4r4r4__i4_
{
    struct S_u4S_r4r4r4r4__ p0;
    struct S_u4S_r4r4r4r4__ p1;
    int32_t p2;
};
    
// FontAssetCreationEditorSettings
struct S_si4i4i4i4i4i4i4i4i4sssi4r4i4b_
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    int32_t p9;
    Il2CppString* p10;
    Il2CppString* p11;
    Il2CppString* p12;
    int32_t p13;
    float p14;
    int32_t p15;
    bool p16;
};
    
// TextGenerationSettings
struct S_oS_r4r4r4r4_i4r4br4i4i4bbi4i4bi4i4S_r4r4_S_r4r4_b_
{
    Il2CppObject* p0;
    struct S_r4r4r4r4_ p1;
    int32_t p2;
    float p3;
    bool p4;
    float p5;
    int32_t p6;
    int32_t p7;
    bool p8;
    bool p9;
    int32_t p10;
    int32_t p11;
    bool p12;
    int32_t p13;
    int32_t p14;
    struct S_r4r4_ p15;
    struct S_r4r4_ p16;
    bool p17;
};
    
// CharacterInfo
struct S_i4S_r4r4r4r4_S_r4r4r4r4_r4i4i4b_
{
    int32_t p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    float p3;
    int32_t p4;
    int32_t p5;
    bool p6;
};
    
// UICharInfo
struct S_S_r4r4_r4_
{
    struct S_r4r4_ p0;
    float p1;
};
    
// UILineInfo
struct S_i4i4r4r4_
{
    int32_t p0;
    int32_t p1;
    float p2;
    float p3;
};
    
// UIVertex
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4r4_S_i4u1u1u1u1_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_i4u1u1u1u1_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4r4_ p5;
    struct S_r4r4r4r4_ p6;
    struct S_r4r4r4r4_ p7;
};
    
// TileData
struct S_i4S_r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_i4i4i4_
{
    int32_t p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// TileChangeData
struct S_S_i4i4i4_oS_r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__
{
    struct S_i4i4i4_ p0;
    Il2CppObject* p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p3;
};
    
// TileAnimationData
struct S_or4r4i4_
{
    Il2CppObject* p0;
    float p1;
    float p2;
    int32_t p3;
};
    
// BackgroundPosition
struct S_i4S_r4i4__
{
    int32_t p0;
    struct S_r4i4_ p1;
};
    
// BackgroundSize
struct S_i4S_r4i4_S_r4i4__
{
    int32_t p0;
    struct S_r4i4_ p1;
    struct S_r4i4_ p2;
};
    
// BMPAlloc
struct S_i4u2u1u1_
{
    int32_t p0;
    uint16_t p1;
    uint8_t p2;
    uint8_t p3;
};
    
// RenderChainVEData
struct S_ooooooi4i4i4u4oooobbbbbbi4i4i4booS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_i4i4S_i4u2u1u1_S_i4u2u1u1_S_i4u2u1u1_S_i4u2u1u1_S_i4u2u1u1_S_i4u2u1u1_S_i4u2u1u1_S_i4u2u1u1_S_i4u2u1u1_S_i4u2u1u1_S_i4u2u1u1_r4S_r4r4r4r4_o_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    uint32_t p9;
    Il2CppObject* p10;
    Il2CppObject* p11;
    Il2CppObject* p12;
    Il2CppObject* p13;
    bool p14;
    bool p15;
    bool p16;
    bool p17;
    bool p18;
    bool p19;
    int32_t p20;
    int32_t p21;
    int32_t p22;
    bool p23;
    Il2CppObject* p24;
    Il2CppObject* p25;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p26;
    int32_t p27;
    int32_t p28;
    struct S_i4u2u1u1_ p29;
    struct S_i4u2u1u1_ p30;
    struct S_i4u2u1u1_ p31;
    struct S_i4u2u1u1_ p32;
    struct S_i4u2u1u1_ p33;
    struct S_i4u2u1u1_ p34;
    struct S_i4u2u1u1_ p35;
    struct S_i4u2u1u1_ p36;
    struct S_i4u2u1u1_ p37;
    struct S_i4u2u1u1_ p38;
    struct S_i4u2u1u1_ p39;
    float p40;
    struct S_r4r4r4r4_ p41;
    Il2CppObject* p42;
};
    
// ComputedStyle
struct S_S_o_S_o_S_o_S_o_S_o_S_o_ooi8r4o_
{
    struct S_o_ p0;
    struct S_o_ p1;
    struct S_o_ p2;
    struct S_o_ p3;
    struct S_o_ p4;
    struct S_o_ p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    int64_t p8;
    float p9;
    Il2CppObject* p10;
};
    
// EnumData
struct S_ooooobobb_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    bool p5;
    Il2CppObject* p6;
    bool p7;
    bool p8;
};
    
// Cursor
struct S_oS_r4r4_i4_
{
    Il2CppObject* p0;
    struct S_r4r4_ p1;
    int32_t p2;
};
    
// GUIGlobals
struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_bbi4_
{
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    bool p4;
    bool p5;
    int32_t p6;
};
    
// Vertex
struct S_S_r4r4r4_S_i4u1u1u1u1_S_r4r4_S_i4u1u1u1u1_S_i4u1u1u1u1_S_i4u1u1u1u1_S_i4u1u1u1u1_S_i4u1u1u1u1_S_r4r4r4r4_r4_
{
    struct S_r4r4r4_ p0;
    struct S_i4u1u1u1u1_ p1;
    struct S_r4r4_ p2;
    struct S_i4u1u1u1u1_ p3;
    struct S_i4u1u1u1u1_ p4;
    struct S_i4u1u1u1u1_ p5;
    struct S_i4u1u1u1u1_ p6;
    struct S_i4u1u1u1u1_ p7;
    struct S_r4r4r4r4_ p8;
    float p9;
};
    
// NativeSlice`1
struct S_Pvi4i4i4i4S_pi4i4__
{
    void* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    struct S_pi4i4_ p5;
};
    
// TimerState
struct S_i8i8_
{
    int64_t p0;
    int64_t p1;
};
    
// Rotate
struct S_S_r4i4_S_r4r4r4_b_
{
    struct S_r4i4_ p0;
    struct S_r4r4r4_ p1;
    bool p2;
};
    
// Scale
struct S_S_r4r4r4_b_
{
    struct S_r4r4r4_ p0;
    bool p1;
};
    
// StyleBackground
struct S_S_oooo_i4_
{
    struct S_oooo_ p0;
    int32_t p1;
};
    
// StyleBackgroundPosition
struct S_S_i4S_r4i4__i4_
{
    struct S_i4S_r4i4__ p0;
    int32_t p1;
};
    
// StyleBackgroundRepeat
struct S_S_i4i4_i4_
{
    struct S_i4i4_ p0;
    int32_t p1;
};
    
// StyleBackgroundSize
struct S_S_i4S_r4i4_S_r4i4__i4_
{
    struct S_i4S_r4i4_S_r4i4__ p0;
    int32_t p1;
};
    
// StyleColor
struct S_S_r4r4r4r4_i4_
{
    struct S_r4r4r4r4_ p0;
    int32_t p1;
};
    
// StyleCursor
struct S_S_oS_r4r4_i4_i4_
{
    struct S_oS_r4r4_i4_ p0;
    int32_t p1;
};
    
// StyleFontDefinition
struct S_i4S_oo__
{
    int32_t p0;
    struct S_oo_ p1;
};
    
// StyleLength
struct S_S_r4i4_i4_
{
    struct S_r4i4_ p0;
    int32_t p1;
};
    
// StyleRotate
struct S_S_S_r4i4_S_r4r4r4_b_i4_
{
    struct S_S_r4i4_S_r4r4r4_b_ p0;
    int32_t p1;
};
    
// StyleScale
struct S_S_S_r4r4r4_b_i4_
{
    struct S_S_r4r4r4_b_ p0;
    int32_t p1;
};
    
// Translate
struct S_S_r4i4_S_r4i4_r4b_
{
    struct S_r4i4_ p0;
    struct S_r4i4_ p1;
    float p2;
    bool p3;
};
    
// StyleTranslate
struct S_S_S_r4i4_S_r4i4_r4b_i4_
{
    struct S_S_r4i4_S_r4i4_r4b_ p0;
    int32_t p1;
};
    
// TextShadow
struct S_S_r4r4_r4S_r4r4r4r4__
{
    struct S_r4r4_ p0;
    float p1;
    struct S_r4r4r4r4_ p2;
};
    
// StyleTextShadow
struct S_i4S_S_r4r4_r4S_r4r4r4r4___
{
    int32_t p0;
    struct S_S_r4r4_r4S_r4r4r4r4__ p1;
};
    
// TransformOrigin
struct S_S_r4i4_S_r4i4_r4_
{
    struct S_r4i4_ p0;
    struct S_r4i4_ p1;
    float p2;
};
    
// StyleTransformOrigin
struct S_S_S_r4i4_S_r4i4_r4_i4_
{
    struct S_S_r4i4_S_r4i4_r4_ p0;
    int32_t p1;
};
    
// StylePropertyName
struct S_i4s_
{
    int32_t p0;
    Il2CppString* p1;
};
    
// VFXCameraXRSettings
struct S_u4u4u4_
{
    uint32_t p0;
    uint32_t p1;
    uint32_t p2;
};
    
// VFXBatchedEffectInfo
struct S_ou4u4u4u4u4u4u8u8_
{
    Il2CppObject* p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
    uint32_t p4;
    uint32_t p5;
    uint32_t p6;
    uint64_t p7;
    uint64_t p8;
};
    
// VFXParticleSystemInfo
struct S_u4u4bS_S_r4r4r4_S_r4r4r4___
{
    uint32_t p0;
    uint32_t p1;
    bool p2;
    struct S_S_r4r4r4_S_r4r4r4__ p3;
};
    
// WheelHit
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4o_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4_ p2;
    struct S_r4r4r4_ p3;
    float p4;
    float p5;
    float p6;
    Il2CppObject* p7;
};
    
// XRNodeState
struct S_i4i4S_r4r4r4_S_r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_i4u8_
{
    int32_t p0;
    int32_t p1;
    struct S_r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4_ p4;
    struct S_r4r4r4_ p5;
    struct S_r4r4r4_ p6;
    struct S_r4r4r4_ p7;
    int32_t p8;
    uint64_t p9;
};
    
// HapticCapabilities
struct S_u4bbu4u4u4_
{
    uint32_t p0;
    bool p1;
    bool p2;
    uint32_t p3;
    uint32_t p4;
    uint32_t p5;
};
    
// InputDevice
struct S_u8b_
{
    uint64_t p0;
    bool p1;
};
    
// Hand
struct S_u8u4_
{
    uint64_t p0;
    uint32_t p1;
};
    
// MeshGenerationResult
struct S_S_u8u8_ooi4i4u8S_r4r4r4_S_r4r4r4r4_S_r4r4r4__
{
    struct S_u8u8_ p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    int32_t p3;
    int32_t p4;
    uint64_t p5;
    struct S_r4r4r4_ p6;
    struct S_r4r4r4r4_ p7;
    struct S_r4r4r4_ p8;
};
    
// MeshInfo
struct S_S_u8u8_i4i4_
{
    struct S_u8u8_ p0;
    int32_t p1;
    int32_t p2;
};
    
// MeshTransform
struct S_S_u8u8_u8S_r4r4r4_S_r4r4r4r4_S_r4r4r4__
{
    struct S_u8u8_ p0;
    uint64_t p1;
    struct S_r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4_ p4;
};
    
// ProfilerCounterDescriptor
struct S_ss_
{
    Il2CppString* p0;
    Il2CppString* p1;
};
    
// ProfilerColorDescriptor
struct S_S_r4r4r4r4_b_
{
    struct S_r4r4r4r4_ p0;
    bool p1;
};
    
// NativeProfilerTimeline_InitializeArgs
struct S_r4r4r4r4r4poi4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    float p4;
    void* p5;
    Il2CppObject* p6;
    int32_t p7;
};
    
// NativeProfilerTimeline_DrawArgs
struct S_i4i4r4S_r4r4r4r4_S_r4r4r4r4_i4i4_
{
    int32_t p0;
    int32_t p1;
    float p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    int32_t p5;
    int32_t p6;
};
    
// NativeProfilerTimeline_GetEntryAtPositionArgs
struct S_i4i4r4S_r4r4r4r4_S_r4r4r4r4_S_r4r4_i4r4s_
{
    int32_t p0;
    int32_t p1;
    float p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4_ p5;
    int32_t p6;
    float p7;
    Il2CppString* p8;
};
    
// NativeProfilerTimeline_GetEntryInstanceInfoArgs
struct S_i4i4i4i4soss_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    Il2CppString* p4;
    Il2CppObject* p5;
    Il2CppString* p6;
    Il2CppString* p7;
};
    
// NativeProfilerTimeline_GetEntryTimingInfoArgs
struct S_i4i4i4br4r4r4i4r4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    bool p3;
    float p4;
    float p5;
    float p6;
    int32_t p7;
    float p8;
    int32_t p9;
    int32_t p10;
};
    
// NativeProfilerTimeline_GetEntryPositionInfoArgs
struct S_i4i4i4r4S_r4r4r4r4_S_r4r4r4r4_S_r4r4_S_r4r4_i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    float p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4r4_ p5;
    struct S_r4r4_ p6;
    struct S_r4r4_ p7;
    int32_t p8;
};
    
// AudioProfilerGroupInfo
struct S_i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    float p8;
    float p9;
    float p10;
    float p11;
    float p12;
    float p13;
    float p14;
    float p15;
};
    
// AudioProfilerDSPInfo
struct S_i4i4i4i4i4r4r4r4r4i4i4i4r4r4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    float p5;
    float p6;
    float p7;
    float p8;
    int32_t p9;
    int32_t p10;
    int32_t p11;
    float p12;
    float p13;
};
    
// AudioProfilerClipInfo
struct S_i4i4i4i4i4i4i4i4i4u8_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    uint64_t p9;
};
    
// UISystemProfilerInfo
struct S_i4i4i4i4i4i4i4bi4i4i4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    bool p7;
    int32_t p8;
    int32_t p9;
    int32_t p10;
    int32_t p11;
    int32_t p12;
};
    
// ObjectReferenceKeyframe
struct S_r4o_
{
    float p0;
    Il2CppObject* p1;
};
    
// EventInterests
struct S_bbb_
{
    bool p0;
    bool p1;
    bool p2;
};
    
// EditorCurveBinding
struct S_sosi4i4i4i4i4i4i4_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    Il2CppString* p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    int32_t p9;
};
    
// SpriteMetaData
struct S_sS_r4r4r4r4_i4S_r4r4_S_r4r4r4r4__
{
    Il2CppString* p0;
    struct S_r4r4r4r4_ p1;
    int32_t p2;
    struct S_r4r4_ p3;
    struct S_r4r4r4r4_ p4;
};
    
// AssetBundleBuild
struct S_ssoo_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
};
    
// BuildPlayerOptions
struct S_ossi4i4i4i4o_
{
    Il2CppObject* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    Il2CppObject* p7;
};
    
// BuildAssetBundlesParameters
struct S_soi4i4i4_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
};
    
// CameraProjectionCache
struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4_r4_
{
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    float p2;
};
    
// DataModeChangeEventArgs
struct S_i4b_
{
    int32_t p0;
    bool p1;
};
    
// GUID
struct S_u4u4u4u4_
{
    uint32_t p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
};
    
// ManagedReferenceMissingType
struct S_sssi8s_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    int64_t p3;
    Il2CppString* p4;
};
    
// GlobalObjectId
struct S_S_u8u8_S_u4u4u4u4_i4_
{
    struct S_u8u8_ p0;
    struct S_u4u4u4u4_ p1;
    int32_t p2;
};
    
// PackageInfo
struct S_sss_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
};
    
// CameraMode
struct S_i4ss_
{
    int32_t p0;
    Il2CppString* p1;
    Il2CppString* p2;
};
    
// ShaderInfo
struct S_sbbb_
{
    Il2CppString* p0;
    bool p1;
    bool p2;
    bool p3;
};
    
// ShaderMessage
struct S_sssi4i4i4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// ChangeGameObjectParentEventArgs
struct S_i4i4i4S_i4_S_i4__
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    struct S_i4_ p3;
    struct S_i4_ p4;
};
    
// ChangeChildrenOrderEventArgs
struct S_i4S_i4__
{
    int32_t p0;
    struct S_i4_ p1;
};
    
// ChangeSceneEventArgs
struct S_S_i4__
{
    struct S_i4_ p0;
};
    
// DestroyGameObjectHierarchyEventArgs
struct S_i4i4S_i4__
{
    int32_t p0;
    int32_t p1;
    struct S_i4_ p2;
};
    
// CreateAssetObjectEventArgs
struct S_S_u4u4u4u4_i4S_i4__
{
    struct S_u4u4u4u4_ p0;
    int32_t p1;
    struct S_i4_ p2;
};
    
// ReadOnly
struct S_Pvi4S_pi4i4__
{
    void* p0;
    int32_t p1;
    struct S_pi4i4_ p2;
};
    
// UpdatePrefabInstancesEventArgs
struct S_S_i4_S_Pvi4S_pi4i4___
{
    struct S_i4_ p0;
    struct S_Pvi4S_pi4i4__ p1;
};
    
// ObjectChangeEventStream
struct S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__
{
    struct S_Pvi4i4i4S_pi4i4_i4_ p0;
    struct S_Pvi4i4i4S_pi4i4_i4_ p1;
};
    
// UndoPropertyModification
struct S_ooi4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    int32_t p2;
};
    
// UnwrapParam
struct S_r4r4r4r4i4_
{
    float p0;
    float p1;
    float p2;
    float p3;
    int32_t p4;
};
    
// AudioImporterSampleSettings
struct S_i4i4u4i4r4i4b_
{
    int32_t p0;
    int32_t p1;
    uint32_t p2;
    int32_t p3;
    float p4;
    int32_t p5;
    bool p6;
};
    
// TakeInfo
struct S_ssr4r4r4r4r4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
};
    
// SketchUpImportCamera
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4_ p2;
    float p3;
    float p4;
    float p5;
    float p6;
    float p7;
    bool p8;
};
    
// SketchUpImportScene
struct S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_s_
{
    struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4b_ p0;
    Il2CppString* p1;
};
    
// ChannelClientScope
struct S_obo_
{
    Il2CppObject* p0;
    bool p1;
    Il2CppObject* p2;
};
    
// ChannelScope
struct S_bso_
{
    bool p0;
    Il2CppString* p1;
    Il2CppObject* p2;
};
    
// ChannelInfo
struct S_si4_
{
    Il2CppString* p0;
    int32_t p1;
};
    
// DetailBrushBounds
struct S_i4i4S_i4i4_S_i4i4_S_i4i4i4i4__
{
    int32_t p0;
    int32_t p1;
    struct S_i4i4_ p2;
    struct S_i4i4_ p3;
    struct S_i4i4i4i4_ p4;
};
    
// ShortcutBindingChangedEventArgs
struct S_sS_o_S_o__
{
    Il2CppString* p0;
    struct S_o_ p1;
    struct S_o_ p2;
};
    
// VirtualMachineInformation
struct S_i4i4i4i4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// PackedNativeUnityEngineObject
struct S_si4i4i4i4i4i8_
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int64_t p6;
};
    
// MemorySection
struct S_ou8_
{
    Il2CppObject* p0;
    uint64_t p1;
};
    
// TypeDescription
struct S_ssooi4i4u8i4i4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    int32_t p4;
    int32_t p5;
    uint64_t p6;
    int32_t p7;
    int32_t p8;
};
    
// FieldDescription
struct S_si4i4b_
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
    bool p3;
};
    
// DefaultPreset
struct S_sob_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    bool p2;
};
    
// PresetType
struct S_i4os_
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppString* p2;
};
    
// Sample
struct S_ssssbooos_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    Il2CppString* p3;
    bool p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    Il2CppString* p8;
};
    
// AtlasSettings
struct S_i4i4i4i4i4i4u4i4bbb_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    uint32_t p6;
    int32_t p7;
    bool p8;
    bool p9;
    bool p10;
};
    
// AdvancedObjectSelectorParameters
struct S_ooos_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppString* p3;
};
    
// ObjectSelectorTargetInfo
struct S_S_S_u8u8_S_u4u4u4u4_i4_oo_
{
    struct S_S_u8u8_S_u4u4u4u4_i4_ p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
};
    
// ProfilerCategoryInfo
struct S_u2S_i4u1u1u1u1_su2_
{
    uint16_t p0;
    struct S_i4u1u1u1u1_ p1;
    Il2CppString* p2;
    uint16_t p3;
};
    
// MediaTime
struct S_i8S_i4i4__
{
    int64_t p0;
    struct S_i4i4_ p1;
};
    
// H264EncoderAttributes
struct S_u4u4i4_
{
    uint32_t p0;
    uint32_t p1;
    int32_t p2;
};
    
// VideoTrackEncoderAttributes
struct S_S_i4i4_u4u4u4i4bi4S_u4u4i4_S_u4i4__
{
    struct S_i4i4_ p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
    int32_t p4;
    bool p5;
    int32_t p6;
    struct S_u4u4i4_ p7;
    struct S_u4i4_ p8;
};
    
// VideoTrackAttributes
struct S_S_i4i4_u4u4bi4i4i4_
{
    struct S_i4i4_ p0;
    uint32_t p1;
    uint32_t p2;
    bool p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
};
    
// AudioTrackAttributes
struct S_S_i4i4_u2s_
{
    struct S_i4i4_ p0;
    uint16_t p1;
    Il2CppString* p2;
};
    
// UsbDevice
struct S_i4i4i4ss_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    Il2CppString* p3;
    Il2CppString* p4;
};
    
// DevDevice
struct S_ssssi4i4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    Il2CppString* p3;
    int32_t p4;
    int32_t p5;
};
    
// StageHandle
struct S_bS_i4__
{
    bool p0;
    struct S_i4_ p1;
};
    
// AssemblyDefinitionPlatform
struct S_ssi4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    int32_t p2;
};
    
// CompilerMessage
struct S_ssi4i4i4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
};
    
// AlbedoSwatchInfo
struct S_sS_r4r4r4r4_r4r4_
{
    Il2CppString* p0;
    struct S_r4r4r4r4_ p1;
    float p2;
    float p3;
};
    
// TierSettings
struct S_i4i4bbbbbbbbi4i4_
{
    int32_t p0;
    int32_t p1;
    bool p2;
    bool p3;
    bool p4;
    bool p5;
    bool p6;
    bool p7;
    bool p8;
    bool p9;
    int32_t p10;
    int32_t p11;
};
    
// PlatformShaderSettings
struct S_bbbi4_
{
    bool p0;
    bool p1;
    bool p2;
    int32_t p3;
};
    
// ShaderSnippetData
struct S_i4i4sS_u4u4__
{
    int32_t p0;
    int32_t p1;
    Il2CppString* p2;
    struct S_u4u4_ p3;
};
    
// ShaderCompilerData
struct S_S_pppu8_S_u8_i8i4i4i4_
{
    struct S_pppu8_ p0;
    struct S_u8_ p1;
    int64_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// BuildFile
struct S_u4ssbu8_
{
    uint32_t p0;
    Il2CppString* p1;
    Il2CppString* p2;
    bool p3;
    uint64_t p4;
};
    
// BuildStep
struct S_su8oi4_
{
    Il2CppString* p0;
    uint64_t p1;
    Il2CppObject* p2;
    int32_t p3;
};
    
// BuildSummary
struct S_i8S_u4u4u4u4_i4i4i4i4i4su4u8u8i4i4i4i4_
{
    int64_t p0;
    struct S_u4u4u4u4_ p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    Il2CppString* p7;
    uint32_t p8;
    uint64_t p9;
    uint64_t p10;
    int32_t p11;
    int32_t p12;
    int32_t p13;
    int32_t p14;
};
    
// PackedAssetInfo
struct S_i8ou8u8S_u4u4u4u4_s_
{
    int64_t p0;
    Il2CppObject* p1;
    uint64_t p2;
    uint64_t p3;
    struct S_u4u4u4u4_ p4;
    Il2CppString* p5;
};
    
// ScriptCompilationSettings
struct S_i4i4i4i4oo_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
};
    
// SerializedLocation
struct S_su8u8_
{
    Il2CppString* p0;
    uint64_t p1;
    uint64_t p2;
};
    
// ObjectIdentifier
struct S_S_u4u4u4u4_i8i4s_
{
    struct S_u4u4u4u4_ p0;
    int64_t p1;
    int32_t p2;
    Il2CppString* p3;
};
    
// ObjectSerializedInfo
struct S_S_S_u4u4u4u4_i8i4s_S_su8u8_S_su8u8__
{
    struct S_S_u4u4u4u4_i8i4s_ p0;
    struct S_su8u8_ p1;
    struct S_su8u8_ p2;
};
    
// ExternalFileReference
struct S_si4S_u4u4u4u4__
{
    Il2CppString* p0;
    int32_t p1;
    struct S_u4u4u4u4_ p2;
};
    
// WriteResult
struct S_ooooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
};
    
// BuildSettings
struct S_oS_i4i4i4i4_i4i4_
{
    Il2CppObject* p0;
    struct S_i4i4i4i4_ p1;
    int32_t p2;
    int32_t p3;
};
    
// BuildUsageTagGlobal
struct S_u4u4u4u4u4bbbbbbb_
{
    uint32_t p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
    uint32_t p4;
    bool p5;
    bool p6;
    bool p7;
    bool p8;
    bool p9;
    bool p10;
    bool p11;
};
    
// ContentBuildProfileEvent
struct S_u8ssi4_
{
    uint64_t p0;
    Il2CppString* p1;
    Il2CppString* p2;
    int32_t p3;
};
    
// ResourceFile
struct S_ssb_
{
    Il2CppString* p0;
    Il2CppString* p1;
    bool p2;
};
    
// SceneDependencyInfo
struct S_sooS_u4u4u4u4u4bbbbbbb__
{
    Il2CppString* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    struct S_u4u4u4u4u4bbbbbbb_ p3;
};
    
// WriteParameters
struct S_oS_oS_i4i4i4i4_i4i4_S_u4u4u4u4u4bbbbbbb_oooo_
{
    Il2CppObject* p0;
    struct S_oS_i4i4i4i4_i4i4_ p1;
    struct S_u4u4u4u4u4bbbbbbb_ p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
};
    
// WriteSceneParameters
struct S_soS_oS_i4i4i4i4_i4i4_S_u4u4u4u4u4bbbbbbb_oooo_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    struct S_oS_i4i4i4i4_i4i4_ p2;
    struct S_u4u4u4u4u4bbbbbbb_ p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
};
    
// WriteManagerParameters
struct S_S_oS_i4i4i4i4_i4i4_S_u4u4u4u4u4bbbbbbb_o_
{
    struct S_oS_i4i4i4i4_i4i4_ p0;
    struct S_u4u4u4u4u4bbbbbbb_ p1;
    Il2CppObject* p2;
};
    
// TexturePropertyDescription
struct S_S_r4r4_S_r4r4_oss_
{
    struct S_r4r4_ p0;
    struct S_r4r4_ p1;
    Il2CppObject* p2;
    Il2CppString* p3;
    Il2CppString* p4;
};
    
// SpriteImportData
struct S_sS_r4r4r4r4_i4S_r4r4_S_r4r4r4r4_r4so_
{
    Il2CppString* p0;
    struct S_r4r4r4r4_ p1;
    int32_t p2;
    struct S_r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    float p5;
    Il2CppString* p6;
    Il2CppObject* p7;
};
    
// TextureGenerationOutput
struct S_osooo_
{
    Il2CppObject* p0;
    Il2CppString* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
};
    
// TextureGenerationSettings
struct S_sbbooooso_
{
    Il2CppString* p0;
    bool p1;
    bool p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppString* p7;
    Il2CppObject* p8;
};
    
// ArtifactKey
struct S_S_u4u4u4u4_o_
{
    struct S_u4u4u4u4_ p0;
    Il2CppObject* p1;
};
    
// ArtifactID
struct S_S_u8u8__
{
    struct S_u8u8_ p0;
};
    
// SceneStateHash
struct S_S_u8u8_S_u8u8_S_u8u8__
{
    struct S_u8u8_ p0;
    struct S_u8u8_ p1;
    struct S_u8u8_ p2;
};
    
// CurveFilterOptions
struct S_r4r4r4r4bb_
{
    float p0;
    float p1;
    float p2;
    float p3;
    bool p4;
    bool p5;
};
    
// ChildMotion
struct S_or4S_r4r4_r4r4sb_
{
    Il2CppObject* p0;
    float p1;
    struct S_r4r4_ p2;
    float p3;
    float p4;
    Il2CppString* p5;
    bool p6;
};
    
// AnimatorCondition
struct S_i4sr4_
{
    int32_t p0;
    Il2CppString* p1;
    float p2;
};
    
// ChildAnimatorState
struct S_oS_r4r4r4__
{
    Il2CppObject* p0;
    struct S_r4r4r4_ p1;
};
    
// SpriteAtlasTextureSettings
struct S_i4i4i4i4i4bbbb_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    bool p5;
    bool p6;
    bool p7;
    bool p8;
};
    
// SpriteAtlasPackingSettings
struct S_i4i4bbbb_
{
    int32_t p0;
    int32_t p1;
    bool p2;
    bool p3;
    bool p4;
    bool p5;
};
    
// TouchEvent
struct S_i4S_r4r4_i4_
{
    int32_t p0;
    struct S_r4r4_ p1;
    int32_t p2;
};
    
// GraphViewChange
struct S_oooS_r4r4__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    struct S_r4r4_ p3;
};
    
// SearchWindowContext
struct S_S_r4r4_r4r4_
{
    struct S_r4r4_ p0;
    float p1;
    float p2;
};
    
// NodeCreationContext
struct S_S_r4r4_oi4_
{
    struct S_r4r4_ p0;
    Il2CppObject* p1;
    int32_t p2;
};
    
// CustomObjectIndexerTarget
struct S_oosi4o_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppString* p2;
    int32_t p3;
    Il2CppObject* p4;
};
    
// SearchDocument
struct S_si4ssi4_
{
    Il2CppString* p0;
    int32_t p1;
    Il2CppString* p2;
    Il2CppString* p3;
    int32_t p4;
};
    
// PropertyDatabaseRecordKey
struct S_u8S_u8u8__
{
    uint64_t p0;
    struct S_u8u8_ p1;
};
    
// QueryValidationOptions
struct S_bbbbb_
{
    bool p0;
    bool p1;
    bool p2;
    bool p3;
    bool p4;
};
    
// QueryFilterOperator
struct S_osi4o_
{
    Il2CppObject* p0;
    Il2CppString* p1;
    int32_t p2;
    Il2CppObject* p3;
};
    
// QueryToken
struct S_si4i4S_si4i4__
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
    struct S_si4i4_ p3;
};
    
// SearchExpressionEvaluator
struct S_sssoi4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    Il2CppObject* p3;
    int32_t p4;
};
    
// SearchExpressionContext
struct S_S_oooo_ooi4_
{
    struct S_oooo_ p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    int32_t p3;
};
    
// SearchColor
struct S_u1u1u1u1_
{
    uint8_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
};
    
// SearchValue
struct S_u1r8r4sS_r4r4r4r4_S_u1u1u1u1__
{
    uint8_t p0;
    double p1;
    float p2;
    Il2CppString* p3;
    struct S_r4r4r4r4_ p4;
    struct S_u1u1u1u1_ p5;
};
    
// SearchField
struct S_ssO_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppObject* p2;
};
    
// SearchMonitorView
struct S_oobb_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    bool p2;
    bool p3;
};
    
// SearchColumnEventArgs
struct S_oooObS_r4r4r4r4_bb_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    bool p4;
    struct S_r4r4r4r4_ p5;
    bool p6;
    bool p7;
};
    
// SearchColumnCompareArgs
struct S_S_oooObS_r4r4r4r4_bb_S_oooObS_r4r4r4r4_bb_b_
{
    struct S_oooObS_r4r4r4r4_bb_ p0;
    struct S_oooObS_r4r4r4r4_bb_ p1;
    bool p2;
};
    
// SearchProposition
struct S_sssi4i4osS_r4r4r4r4_oi4O_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    int32_t p3;
    int32_t p4;
    Il2CppObject* p5;
    Il2CppString* p6;
    struct S_r4r4r4r4_ p7;
    Il2CppObject* p8;
    int32_t p9;
    Il2CppObject* p10;
};
    
// Nullable`1
struct N_bS_s__
{
    bool hasValue;
    struct S_s_ p1;
};
    
// ECCurve
struct S_ooS_oo_oooi4N_bS_s__ooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    struct S_oo_ p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    int32_t p6;
    struct N_bS_s__ p7;
    Il2CppObject* p8;
    Il2CppObject* p9;
    Il2CppObject* p10;
};
    
// ECParameters
struct S_S_oo_oS_ooS_oo_oooi4N_bS_s__ooo__
{
    struct S_oo_ p0;
    Il2CppObject* p1;
    struct S_ooS_oo_oooi4N_bS_s__ooo_ p2;
};
    
// CngProperty
struct S_si4oN_bi4__
{
    Il2CppString* p0;
    int32_t p1;
    Il2CppObject* p2;
    struct N_bi4_ p3;
};
    
// QuerySettings
struct S_oN_bi4_oN_bi4_N_bi4_i4_
{
    Il2CppObject* p0;
    struct N_bi4_ p1;
    Il2CppObject* p2;
    struct N_bi4_ p3;
    struct N_bi4_ p4;
    int32_t p5;
};
    
// Flags
struct u8
{
    uint64_t p0;
};
    
// FORMATETC
struct S_i2i4i4pi4_
{
    int16_t p0;
    int32_t p1;
    int32_t p2;
    void* p3;
    int32_t p4;
};
    
// STATDATA
struct S_i4oi4S_i2i4i4pi4__
{
    int32_t p0;
    Il2CppObject* p1;
    int32_t p2;
    struct S_i2i4i4pi4_ p3;
};
    
// STGMEDIUM
struct S_Oi4p_
{
    Il2CppObject* p0;
    int32_t p1;
    void* p2;
};
    
// CounterSample
struct S_i8i8i8i8i8i8i8i4_
{
    int64_t p0;
    int64_t p1;
    int64_t p2;
    int64_t p3;
    int64_t p4;
    int64_t p5;
    int64_t p6;
    int32_t p7;
};
    
// WaitForChangedResult
struct S_i4ssb_
{
    int32_t p0;
    Il2CppString* p1;
    Il2CppString* p2;
    bool p3;
};
    
// AuthorizationState
struct S_obbi4_
{
    Il2CppObject* p0;
    bool p1;
    bool p2;
    int32_t p3;
};
    
// SocketInformation
struct S_oi4o_
{
    Il2CppObject* p0;
    int32_t p1;
    Il2CppObject* p2;
};
    
// SocketReceiveMessageFromResult
struct S_i4i4oS_oi4__
{
    int32_t p0;
    int32_t p1;
    Il2CppObject* p2;
    struct S_oi4_ p3;
};
    
// Nullable`1
struct N_bS_oi4i4__
{
    bool hasValue;
    struct S_oi4i4_ p1;
};
    
// SslApplicationProtocol
struct S_S_Oi4i4__
{
    struct S_Oi4i4_ p0;
};
    
// Nullable`1
struct N_bS_u8__
{
    bool hasValue;
    struct S_u8_ p1;
};
    
// SmallXmlNodeList
struct S_O_
{
    Il2CppObject* p0;
};
    
// XmlDeserializationEvents
struct S_ooooO_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
};
    
// ElementContentIterator
struct S_ssob_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppObject* p2;
    bool p3;
};
    
// NodeKindContentIterator
struct S_i4ob_
{
    int32_t p0;
    Il2CppObject* p1;
    bool p2;
};
    
// ContentMergeIterator
struct S_oooS_oi4_i4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    struct S_oi4_ p3;
    int32_t p4;
};
    
// DodSequenceMerge
struct S_ooi4o_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    int32_t p2;
    Il2CppObject* p3;
};
    
// UnionIterator
struct S_oooi4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    int32_t p3;
};
    
// FollowingSiblingMergeIterator
struct S_S_oooS_oi4_i4__
{
    struct S_oooS_oi4_i4_ p0;
};
    
// PrecedingSiblingDocOrderIterator
struct S_ooobb_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    bool p3;
    bool p4;
};
    
// StringConcat
struct S_sssssoi4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    Il2CppString* p3;
    Il2CppString* p4;
    Il2CppObject* p5;
    int32_t p6;
};
    
// DescendantIterator
struct S_ooob_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    bool p3;
};
    
// DescendantMergeIterator
struct S_ooooi4b_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    int32_t p4;
    bool p5;
};
    
// AncestorIterator
struct S_oob_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    bool p2;
};
    
// AncestorDocOrderIterator
struct S_S_oi4_o_
{
    struct S_oi4_ p0;
    Il2CppObject* p1;
};
    
// XPathFollowingMergeIterator
struct S_oi4oo_
{
    Il2CppObject* p0;
    int32_t p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
};
    
// XPathPrecedingDocOrderIterator
struct S_ooS_oi4__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    struct S_oi4_ p2;
};
    
// XPathPrecedingMergeIterator
struct S_oi4ooS_oi4__
{
    Il2CppObject* p0;
    int32_t p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    struct S_oi4_ p4;
};
    
// DecimalAggregator
struct S_S_i4i4i4i4u8_i4_
{
    struct S_i4i4i4i4u8_ p0;
    int32_t p1;
};
    
// DoubleAggregator
struct S_r8i4_
{
    double p0;
    int32_t p1;
};
    
// Union
struct S_br8i8i4S_u8__
{
    bool p0;
    double p1;
    int64_t p2;
    int32_t p3;
    struct S_u8_ p4;
};
    
// Complex
struct S_r8r8_
{
    double p0;
    double p1;
};
    
// SqlByte
struct S_bu1_
{
    bool p0;
    uint8_t p1;
};
    
// SqlDateTime
struct S_bi4i4_
{
    bool p0;
    int32_t p1;
    int32_t p2;
};
    
// SqlDecimal
struct S_u1u1u1u1u4u4u4u4_
{
    uint8_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint32_t p4;
    uint32_t p5;
    uint32_t p6;
    uint32_t p7;
};
    
// SqlDouble
struct S_br8_
{
    bool p0;
    double p1;
};
    
// SqlInt16
struct S_bi2_
{
    bool p0;
    int16_t p1;
};
    
// SqlInt32
struct S_bi4_
{
    bool p0;
    int32_t p1;
};
    
// SqlInt64
struct S_bi8_
{
    bool p0;
    int64_t p1;
};
    
// SqlSingle
struct S_br4_
{
    bool p0;
    float p1;
};
    
// SqlString
struct S_soi4i4b_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    int32_t p2;
    int32_t p3;
    bool p4;
};
    
// TransactionOptions
struct S_i4S_i8__
{
    int32_t p0;
    struct S_i8_ p1;
};
    
// Nullable`1
struct N_bS_i8__
{
    bool hasValue;
    struct S_i8_ p1;
};
    
// Nullable`1
struct N_bS_S_u8_i2__
{
    bool hasValue;
    struct S_S_u8_i2_ p1;
};
    
// Nullable`1
struct N_br8_
{
    bool hasValue;
    double p1;
};
    
// Nullable`1
struct N_bS_i4i4__
{
    bool hasValue;
    struct S_i4i4_ p1;
};
    
// ActiveBuildStatus
struct S_sN_bS_i4i4___
{
    Il2CppString* p0;
    struct N_bS_i4i4__ p1;
};
    
// BuildStartedMessage
struct S_S_i4i4S_i4___
{
    struct S_i4i4S_i4__ p0;
};
    
// NodeInfoMessageRaw
struct S_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4__
{
    int32_t p0;
    struct S_i4_ p1;
    struct S_i4_ p2;
    struct S_i4_ p3;
    struct S_i4_ p4;
    struct S_i4_ p5;
    struct S_i4_ p6;
};
    
// NodeInfo
struct S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4___
{
    Il2CppObject* p0;
    struct S_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4__ p1;
};
    
// Nullable`1
struct N_bS_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4____
{
    bool hasValue;
    struct S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4___ p1;
};
    
// NodeEnqueuedMessage
struct S_S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4___N_bS_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4_____
{
    struct S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4___ p0;
    struct N_bS_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4____ p1;
};
    
// NodeStartedMessage
struct S_S_i4i4_S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4___i4_
{
    struct S_i4i4_ p0;
    struct S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4___ p1;
    int32_t p2;
};
    
// NodeUpToDateMessage
struct S_S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4____
{
    struct S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4___ p0;
};
    
// NodeFinishedMessageRaw
struct S_i4i4i4i4S_i4_S_i4__
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    struct S_i4_ p4;
    struct S_i4_ p5;
};
    
// NodeFinishedMessage
struct S_oS_i4i4i4i4S_i4_S_i4__S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4____
{
    Il2CppObject* p0;
    struct S_i4i4i4i4S_i4_S_i4__ p1;
    struct S_oS_i4S_i4_S_i4_S_i4_S_i4_S_i4_S_i4___ p2;
};
    
// BuildFinishedMessage
struct S_oS_i4S_i4___
{
    Il2CppObject* p0;
    struct S_i4S_i4__ p1;
};
    
// RPCActionMessageRaw
struct S_i4S_i4_S_i4__
{
    int32_t p0;
    struct S_i4_ p1;
    struct S_i4_ p2;
};
    
// RPCActionMessage
struct S_oS_i4S_i4_S_i4___
{
    Il2CppObject* p0;
    struct S_i4S_i4_S_i4__ p1;
};
    
// Nullable`1
struct N_bS_r4r4__
{
    bool hasValue;
    struct S_r4r4_ p1;
};
    
// Nullable`1
struct N_br4_
{
    bool hasValue;
    float p1;
};
    
// SemVer2Version
struct S_si4i4i4oi4s_
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    Il2CppObject* p4;
    int32_t p5;
    Il2CppString* p6;
};
    
// Nullable`1
struct N_bS_si4i4i4oi4s__
{
    bool hasValue;
    struct S_si4i4i4oi4s_ p1;
};
    
// XRRenderPass
struct S_pi4S_i4i4i4pi4i4i4_S_i4i4i4i4i4i4i4i4i4i4i4i4i4_bS_i4i4i4pi4i4i4_S_i4i4i4i4i4i4i4i4i4i4i4i4i4_bi4p_
{
    void* p0;
    int32_t p1;
    struct S_i4i4i4pi4i4i4_ p2;
    struct S_i4i4i4i4i4i4i4i4i4i4i4i4i4_ p3;
    bool p4;
    struct S_i4i4i4pi4i4i4_ p5;
    struct S_i4i4i4i4i4i4i4i4i4i4i4i4i4_ p6;
    bool p7;
    int32_t p8;
    void* p9;
};
    
// XRPassCreateInfo
struct S_S_i4i4i4pi4i4i4_S_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_or4pi4i4bS_pi4S_i4i4i4pi4i4i4_S_i4i4i4i4i4i4i4i4i4i4i4i4i4_bS_i4i4i4pi4i4i4_S_i4i4i4i4i4i4i4i4i4i4i4i4i4_bi4p__
{
    struct S_i4i4i4pi4i4i4_ p0;
    struct S_i4i4i4i4i4i4i4i4i4i4i4i4i4_ p1;
    struct S_i4S_i4S_r4r4r4_r4r4i4_S_u1_i4u4u8u8S_r4_i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_r4r4i4i4S_S_r4r4r4r4_S_r4r4r4_r4r4r4r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4u4S_u1_S_u1_r4S_r4r4r4_S_r4_i4S_i4u4i4_u4i4i4_r4i4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_r4i4bi4_ p2;
    Il2CppObject* p3;
    float p4;
    void* p5;
    int32_t p6;
    int32_t p7;
    bool p8;
    struct S_pi4S_i4i4i4pi4i4i4_S_i4i4i4i4i4i4i4i4i4i4i4i4i4_bS_i4i4i4pi4i4i4_S_i4i4i4i4i4i4i4i4i4i4i4i4i4_bi4p_ p9;
};
    
// RenderGraphParameters
struct S_si4bS_pS_pi4i4__o_
{
    Il2CppString* p0;
    int32_t p1;
    bool p2;
    struct S_pS_pi4i4__ p3;
    Il2CppObject* p4;
};
    
// TextureHandle
struct S_S_u4i4__
{
    struct S_u4i4_ p0;
};
    
// ComputeBufferDesc
struct S_i4i4i4s_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    Il2CppString* p3;
};
    
// FastMemoryDesc
struct S_bi4r4_
{
    bool p0;
    int32_t p1;
    float p2;
};
    
// TextureDesc
struct S_i4i4i4i4S_r4r4_oi4i4i4i4i4bbbbi4r4i4bbi4i4sS_bi4r4_bbbS_r4r4r4r4__
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    struct S_r4r4_ p4;
    Il2CppObject* p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    int32_t p9;
    int32_t p10;
    bool p11;
    bool p12;
    bool p13;
    bool p14;
    int32_t p15;
    float p16;
    int32_t p17;
    bool p18;
    bool p19;
    int32_t p20;
    int32_t p21;
    Il2CppString* p22;
    struct S_bi4r4_ p23;
    bool p24;
    bool p25;
    bool p26;
    struct S_r4r4r4r4_ p27;
};
    
// GlobalDynamicResolutionSettings
struct S_bbbu4i4br4br4r4r4u1u1br4r4r4r4r4_
{
    bool p0;
    bool p1;
    bool p2;
    uint32_t p3;
    int32_t p4;
    bool p5;
    float p6;
    bool p7;
    float p8;
    float p9;
    float p10;
    uint8_t p11;
    uint8_t p12;
    bool p13;
    float p14;
    float p15;
    float p16;
    float p17;
    float p18;
};
    
// ProfilingSample
struct S_osbo_
{
    Il2CppObject* p0;
    Il2CppString* p1;
    bool p2;
    Il2CppObject* p3;
};
    
// ShaderDebugPrintInput
struct S_S_r4r4_bbb_
{
    struct S_r4r4_ p0;
    bool p1;
    bool p2;
    bool p3;
};
    
// ProbeVolumeSystemParameters
struct S_i4i4ooooooi4bb_
{
    int32_t p0;
    int32_t p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    int32_t p8;
    bool p9;
    bool p10;
};
    
// ProbeVolumeShadingParameters
struct S_r4r4br4r4i4r4r4i4r4r4_
{
    float p0;
    float p1;
    bool p2;
    float p3;
    float p4;
    int32_t p5;
    float p6;
    float p7;
    int32_t p8;
    float p9;
    float p10;
};
    
// RefVolTransform
struct S_S_r4r4r4_S_r4r4r4r4_r4_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    float p2;
};
    
// DataLocation
struct S_ooooooooi4i4i4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    int32_t p8;
    int32_t p9;
    int32_t p10;
};
    
// ProbeDilationSettings
struct S_br4r4i4b_
{
    bool p0;
    float p1;
    float p2;
    int32_t p3;
    bool p4;
};
    
// VirtualOffsetSettings
struct S_br4r4r4i4S_i4__
{
    bool p0;
    float p1;
    float p2;
    float p3;
    int32_t p4;
    struct S_i4_ p5;
};
    
// ProbeVolumeBakingProcessSettings
struct S_i4S_br4r4i4b_S_br4r4r4i4S_i4___
{
    int32_t p0;
    struct S_br4r4i4b_ p1;
    struct S_br4r4r4i4S_i4__ p2;
};
    
// SphericalHarmonicsL1
struct S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
};
    
// RTHandleProperties
struct S_S_i4i4_S_i4i4_S_i4i4_S_i4i4_S_r4r4r4r4__
{
    struct S_i4i4_ p0;
    struct S_i4i4_ p1;
    struct S_i4i4_ p2;
    struct S_i4i4_ p3;
    struct S_r4r4r4r4_ p4;
};
    
// SHCoefficients
struct S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4r4r4_ p5;
    struct S_r4r4r4r4_ p6;
    struct S_r4r4r4r4_ p7;
};
    
// BatchRendererGroupGlobals
struct S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4___
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__ p3;
};
    
// BitArray256
struct S_u8u8u8u8_
{
    uint64_t p0;
    uint64_t p1;
    uint64_t p2;
    uint64_t p3;
};
    
// Sky
struct S_or4r4_
{
    Il2CppObject* p0;
    float p1;
    float p2;
};
    
// Navigation
struct S_i4boooo_
{
    int32_t p0;
    bool p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
};
    
// ColorBlock
struct S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_r4r4_
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    float p5;
    float p6;
};
    
// Light2DBlendStyle
struct S_si4i4bbi4o_
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
    bool p3;
    bool p4;
    int32_t p5;
    Il2CppObject* p6;
};
    
// RTHandleRenderTargetIdentifierCompat
struct S_oS_i4i4i4pi4i4i4__
{
    Il2CppObject* p0;
    struct S_i4i4i4pi4i4i4_ p1;
};
    
// RenderTargetHandle
struct S_i4S_i4i4i4pi4i4i4__
{
    int32_t p0;
    struct S_i4i4i4pi4i4i4_ p1;
};
    
// ShadowSliceData
struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_i4i4i4S_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4___
{
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p1;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    struct S_i4S_u1_S_r4r4r4r4_r4r4S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__ p6;
};
    
// Settings
struct S_i4r4r4r4r4r4i4i4_
{
    int32_t p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    int32_t p6;
    int32_t p7;
};
    
// CameraData
struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_
{
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p1;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p2;
    Il2CppObject* p3;
    int32_t p4;
    Il2CppObject* p5;
    struct S_i4i4i4i4i4i4i4i4i4i4i4i4i4_ p6;
    struct S_r4r4r4r4_ p7;
    bool p8;
    struct S_r4r4r4r4_ p9;
    struct S_r4r4r4r4_ p10;
    int32_t p11;
    int32_t p12;
    float p13;
    float p14;
    int32_t p15;
    int32_t p16;
    bool p17;
    float p18;
    int32_t p19;
    bool p20;
    int32_t p21;
    bool p22;
    bool p23;
    bool p24;
    bool p25;
    bool p26;
    bool p27;
    bool p28;
    bool p29;
    int32_t p30;
    Il2CppObject* p31;
    bool p32;
    float p33;
    bool p34;
    bool p35;
    Il2CppObject* p36;
    struct S_i4_ p37;
    Il2CppObject* p38;
    bool p39;
    bool p40;
    int32_t p41;
    int32_t p42;
    Il2CppObject* p43;
    bool p44;
    struct S_r4r4r4_ p45;
    struct S_r4r4r4r4_ p46;
    Il2CppObject* p47;
    struct S_i4r4r4r4r4r4i4i4_ p48;
    Il2CppObject* p49;
};
    
// LightData
struct S_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    struct S_Pvi4i4i4S_pi4i4_i4_ p3;
    bool p4;
    bool p5;
    bool p6;
    bool p7;
    bool p8;
    bool p9;
};
    
// ShadowData
struct S_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_
{
    bool p0;
    bool p1;
    bool p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    struct S_r4r4r4_ p6;
    float p7;
    bool p8;
    bool p9;
    int32_t p10;
    int32_t p11;
    bool p12;
    int32_t p13;
    Il2CppObject* p14;
    Il2CppObject* p15;
    bool p16;
    bool p17;
};
    
// PostProcessingData
struct S_i4i4bb_
{
    int32_t p0;
    int32_t p1;
    bool p2;
    bool p3;
};
    
// RenderingData
struct S_oS_pPvS_pi4i4__S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_S_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_S_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_S_i4i4bb_bi4b_
{
    Il2CppObject* p0;
    struct S_pPvS_pi4i4__ p1;
    struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_oi4oS_i4i4i4i4i4i4i4i4i4i4i4i4i4_S_r4r4r4r4_bS_r4r4r4r4_S_r4r4r4r4_i4i4r4r4i4i4br4i4bi4bbbbbbbbi4obr4bboS_i4_obbi4i4obS_r4r4r4_S_r4r4r4r4_oS_i4r4r4r4r4r4i4i4_o_ p2;
    struct S_i4i4i4S_Pvi4i4i4S_pi4i4_i4_bbbbbb_ p3;
    struct S_bbbi4i4i4S_r4r4r4_r4bbi4i4bi4oobb_ p4;
    struct S_i4i4bb_ p5;
    bool p6;
    int32_t p7;
    bool p8;
};
    
// PreTile
struct S_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4__
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
};
    
// PunctualLightData
struct S_S_r4r4r4_r4S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4_i4S_r4r4r4r4_u4_
{
    struct S_r4r4r4_ p0;
    float p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4_ p4;
    int32_t p5;
    struct S_r4r4r4r4_ p6;
    uint32_t p7;
};
    
// BuddyAllocator
struct S_PvS_i4i4_S_i4i4_S_i4i4_i4S_pi4i4__
{
    void* p0;
    struct S_i4i4_ p1;
    struct S_i4i4_ p2;
    struct S_i4i4_ p3;
    int32_t p4;
    struct S_pi4i4_ p5;
};
    
// ReflectionProbeManager
struct S_S_i4i4_ooS_PvS_i4i4_S_i4i4_S_i4i4_i4S_pi4i4__oooooooo_
{
    struct S_i4i4_ p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    struct S_PvS_i4i4_S_i4i4_S_i4i4_i4S_pi4i4__ p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    Il2CppObject* p9;
    Il2CppObject* p10;
    Il2CppObject* p11;
};
    
// v64
struct S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_
{
    uint8_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
    uint8_t p7;
    int8_t p8;
    int8_t p9;
    int8_t p10;
    int8_t p11;
    int8_t p12;
    int8_t p13;
    int8_t p14;
    int8_t p15;
    uint16_t p16;
    uint16_t p17;
    uint16_t p18;
    uint16_t p19;
    int16_t p20;
    int16_t p21;
    int16_t p22;
    int16_t p23;
    uint32_t p24;
    uint32_t p25;
    int32_t p26;
    int32_t p27;
    uint64_t p28;
    int64_t p29;
    float p30;
    float p31;
    double p32;
};
    
// v128
struct S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__
{
    uint8_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
    uint8_t p7;
    uint8_t p8;
    uint8_t p9;
    uint8_t p10;
    uint8_t p11;
    uint8_t p12;
    uint8_t p13;
    uint8_t p14;
    uint8_t p15;
    int8_t p16;
    int8_t p17;
    int8_t p18;
    int8_t p19;
    int8_t p20;
    int8_t p21;
    int8_t p22;
    int8_t p23;
    int8_t p24;
    int8_t p25;
    int8_t p26;
    int8_t p27;
    int8_t p28;
    int8_t p29;
    int8_t p30;
    int8_t p31;
    uint16_t p32;
    uint16_t p33;
    uint16_t p34;
    uint16_t p35;
    uint16_t p36;
    uint16_t p37;
    uint16_t p38;
    uint16_t p39;
    int16_t p40;
    int16_t p41;
    int16_t p42;
    int16_t p43;
    int16_t p44;
    int16_t p45;
    int16_t p46;
    int16_t p47;
    uint32_t p48;
    uint32_t p49;
    uint32_t p50;
    uint32_t p51;
    int32_t p52;
    int32_t p53;
    int32_t p54;
    int32_t p55;
    uint64_t p56;
    uint64_t p57;
    int64_t p58;
    int64_t p59;
    float p60;
    float p61;
    float p62;
    float p63;
    double p64;
    double p65;
    struct S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_ p66;
    struct S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_ p67;
};
    
// v256
struct S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2i2i2i2i2i2i2i2i2u4u4u4u4u4u4u4u4i4i4i4i4i4i4i4i4u8u8u8u8i8i8i8i8r4r4r4r4r4r4r4r4r8r8r8r8S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8___
{
    uint8_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
    uint8_t p7;
    uint8_t p8;
    uint8_t p9;
    uint8_t p10;
    uint8_t p11;
    uint8_t p12;
    uint8_t p13;
    uint8_t p14;
    uint8_t p15;
    uint8_t p16;
    uint8_t p17;
    uint8_t p18;
    uint8_t p19;
    uint8_t p20;
    uint8_t p21;
    uint8_t p22;
    uint8_t p23;
    uint8_t p24;
    uint8_t p25;
    uint8_t p26;
    uint8_t p27;
    uint8_t p28;
    uint8_t p29;
    uint8_t p30;
    uint8_t p31;
    int8_t p32;
    int8_t p33;
    int8_t p34;
    int8_t p35;
    int8_t p36;
    int8_t p37;
    int8_t p38;
    int8_t p39;
    int8_t p40;
    int8_t p41;
    int8_t p42;
    int8_t p43;
    int8_t p44;
    int8_t p45;
    int8_t p46;
    int8_t p47;
    int8_t p48;
    int8_t p49;
    int8_t p50;
    int8_t p51;
    int8_t p52;
    int8_t p53;
    int8_t p54;
    int8_t p55;
    int8_t p56;
    int8_t p57;
    int8_t p58;
    int8_t p59;
    int8_t p60;
    int8_t p61;
    int8_t p62;
    int8_t p63;
    uint16_t p64;
    uint16_t p65;
    uint16_t p66;
    uint16_t p67;
    uint16_t p68;
    uint16_t p69;
    uint16_t p70;
    uint16_t p71;
    uint16_t p72;
    uint16_t p73;
    uint16_t p74;
    uint16_t p75;
    uint16_t p76;
    uint16_t p77;
    uint16_t p78;
    uint16_t p79;
    int16_t p80;
    int16_t p81;
    int16_t p82;
    int16_t p83;
    int16_t p84;
    int16_t p85;
    int16_t p86;
    int16_t p87;
    int16_t p88;
    int16_t p89;
    int16_t p90;
    int16_t p91;
    int16_t p92;
    int16_t p93;
    int16_t p94;
    int16_t p95;
    uint32_t p96;
    uint32_t p97;
    uint32_t p98;
    uint32_t p99;
    uint32_t p100;
    uint32_t p101;
    uint32_t p102;
    uint32_t p103;
    int32_t p104;
    int32_t p105;
    int32_t p106;
    int32_t p107;
    int32_t p108;
    int32_t p109;
    int32_t p110;
    int32_t p111;
    uint64_t p112;
    uint64_t p113;
    uint64_t p114;
    uint64_t p115;
    int64_t p116;
    int64_t p117;
    int64_t p118;
    int64_t p119;
    float p120;
    float p121;
    float p122;
    float p123;
    float p124;
    float p125;
    float p126;
    float p127;
    double p128;
    double p129;
    double p130;
    double p131;
    struct S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__ p132;
    struct S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8_S_u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1u2u2u2u2i2i2i2i2u4u4i4i4u8i8r4r4r8__ p133;
};
    
// FileSystemEntry
struct S_sssi4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    int32_t p3;
};
    
// ClipBackgroundRegion
struct S_S_r4r4r4r4_r8r8_
{
    struct S_r4r4r4r4_ p0;
    double p1;
    double p2;
};
    
// ClipDrawOptions
struct S_obsbsS_r4r4r4r4__
{
    Il2CppObject* p0;
    bool p1;
    Il2CppString* p2;
    bool p3;
    Il2CppString* p4;
    struct S_r4r4r4r4_ p5;
};
    
// MarkerOverlayRegion
struct S_S_r4r4r4r4_S_r4r4r4r4_r8r8r4_
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    double p2;
    double p3;
    float p4;
};
    
// TrackDrawOptions
struct S_sS_r4r4r4r4_r4o_
{
    Il2CppString* p0;
    struct S_r4r4r4r4_ p1;
    float p2;
    Il2CppObject* p3;
};
    
// ActionContext
struct S_oooooN_br8__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    struct N_br8_ p5;
};
    
// DevMode
struct S_si2i2i2i2i4i4i4i4i4i2i2i2i2i2si2i4i4i4i4i4i4i4i4i4i4i4i4i4_
{
    Il2CppString* p0;
    int16_t p1;
    int16_t p2;
    int16_t p3;
    int16_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    int32_t p9;
    int16_t p10;
    int16_t p11;
    int16_t p12;
    int16_t p13;
    int16_t p14;
    Il2CppString* p15;
    int16_t p16;
    int32_t p17;
    int32_t p18;
    int32_t p19;
    int32_t p20;
    int32_t p21;
    int32_t p22;
    int32_t p23;
    int32_t p24;
    int32_t p25;
    int32_t p26;
    int32_t p27;
    int32_t p28;
    int32_t p29;
};
    
// DisplayDevice
struct S_i4ssi4ss_
{
    int32_t p0;
    Il2CppString* p1;
    Il2CppString* p2;
    int32_t p3;
    Il2CppString* p4;
    Il2CppString* p5;
};
    
// GUIBackgroundColor
struct S_S_r4r4r4r4__
{
    struct S_r4r4r4r4_ p0;
};
    
// GUIEnabled
struct S_b_
{
    bool p0;
};
    
// ViewPyramid
struct S_oooi4i4i4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// ShaderGraphRequirements
struct S_oi4i4i4i4i4i4bbbbbobbbbb_
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    bool p7;
    bool p8;
    bool p9;
    bool p10;
    bool p11;
    Il2CppObject* p12;
    bool p13;
    bool p14;
    bool p15;
    bool p16;
    bool p17;
};
    
// GraphCode
struct S_sS_oi4i4i4i4i4i4bbbbbobbbbb_o_
{
    Il2CppString* p0;
    struct S_oi4i4i4i4i4i4bbbbbobbbbb_ p1;
    Il2CppObject* p2;
};
    
// OutputMetadata
struct S_i4si4_
{
    int32_t p0;
    Il2CppString* p1;
    int32_t p2;
};
    
// TextureInfo
struct S_soi4_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    int32_t p2;
};
    
// JSONSerializedElement
struct S_S_s_s_
{
    struct S_s_ p0;
    Il2CppString* p1;
};
    
// RaycastResult
struct S_oor4r4i4i4i4i4i4S_r4r4r4_S_r4r4r4_S_r4r4_i4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    float p2;
    float p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    struct S_r4r4r4_ p9;
    struct S_r4r4r4_ p10;
    struct S_r4r4_ p11;
    int32_t p12;
};
    
// Settings
struct S_S_r4r4r4r4_oS_r4r4r4r4_r4r4_
{
    struct S_r4r4r4r4_ p0;
    Il2CppObject* p1;
    struct S_r4r4r4r4_ p2;
    float p3;
    float p4;
};
    
// LightUnitSliderUIDescriptor
struct S_ooS_r4r4_sssbb_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    struct S_r4r4_ p2;
    Il2CppString* p3;
    Il2CppString* p4;
    Il2CppString* p5;
    bool p6;
    bool p7;
};
    
// LightUnitSliderUIRange
struct S_oS_r4r4_r4_
{
    Il2CppObject* p0;
    struct S_r4r4_ p1;
    float p2;
};
    
// MaterialHeaderScope
struct S_bb_
{
    bool p0;
    bool p1;
};
    
// TimedScope
struct S_Pv_
{
    void* p0;
};
    
// ExposedReference`1
struct S_S_i4i4_o_
{
    struct S_i4i4_ p0;
    Il2CppObject* p1;
};
    
// bool2x2
struct S_S_bb_S_bb__
{
    struct S_bb_ p0;
    struct S_bb_ p1;
};
    
// bool2x3
struct S_S_bb_S_bb_S_bb__
{
    struct S_bb_ p0;
    struct S_bb_ p1;
    struct S_bb_ p2;
};
    
// bool2x4
struct S_S_bb_S_bb_S_bb_S_bb__
{
    struct S_bb_ p0;
    struct S_bb_ p1;
    struct S_bb_ p2;
    struct S_bb_ p3;
};
    
// bool3x2
struct S_S_bbb_S_bbb__
{
    struct S_bbb_ p0;
    struct S_bbb_ p1;
};
    
// bool3x3
struct S_S_bbb_S_bbb_S_bbb__
{
    struct S_bbb_ p0;
    struct S_bbb_ p1;
    struct S_bbb_ p2;
};
    
// bool3x4
struct S_S_bbb_S_bbb_S_bbb_S_bbb__
{
    struct S_bbb_ p0;
    struct S_bbb_ p1;
    struct S_bbb_ p2;
    struct S_bbb_ p3;
};
    
// bool4
struct S_bbbb_
{
    bool p0;
    bool p1;
    bool p2;
    bool p3;
};
    
// bool4x2
struct S_S_bbbb_S_bbbb__
{
    struct S_bbbb_ p0;
    struct S_bbbb_ p1;
};
    
// bool4x3
struct S_S_bbbb_S_bbbb_S_bbbb__
{
    struct S_bbbb_ p0;
    struct S_bbbb_ p1;
    struct S_bbbb_ p2;
};
    
// bool4x4
struct S_S_bbbb_S_bbbb_S_bbbb_S_bbbb__
{
    struct S_bbbb_ p0;
    struct S_bbbb_ p1;
    struct S_bbbb_ p2;
    struct S_bbbb_ p3;
};
    
// double2x2
struct S_S_r8r8_S_r8r8__
{
    struct S_r8r8_ p0;
    struct S_r8r8_ p1;
};
    
// double2x3
struct S_S_r8r8_S_r8r8_S_r8r8__
{
    struct S_r8r8_ p0;
    struct S_r8r8_ p1;
    struct S_r8r8_ p2;
};
    
// double2x4
struct S_S_r8r8_S_r8r8_S_r8r8_S_r8r8__
{
    struct S_r8r8_ p0;
    struct S_r8r8_ p1;
    struct S_r8r8_ p2;
    struct S_r8r8_ p3;
};
    
// double3
struct S_r8r8r8_
{
    double p0;
    double p1;
    double p2;
};
    
// double3x2
struct S_S_r8r8r8_S_r8r8r8__
{
    struct S_r8r8r8_ p0;
    struct S_r8r8r8_ p1;
};
    
// double3x3
struct S_S_r8r8r8_S_r8r8r8_S_r8r8r8__
{
    struct S_r8r8r8_ p0;
    struct S_r8r8r8_ p1;
    struct S_r8r8r8_ p2;
};
    
// double3x4
struct S_S_r8r8r8_S_r8r8r8_S_r8r8r8_S_r8r8r8__
{
    struct S_r8r8r8_ p0;
    struct S_r8r8r8_ p1;
    struct S_r8r8r8_ p2;
    struct S_r8r8r8_ p3;
};
    
// double4
struct S_r8r8r8r8_
{
    double p0;
    double p1;
    double p2;
    double p3;
};
    
// double4x2
struct S_S_r8r8r8r8_S_r8r8r8r8__
{
    struct S_r8r8r8r8_ p0;
    struct S_r8r8r8r8_ p1;
};
    
// double4x3
struct S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__
{
    struct S_r8r8r8r8_ p0;
    struct S_r8r8r8r8_ p1;
    struct S_r8r8r8r8_ p2;
};
    
// double4x4
struct S_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8_S_r8r8r8r8__
{
    struct S_r8r8r8r8_ p0;
    struct S_r8r8r8r8_ p1;
    struct S_r8r8r8r8_ p2;
    struct S_r8r8r8r8_ p3;
};
    
// float2x3
struct S_S_r4r4_S_r4r4_S_r4r4__
{
    struct S_r4r4_ p0;
    struct S_r4r4_ p1;
    struct S_r4r4_ p2;
};
    
// float2x4
struct S_S_r4r4_S_r4r4_S_r4r4_S_r4r4__
{
    struct S_r4r4_ p0;
    struct S_r4r4_ p1;
    struct S_r4r4_ p2;
    struct S_r4r4_ p3;
};
    
// float3x3
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4_ p2;
};
    
// float3x4
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4_ p2;
    struct S_r4r4r4_ p3;
};
    
// float4x2
struct S_S_r4r4r4r4_S_r4r4r4r4__
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
};
    
// half2
struct S_S_u2_S_u2__
{
    struct S_u2_ p0;
    struct S_u2_ p1;
};
    
// half3
struct S_S_u2_S_u2_S_u2__
{
    struct S_u2_ p0;
    struct S_u2_ p1;
    struct S_u2_ p2;
};
    
// half4
struct S_S_u2_S_u2_S_u2_S_u2__
{
    struct S_u2_ p0;
    struct S_u2_ p1;
    struct S_u2_ p2;
    struct S_u2_ p3;
};
    
// int2x2
struct S_S_i4i4_S_i4i4__
{
    struct S_i4i4_ p0;
    struct S_i4i4_ p1;
};
    
// int2x3
struct S_S_i4i4_S_i4i4_S_i4i4__
{
    struct S_i4i4_ p0;
    struct S_i4i4_ p1;
    struct S_i4i4_ p2;
};
    
// int2x4
struct S_S_i4i4_S_i4i4_S_i4i4_S_i4i4__
{
    struct S_i4i4_ p0;
    struct S_i4i4_ p1;
    struct S_i4i4_ p2;
    struct S_i4i4_ p3;
};
    
// int3x3
struct S_S_i4i4i4_S_i4i4i4_S_i4i4i4__
{
    struct S_i4i4i4_ p0;
    struct S_i4i4i4_ p1;
    struct S_i4i4i4_ p2;
};
    
// int3x4
struct S_S_i4i4i4_S_i4i4i4_S_i4i4i4_S_i4i4i4__
{
    struct S_i4i4i4_ p0;
    struct S_i4i4i4_ p1;
    struct S_i4i4i4_ p2;
    struct S_i4i4i4_ p3;
};
    
// int4x2
struct S_S_i4i4i4i4_S_i4i4i4i4__
{
    struct S_i4i4i4i4_ p0;
    struct S_i4i4i4i4_ p1;
};
    
// int4x3
struct S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__
{
    struct S_i4i4i4i4_ p0;
    struct S_i4i4i4i4_ p1;
    struct S_i4i4i4i4_ p2;
};
    
// int4x4
struct S_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4_S_i4i4i4i4__
{
    struct S_i4i4i4i4_ p0;
    struct S_i4i4i4i4_ p1;
    struct S_i4i4i4i4_ p2;
    struct S_i4i4i4i4_ p3;
};
    
// RigidTransform
struct S_S_S_r4r4r4r4__S_r4r4r4__
{
    struct S_S_r4r4r4r4__ p0;
    struct S_r4r4r4_ p1;
};
    
// uint2x2
struct S_S_u4u4_S_u4u4__
{
    struct S_u4u4_ p0;
    struct S_u4u4_ p1;
};
    
// uint2x3
struct S_S_u4u4_S_u4u4_S_u4u4__
{
    struct S_u4u4_ p0;
    struct S_u4u4_ p1;
    struct S_u4u4_ p2;
};
    
// uint2x4
struct S_S_u4u4_S_u4u4_S_u4u4_S_u4u4__
{
    struct S_u4u4_ p0;
    struct S_u4u4_ p1;
    struct S_u4u4_ p2;
    struct S_u4u4_ p3;
};
    
// uint3x2
struct S_S_u4u4u4_S_u4u4u4__
{
    struct S_u4u4u4_ p0;
    struct S_u4u4u4_ p1;
};
    
// uint3x3
struct S_S_u4u4u4_S_u4u4u4_S_u4u4u4__
{
    struct S_u4u4u4_ p0;
    struct S_u4u4u4_ p1;
    struct S_u4u4u4_ p2;
};
    
// uint3x4
struct S_S_u4u4u4_S_u4u4u4_S_u4u4u4_S_u4u4u4__
{
    struct S_u4u4u4_ p0;
    struct S_u4u4u4_ p1;
    struct S_u4u4u4_ p2;
    struct S_u4u4u4_ p3;
};
    
// uint4x2
struct S_S_u4u4u4u4_S_u4u4u4u4__
{
    struct S_u4u4u4u4_ p0;
    struct S_u4u4u4u4_ p1;
};
    
// uint4x3
struct S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__
{
    struct S_u4u4u4u4_ p0;
    struct S_u4u4u4u4_ p1;
    struct S_u4u4u4u4_ p2;
};
    
// uint4x4
struct S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__
{
    struct S_u4u4u4u4_ p0;
    struct S_u4u4u4u4_ p1;
    struct S_u4u4u4u4_ p2;
    struct S_u4u4u4u4_ p3;
};
    
// MaterialReference
struct S_i4ooobbor4i4_
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    bool p4;
    bool p5;
    Il2CppObject* p6;
    float p7;
    int32_t p8;
};
    
// TMP_TextProcessingStack`1
struct S_oi4r4i4i4i4_
{
    Il2CppObject* p0;
    int32_t p1;
    float p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// TMP_TextProcessingStack`1
struct S_oi4i4i4i4i4_
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// TMP_FontStyleStack
struct S_u1u1u1u1u1u1u1u1u1u1_
{
    uint8_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
    uint8_t p7;
    uint8_t p8;
    uint8_t p9;
};
    
// TMP_TextProcessingStack`1
struct S_oi4S_i4u1u1u1u1_i4i4i4_
{
    Il2CppObject* p0;
    int32_t p1;
    struct S_i4u1u1u1u1_ p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// HighlightState
struct S_S_i4u1u1u1u1_S_r4r4r4r4__
{
    struct S_i4u1u1u1u1_ p0;
    struct S_r4r4r4r4_ p1;
};
    
// TMP_TextProcessingStack`1
struct S_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_
{
    Il2CppObject* p0;
    int32_t p1;
    struct S_S_i4u1u1u1u1_S_r4r4r4r4__ p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// TMP_TextProcessingStack`1
struct S_oi4oi4i4i4_
{
    Il2CppObject* p0;
    int32_t p1;
    Il2CppObject* p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// TMP_PageInfo
struct S_i4i4r4r4r4_
{
    int32_t p0;
    int32_t p1;
    float p2;
    float p3;
    float p4;
};
    
// TMP_LinkInfo
struct S_oi4i4i4i4i4o_
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    Il2CppObject* p6;
};
    
// TMP_WordInfo
struct S_oi4i4i4_
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
};
    
// TMP_LineInfo
struct S_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    float p9;
    float p10;
    float p11;
    float p12;
    float p13;
    float p14;
    float p15;
    float p16;
    float p17;
    int32_t p18;
    struct S_S_r4r4_S_r4r4__ p19;
};
    
// TMP_TextProcessingStack`1
struct S_oi4S_i4ooobbor4i4_i4i4i4_
{
    Il2CppObject* p0;
    int32_t p1;
    struct S_i4ooobbor4i4_ p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
};
    
// WordWrapState
struct S_i4i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4i4r4r4r4r4r4r4i4i4i4r4r4r4r4br4r4r4oS_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___S_i4u1u1u1u1_S_i4u1u1u1u1_S_i4u1u1u1u1_S_i4u1u1u1u1_S_u1u1u1u1u1u1u1u1u1u1_S_oi4i4i4i4i4_S_oi4S_i4u1u1u1u1_i4i4i4_S_oi4S_i4u1u1u1u1_i4i4i4_S_oi4S_i4u1u1u1u1_i4i4i4_S_oi4S_i4u1u1u1u1_i4i4i4_S_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_S_oi4oi4i4i4_S_oi4r4i4i4i4_S_oi4r4i4i4i4_S_oi4i4i4i4i4_S_oi4i4i4i4i4_S_oi4r4i4i4i4_S_oi4i4i4i4i4_S_oi4S_i4ooobbor4i4_i4i4i4_S_oi4i4i4i4i4_i4oooi4S_S_r4r4_S_r4r4__bb_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    int32_t p9;
    float p10;
    float p11;
    float p12;
    float p13;
    float p14;
    float p15;
    float p16;
    int32_t p17;
    float p18;
    float p19;
    float p20;
    float p21;
    float p22;
    float p23;
    int32_t p24;
    int32_t p25;
    int32_t p26;
    float p27;
    float p28;
    float p29;
    float p30;
    bool p31;
    float p32;
    float p33;
    float p34;
    Il2CppObject* p35;
    struct S_i4i4i4i4i4i4i4i4i4r4r4r4r4r4r4r4r4r4i4S_S_r4r4_S_r4r4___ p36;
    struct S_i4u1u1u1u1_ p37;
    struct S_i4u1u1u1u1_ p38;
    struct S_i4u1u1u1u1_ p39;
    struct S_i4u1u1u1u1_ p40;
    struct S_u1u1u1u1u1u1u1u1u1u1_ p41;
    struct S_oi4i4i4i4i4_ p42;
    struct S_oi4S_i4u1u1u1u1_i4i4i4_ p43;
    struct S_oi4S_i4u1u1u1u1_i4i4i4_ p44;
    struct S_oi4S_i4u1u1u1u1_i4i4i4_ p45;
    struct S_oi4S_i4u1u1u1u1_i4i4i4_ p46;
    struct S_oi4S_S_i4u1u1u1u1_S_r4r4r4r4__i4i4i4_ p47;
    struct S_oi4oi4i4i4_ p48;
    struct S_oi4r4i4i4i4_ p49;
    struct S_oi4r4i4i4i4_ p50;
    struct S_oi4i4i4i4i4_ p51;
    struct S_oi4i4i4i4i4_ p52;
    struct S_oi4r4i4i4i4_ p53;
    struct S_oi4i4i4i4i4_ p54;
    struct S_oi4S_i4ooobbor4i4_i4i4i4_ p55;
    struct S_oi4i4i4i4i4_ p56;
    int32_t p57;
    Il2CppObject* p58;
    Il2CppObject* p59;
    Il2CppObject* p60;
    int32_t p61;
    struct S_S_r4r4_S_r4r4__ p62;
    bool p63;
    bool p64;
};
    
// TMP_Vertex
struct S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__
{
    struct S_r4r4r4_ p0;
    struct S_r4r4_ p1;
    struct S_r4r4_ p2;
    struct S_r4r4_ p3;
    struct S_i4u1u1u1u1_ p4;
};
    
// TMP_CharacterInfo
struct S_ci4i4i4oooi4oi4br4i4i4i4S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_r4r4r4r4r4r4r4r4r4S_i4u1u1u1u1_S_i4u1u1u1u1_i4S_i4u1u1u1u1_i4S_i4u1u1u1u1_S_S_i4u1u1u1u1_S_r4r4r4r4__i4b_
{
    Il2CppChar p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    int32_t p7;
    Il2CppObject* p8;
    int32_t p9;
    bool p10;
    float p11;
    int32_t p12;
    int32_t p13;
    int32_t p14;
    struct S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__ p15;
    struct S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__ p16;
    struct S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__ p17;
    struct S_S_r4r4r4_S_r4r4_S_r4r4_S_r4r4_S_i4u1u1u1u1__ p18;
    struct S_r4r4r4_ p19;
    struct S_r4r4r4_ p20;
    struct S_r4r4r4_ p21;
    struct S_r4r4r4_ p22;
    float p23;
    float p24;
    float p25;
    float p26;
    float p27;
    float p28;
    float p29;
    float p30;
    float p31;
    struct S_i4u1u1u1u1_ p32;
    struct S_i4u1u1u1u1_ p33;
    int32_t p34;
    struct S_i4u1u1u1u1_ p35;
    int32_t p36;
    struct S_i4u1u1u1u1_ p37;
    struct S_S_i4u1u1u1u1_S_r4r4r4r4__ p38;
    int32_t p39;
    bool p40;
};
    
// FontAssetCreationSettings
struct S_ssi4i4i4i4i4i4i4sssi4r4i4b_
{
    Il2CppString* p0;
    Il2CppString* p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    Il2CppString* p9;
    Il2CppString* p10;
    Il2CppString* p11;
    int32_t p12;
    float p13;
    int32_t p14;
    bool p15;
};
    
// TMP_MeshInfo
struct S_oi4oooooooo_
{
    Il2CppObject* p0;
    int32_t p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    Il2CppObject* p9;
};
    
// UniTask
struct S_oi2_
{
    Il2CppObject* p0;
    int16_t p1;
};
    
// Awaiter
struct S_S_oi2__
{
    struct S_oi2_ p0;
};
    
// CancellationTokenAwaitable
struct S_S_o__
{
    struct S_o_ p0;
};
    
// UniTaskCompletionSourceCore`1
struct S_bOi2bi4oO_
{
    bool p0;
    Il2CppObject* p1;
    int16_t p2;
    bool p3;
    int32_t p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
};
    
// SwitchToMainThreadAwaitable
struct S_i4S_o__
{
    int32_t p0;
    struct S_o_ p1;
};
    
// SwitchToSynchronizationContextAwaitable
struct S_oS_o__
{
    Il2CppObject* p0;
    struct S_o_ p1;
};
    
// ReturnToSynchronizationContext
struct S_obS_o__
{
    Il2CppObject* p0;
    bool p1;
    struct S_o_ p2;
};
    
// UniTaskCompletionSourceCore`1
struct S_S__Oi2bi4oO_
{
    struct S__ p0;
    Il2CppObject* p1;
    int16_t p2;
    bool p3;
    int32_t p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
};
    
// AsyncUniTaskMethodBuilder
struct S_ooO_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
};
    
// JSCallInfo
struct S_pppi4ooo_
{
    void* p0;
    void* p1;
    void* p2;
    int32_t p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
};
    
// LazyMemberRegisterInfo
struct S_bsi4bb_
{
    bool p0;
    Il2CppString* p1;
    int32_t p2;
    bool p3;
    bool p4;
};
    
// MethodKey
struct S_sbb_
{
    Il2CppString* p0;
    bool p1;
    bool p2;
};
    
// pesapi_ffi
struct S_oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    Il2CppObject* p9;
    Il2CppObject* p10;
    Il2CppObject* p11;
    Il2CppObject* p12;
    Il2CppObject* p13;
    Il2CppObject* p14;
    Il2CppObject* p15;
    Il2CppObject* p16;
    Il2CppObject* p17;
    Il2CppObject* p18;
    Il2CppObject* p19;
    Il2CppObject* p20;
    Il2CppObject* p21;
    Il2CppObject* p22;
    Il2CppObject* p23;
    Il2CppObject* p24;
    Il2CppObject* p25;
    Il2CppObject* p26;
    Il2CppObject* p27;
    Il2CppObject* p28;
    Il2CppObject* p29;
    Il2CppObject* p30;
    Il2CppObject* p31;
    Il2CppObject* p32;
    Il2CppObject* p33;
    Il2CppObject* p34;
    Il2CppObject* p35;
    Il2CppObject* p36;
    Il2CppObject* p37;
    Il2CppObject* p38;
    Il2CppObject* p39;
    Il2CppObject* p40;
    Il2CppObject* p41;
    Il2CppObject* p42;
    Il2CppObject* p43;
    Il2CppObject* p44;
    Il2CppObject* p45;
    Il2CppObject* p46;
    Il2CppObject* p47;
    Il2CppObject* p48;
    Il2CppObject* p49;
    Il2CppObject* p50;
    Il2CppObject* p51;
    Il2CppObject* p52;
    Il2CppObject* p53;
    Il2CppObject* p54;
    Il2CppObject* p55;
    Il2CppObject* p56;
    Il2CppObject* p57;
    Il2CppObject* p58;
    Il2CppObject* p59;
    Il2CppObject* p60;
    Il2CppObject* p61;
    Il2CppObject* p62;
    Il2CppObject* p63;
    Il2CppObject* p64;
    Il2CppObject* p65;
    Il2CppObject* p66;
    Il2CppObject* p67;
    Il2CppObject* p68;
    Il2CppObject* p69;
    Il2CppObject* p70;
    Il2CppObject* p71;
    Il2CppObject* p72;
    Il2CppObject* p73;
    Il2CppObject* p74;
    Il2CppObject* p75;
    Il2CppObject* p76;
    Il2CppObject* p77;
    Il2CppObject* p78;
    Il2CppObject* p79;
    Il2CppObject* p80;
    Il2CppObject* p81;
    Il2CppObject* p82;
    Il2CppObject* p83;
};
    
// UpgradeParams
struct S_i4i4bi4i4_
{
    int32_t p0;
    int32_t p1;
    bool p2;
    int32_t p3;
    int32_t p4;
};
    
// MetadataDb
struct S_i4obb_
{
    int32_t p0;
    Il2CppObject* p1;
    bool p2;
    bool p3;
};
    
// JsonDocumentOptions
struct S_i4u1b_
{
    int32_t p0;
    uint8_t p1;
    bool p2;
};
    
// JsonProperty
struct S_S_oi4_s_
{
    struct S_oi4_ p0;
    Il2CppString* p1;
};
    
// JsonEncodedText
struct S_os_
{
    Il2CppObject* p0;
    Il2CppString* p1;
};
    
// JsonReaderOptions
struct S_i4u1bb_
{
    int32_t p0;
    uint8_t p1;
    bool p2;
    bool p3;
};
    
// BitStack
struct S_ou8i4_
{
    Il2CppObject* p0;
    uint64_t p1;
    int32_t p2;
};
    
// JsonReaderState
struct S_i8i8bbbbu1u1S_i4u1bb_S_ou8i4__
{
    int64_t p0;
    int64_t p1;
    bool p2;
    bool p3;
    bool p4;
    bool p5;
    uint8_t p6;
    uint8_t p7;
    struct S_i4u1bb_ p8;
    struct S_ou8i4_ p9;
};
    
// ReadOnlySequence`1
struct S_OOi4i4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    int32_t p2;
    int32_t p3;
};
    
// Utf8JsonReader
struct S_S_S_p_i4_bbi8i8i4bbu1u1S_i4u1bb_S_ou8i4_i8bbbS_Oi4_S_Oi4_S_OOi4i4_S_S_p_i4_i8bbS_OOi4i4__
{
    struct S_S_p_i4_ p0;
    bool p1;
    bool p2;
    int64_t p3;
    int64_t p4;
    int32_t p5;
    bool p6;
    bool p7;
    uint8_t p8;
    uint8_t p9;
    struct S_i4u1bb_ p10;
    struct S_ou8i4_ p11;
    int64_t p12;
    bool p13;
    bool p14;
    bool p15;
    struct S_Oi4_ p16;
    struct S_Oi4_ p17;
    struct S_OOi4i4_ p18;
    struct S_S_p_i4_ p19;
    int64_t p20;
    bool p21;
    bool p22;
    struct S_OOi4i4_ p23;
};
    
// Nullable`1
struct N_bS_b__
{
    bool hasValue;
    struct S_b_ p1;
};
    
// Nullable`1
struct N_bS_oi4__
{
    bool hasValue;
    struct S_oi4_ p1;
};
    
// ImageDebugDirectory
struct S_i4i4i2i2i4i4i4i4_
{
    int32_t p0;
    int32_t p1;
    int16_t p2;
    int16_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
};
    
// CapturedVariable
struct S_ssu1_
{
    Il2CppString* p0;
    Il2CppString* p1;
    uint8_t p2;
};
    
// NamespaceEntry
struct S_si4i4o_
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
    Il2CppObject* p3;
};
    
// ArrayDimension
struct S_N_bi4_N_bi4__
{
    struct N_bi4_ p0;
    struct N_bi4_ p1;
};
    
// CustomAttributeNamedArgument
struct S_sS_oO__
{
    Il2CppString* p0;
    struct S_oO_ p1;
};
    
// Nullable`1
struct N_bu4_
{
    bool hasValue;
    uint32_t p1;
};
    
// InstructionOffset
struct S_oN_bi4__
{
    Il2CppObject* p0;
    struct N_bi4_ p1;
};
    
// JsonPosition
struct S_i4i4sb_
{
    int32_t p0;
    int32_t p1;
    Il2CppString* p2;
    bool p3;
};
    
// Nullable`1
struct N_bS_Oi4__
{
    bool hasValue;
    struct S_Oi4_ p1;
};
    
// BsonType
struct i1
{
    int8_t p0;
};
    
// Nullable`1
struct N_bS_Oi4i4__
{
    bool hasValue;
    struct S_Oi4i4_ p1;
};
    
// AIJsonSchemaCreateContext
struct S_S_ooooooo__
{
    struct S_ooooooo_ p0;
};
    
// PipeAwaitable
struct S_i4oOoS_oS_oi4__S_o__
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    struct S_oS_oi4__ p4;
    struct S_o_ p5;
};
    
// PipeCompletion
struct S_Oo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
};
    
// ReadResult
struct S_S_OOi4i4_u1_
{
    struct S_OOi4i4_ p0;
    uint8_t p1;
};
    
// LoggingEventData
struct S_sossS_u8_osssso_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    Il2CppString* p2;
    Il2CppString* p3;
    struct S_u8_ p4;
    Il2CppObject* p5;
    Il2CppString* p6;
    Il2CppString* p7;
    Il2CppString* p8;
    Il2CppString* p9;
    Il2CppObject* p10;
};
    
// CheckinProgressData
struct S_si4si4sb_
{
    Il2CppString* p0;
    int32_t p1;
    Il2CppString* p2;
    int32_t p3;
    Il2CppString* p4;
    bool p5;
};
    
// UpdateProgressData
struct S_sr8s_
{
    Il2CppString* p0;
    double p1;
    Il2CppString* p2;
};
    
// BranchRequest
struct S_i8s_
{
    int64_t p0;
    Il2CppString* p1;
};
    
// WorkspaceCreationData
struct S_bsssbb_
{
    bool p0;
    Il2CppString* p1;
    Il2CppString* p2;
    Il2CppString* p3;
    bool p4;
    bool p5;
};
    
// WorkspaceRenameData
struct S_bos_
{
    bool p0;
    Il2CppObject* p1;
    Il2CppString* p2;
};
    
// RepositoryCreationData
struct S_bss_
{
    bool p0;
    Il2CppString* p1;
    Il2CppString* p2;
};
    
// FilterRulesConfirmationData
struct S_bbo_
{
    bool p0;
    bool p1;
    Il2CppObject* p2;
};
    
// NewNameData
struct S_sssb_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    bool p3;
};
    
// DirectoryConflictResolutionData
struct S_oooi4s_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    int32_t p3;
    Il2CppString* p4;
};
    
// BranchCreationData
struct S_booi8ssob_
{
    bool p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    int64_t p3;
    Il2CppString* p4;
    Il2CppString* p5;
    Il2CppObject* p6;
    bool p7;
};
    
// BranchRenameData
struct S_boos_
{
    bool p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppString* p3;
};
    
// DownloadedSegment
struct S_S_u4u4_i8u8b_
{
    struct S_u4u4_ p0;
    int64_t p1;
    uint64_t p2;
    bool p3;
};
    
// CurrentUploadBlock
struct S_i4i4si8i4i4_
{
    int32_t p0;
    int32_t p1;
    Il2CppString* p2;
    int64_t p3;
    int32_t p4;
    int32_t p5;
};
    
// DownloadSegmentInfo
struct S_ou8oo_
{
    Il2CppObject* p0;
    uint64_t p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
};
    
// UpdateOperationStatus
struct S_i8i8i8i8bb_
{
    int64_t p0;
    int64_t p1;
    int64_t p2;
    int64_t p3;
    bool p4;
    bool p5;
};
    
// ArchiveSegment
struct S_i8u8b_
{
    int64_t p0;
    uint64_t p1;
    bool p2;
};
    
// HashInfo
struct S_u1o_
{
    uint8_t p0;
    Il2CppObject* p1;
};
    
// PurgeFileTypeRequest
struct S_sS_u8__
{
    Il2CppString* p0;
    struct S_u8_ p1;
};
    
// RawFileInfo
struct S_i8i8S_u1__
{
    int64_t p0;
    int64_t p1;
    struct S_u1_ p2;
};
    
// RawRepository
struct S_S_u4u4_o_
{
    struct S_u4u4_ p0;
    Il2CppObject* p1;
};
    
// RawWorkspaceTreeNode
struct S_i8i8i4i4i4i4i4i4i4S_u1_u2u2u1u1_
{
    int64_t p0;
    int64_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
    int32_t p8;
    struct S_u1_ p9;
    uint16_t p10;
    uint16_t p11;
    uint8_t p12;
    uint8_t p13;
};
    
// RawXlinkExpansionRuleInfo
struct S_S_u1_S_u1_b_
{
    struct S_u1_ p0;
    struct S_u1_ p1;
    bool p2;
};
    
// RawXlinkInfo
struct S_S_u1_S_u1_i4u2bb_
{
    struct S_u1_ p0;
    struct S_u1_ p1;
    int32_t p2;
    uint16_t p3;
    bool p4;
    bool p5;
};
    
// Traffic
struct S_i8i8i8i8_
{
    int64_t p0;
    int64_t p1;
    int64_t p2;
    int64_t p3;
};
    
// FSEvent
struct S_u8su4_
{
    uint64_t p0;
    Il2CppString* p1;
    uint32_t p2;
};
    
// CircleOptions
struct S_r4bbS_r4r4_r4r4b_
{
    float p0;
    bool p1;
    bool p2;
    struct S_r4r4_ p3;
    float p4;
    float p5;
    bool p6;
};
    
// PathOptions
struct S_i4i4i4i4bS_r4r4r4_or4bS_r4r4r4r4_bobbbS_r4r4r4r4_r4bb_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    bool p4;
    struct S_r4r4r4_ p5;
    Il2CppObject* p6;
    float p7;
    bool p8;
    struct S_r4r4r4r4_ p9;
    bool p10;
    Il2CppObject* p11;
    bool p12;
    bool p13;
    bool p14;
    struct S_r4r4r4r4_ p15;
    float p16;
    bool p17;
    bool p18;
};
    
// QuaternionOptions
struct S_i4i4S_r4r4r4_bS_r4r4r4__
{
    int32_t p0;
    int32_t p1;
    struct S_r4r4r4_ p2;
    bool p3;
    struct S_r4r4r4_ p4;
};
    
// Vector3ArrayOptions
struct S_i4bo_
{
    int32_t p0;
    bool p1;
    Il2CppObject* p2;
};
    
// StringOptions
struct S_bi4oi4i4_
{
    bool p0;
    int32_t p1;
    Il2CppObject* p2;
    int32_t p3;
    int32_t p4;
};
    
// Nullable`1
struct N_bS_r4r4r4__
{
    bool hasValue;
    struct S_r4r4r4_ p1;
};
    
// AllowedBmpCodePointsBitmap
struct S_S_u4__
{
    struct S_u4_ p0;
};
    
// ActivityContext
struct S_S_s_S_s_i4sb_
{
    struct S_s_ p0;
    struct S_s_ p1;
    int32_t p2;
    Il2CppString* p3;
    bool p4;
};
    
// ActivityEvent
struct S_osS_S_u8_i2__
{
    Il2CppObject* p0;
    Il2CppString* p1;
    struct S_S_u8_i2_ p2;
};
    
// ActivityLink
struct S_oS_S_s_S_s_i4sb__
{
    Il2CppObject* p0;
    struct S_S_s_S_s_i4sb_ p1;
};
    
// KeyValuePair`2
struct S_sO_
{
    Il2CppString* p0;
    Il2CppObject* p1;
};
    
// TagList
struct S_S_sO_S_sO_S_sO_S_sO_S_sO_S_sO_S_sO_S_sO_i4o_
{
    struct S_sO_ p0;
    struct S_sO_ p1;
    struct S_sO_ p2;
    struct S_sO_ p3;
    struct S_sO_ p4;
    struct S_sO_ p5;
    struct S_sO_ p6;
    struct S_sO_ p7;
    int32_t p8;
    Il2CppObject* p9;
};
    
// ConfigurationDebugViewContext
struct S_ssso_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    Il2CppObject* p3;
};
    
// InplaceStringBuilder
struct S_i4i4s_
{
    int32_t p0;
    int32_t p1;
    Il2CppString* p2;
};
    
// StringTokenizer
struct S_S_si4i4_o_
{
    struct S_si4i4_ p0;
    Il2CppObject* p1;
};
    
// Stat
struct S_u8u8u4u4u8u4u4u8i8i8i8i8i8i8i8i8i8_
{
    uint64_t p0;
    uint64_t p1;
    uint32_t p2;
    uint32_t p3;
    uint64_t p4;
    uint32_t p5;
    uint32_t p6;
    uint64_t p7;
    int64_t p8;
    int64_t p9;
    int64_t p10;
    int64_t p11;
    int64_t p12;
    int64_t p13;
    int64_t p14;
    int64_t p15;
    int64_t p16;
};
    
// Statvfs
struct S_u8u8u8u8u8u8u8u8u8u8u8_
{
    uint64_t p0;
    uint64_t p1;
    uint64_t p2;
    uint64_t p3;
    uint64_t p4;
    uint64_t p5;
    uint64_t p6;
    uint64_t p7;
    uint64_t p8;
    uint64_t p9;
    uint64_t p10;
};
    
// Flock
struct S_i2i2i8i8i4_
{
    int16_t p0;
    int16_t p1;
    int64_t p2;
    int64_t p3;
    int32_t p4;
};
    
// Pollfd
struct S_i4i2i2_
{
    int32_t p0;
    int16_t p1;
    int16_t p2;
};
    
// Iovec
struct S_pu8_
{
    void* p0;
    uint64_t p1;
};
    
// EpollEvent
struct S_u4i4pu4u8_
{
    uint32_t p0;
    int32_t p1;
    void* p2;
    uint32_t p3;
    uint64_t p4;
};
    
// Cmsghdr
struct S_i8i4i4_
{
    int64_t p0;
    int32_t p1;
    int32_t p2;
};
    
// Stat
struct S_i4i4i4i4i4i4i8i8i8i8S_u8_S_u8_S_u8__
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    int64_t p6;
    int64_t p7;
    int64_t p8;
    int64_t p9;
    struct S_u8_ p10;
    struct S_u8_ p11;
    struct S_u8_ p12;
};
    
// ExtCreationInfo
struct S_oN_bS_i8__i8o_
{
    Il2CppObject* p0;
    struct N_bS_i8__ p1;
    int64_t p2;
    Il2CppObject* p3;
};
    
// ExtCreationInfoEx
struct S_S_oN_bS_i8__i8o_b_
{
    struct S_oN_bS_i8__i8o_ p0;
    bool p1;
};
    
// Nullable`1
struct N_bS_r4r4r4r4__
{
    bool hasValue;
    struct S_r4r4r4r4_ p1;
};
    
// Nullable`1
struct N_bS___
{
    bool hasValue;
    struct S__ p1;
};
    
// ValueTuple`6
struct S_oooooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
};
    
// ValueTuple`8
struct S_oooooooS_o__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_o_ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oo__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oo_ p7;
};
    
// ValueTuple`8
struct S_oooooooS_ooo__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_ooo_ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oooo__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooo_ p7;
};
    
// ValueTuple`8
struct S_oooooooS_ooooo__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_ooooo_ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oooooo__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooo_ p7;
};
    
// ValueTuple`8
struct S_oooooooS_ooooooo__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_ooooooo_ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oooooooS_o___
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooooS_o__ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oooooooS_oo___
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooooS_oo__ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oooooooS_ooo___
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooooS_ooo__ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oooooooS_oooo___
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooooS_oooo__ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oooooooS_ooooo___
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooooS_ooooo__ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oooooooS_oooooo___
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooooS_oooooo__ p7;
};
    
// ValueTuple`8
struct S_oooooooS_oooooooS_ooooooo___
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooooS_ooooooo__ p7;
};
    
// SequenceReader`1
struct S_S_Oi4_S_Oi4_bi8S_OOi4i4_S_S_p_i4_i4i8_
{
    struct S_Oi4_ p0;
    struct S_Oi4_ p1;
    bool p2;
    int64_t p3;
    struct S_OOi4i4_ p4;
    struct S_S_p_i4_ p5;
    int32_t p6;
    int64_t p7;
};
    
// Register
struct S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8_
{
    uint8_t p0;
    uint8_t p1;
    uint8_t p2;
    uint8_t p3;
    uint8_t p4;
    uint8_t p5;
    uint8_t p6;
    uint8_t p7;
    uint8_t p8;
    uint8_t p9;
    uint8_t p10;
    uint8_t p11;
    uint8_t p12;
    uint8_t p13;
    uint8_t p14;
    uint8_t p15;
    int8_t p16;
    int8_t p17;
    int8_t p18;
    int8_t p19;
    int8_t p20;
    int8_t p21;
    int8_t p22;
    int8_t p23;
    int8_t p24;
    int8_t p25;
    int8_t p26;
    int8_t p27;
    int8_t p28;
    int8_t p29;
    int8_t p30;
    int8_t p31;
    uint16_t p32;
    uint16_t p33;
    uint16_t p34;
    uint16_t p35;
    uint16_t p36;
    uint16_t p37;
    uint16_t p38;
    uint16_t p39;
    int16_t p40;
    int16_t p41;
    int16_t p42;
    int16_t p43;
    int16_t p44;
    int16_t p45;
    int16_t p46;
    int16_t p47;
    uint32_t p48;
    uint32_t p49;
    uint32_t p50;
    uint32_t p51;
    int32_t p52;
    int32_t p53;
    int32_t p54;
    int32_t p55;
    uint64_t p56;
    uint64_t p57;
    int64_t p58;
    int64_t p59;
    float p60;
    float p61;
    float p62;
    float p63;
    double p64;
    double p65;
};
    
// Vector`1
struct S_S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8__
{
    struct S_u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1u1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1i1u2u2u2u2u2u2u2u2i2i2i2i2i2i2i2i2u4u4u4u4i4i4i4i4u8u8i8i8r4r4r4r4r8r8_ p0;
};
    
// JobScheduleParameters
struct S_S_u8i4i4p_i4pp_
{
    struct S_u8i4i4p_ p0;
    int32_t p1;
    void* p2;
    void* p3;
};
    
// Nullable`1
struct N_bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__
{
    bool hasValue;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p1;
};
    
// MeshDataArray
struct S_Pvi4i4i4S_pi4i4__
{
    void* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    struct S_pi4i4_ p4;
};
    
// Particle
struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_
{
    struct S_r4r4r4_ p0;
    struct S_r4r4r4_ p1;
    struct S_r4r4r4_ p2;
    struct S_r4r4r4_ p3;
    struct S_r4r4r4_ p4;
    struct S_r4r4r4_ p5;
    struct S_r4r4r4_ p6;
    struct S_r4r4r4_ p7;
    struct S_i4u1u1u1u1_ p8;
    uint32_t p9;
    uint32_t p10;
    float p11;
    float p12;
    int32_t p13;
    float p14;
    float p15;
    uint32_t p16;
};
    
// Emission
struct S_r4r4S_u4u4u4u4__
{
    float p0;
    float p1;
    struct S_u4u4u4u4_ p2;
};
    
// Initial
struct S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4___
{
    struct S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__ p0;
};
    
// Shape
struct S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__r4r4r4r4r4r4i4_
{
    struct S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__ p0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    int32_t p7;
};
    
// Lights
struct S_S_u4u4u4u4_r4_
{
    struct S_u4u4u4u4_ p0;
    float p1;
};
    
// PlaybackState
struct S_r4r4r4i4S_r4r4S_u4u4u4u4__S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4___S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__r4r4r4r4r4r4i4_S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4___S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4___S_r4_S_S_u4u4u4u4_r4_S_r4__
{
    float p0;
    float p1;
    float p2;
    int32_t p3;
    struct S_r4r4S_u4u4u4u4__ p4;
    struct S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4___ p5;
    struct S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4__r4r4r4r4r4r4i4_ p6;
    struct S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4___ p7;
    struct S_S_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4_S_u4u4u4u4___ p8;
    struct S_r4_ p9;
    struct S_S_u4u4u4u4_r4_ p10;
    struct S_r4_ p11;
};
    
// Trails
struct S_oooooi4i4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    int32_t p5;
    int32_t p6;
};
    
// EmitParams
struct S_S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_bbbbbbbbbbb_
{
    struct S_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_r4r4r4_S_i4u1u1u1u1_u4u4r4r4i4r4r4u4_ p0;
    bool p1;
    bool p2;
    bool p3;
    bool p4;
    bool p5;
    bool p6;
    bool p7;
    bool p8;
    bool p9;
    bool p10;
    bool p11;
};
    
// MinMaxCurve
struct S_i4r4oor4r4_
{
    int32_t p0;
    float p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    float p4;
    float p5;
};
    
// VisitContext`2
struct S_S_oi4o_oo_
{
    struct S_oi4o_ p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
};
    
// TreeViewItemData`1
struct S_i4oo_
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
};
    
// Handle
struct S_i8ssi4o_
{
    int64_t p0;
    Il2CppString* p1;
    Il2CppString* p2;
    int32_t p3;
    Il2CppObject* p4;
};
    
// XRMirrorViewBlitDesc
struct S_pbbi4_
{
    void* p0;
    bool p1;
    bool p2;
    int32_t p3;
};
    
// UnityObjectInfo
struct S_si4i4u8_
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
    uint64_t p3;
};
    
// GfxResourceInfo
struct S_u8i4_
{
    uint64_t p0;
    int32_t p1;
};
    
// Nullable`1
struct N_bS_bbbu4i4br4br4r4r4u1u1br4r4r4r4r4__
{
    bool hasValue;
    struct S_bbbu4i4br4br4r4r4u1u1br4r4r4r4r4_ p1;
};
    
// ListBuffer`1
struct S_Pvi4Pv_
{
    void* p0;
    int32_t p1;
    void* p2;
};
    

// UniTask`1
struct S_ooi2_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    int16_t p2;
};
    
// CurveState
struct S_bbu4r4S_r4r4r4r4_r4r4bbb_
{
    bool p0;
    bool p1;
    uint32_t p2;
    float p3;
    struct S_r4r4r4r4_ p4;
    float p5;
    float p6;
    bool p7;
    bool p8;
    bool p9;
};
    
// ValueTask`1
struct S_Ooi2b_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    int16_t p2;
    bool p3;
};
    
// UniTask`1
struct S_oS_ooi2_i2_
{
    Il2CppObject* p0;
    struct S_ooi2_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oi2_i2_
{
    Il2CppObject* p0;
    struct S_oi2_ p1;
    int16_t p2;
};
    
// ValueTuple`2
struct S_S_ooi2_S_ooi2__
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
};
    
// ValueTuple`3
struct S_S_ooi2_S_ooi2_S_ooi2__
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
};
    
// ValueTuple`4
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2__
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
};
    
// ValueTuple`5
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2__
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
};
    
// ValueTuple`6
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2__
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
};
    
// ValueTuple`7
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2__
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
    struct S_ooi2_ p6;
};
    
// ValueTuple`1
struct S_S_ooi2__
{
    struct S_ooi2_ p0;
};
    
// ValueTuple`8
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2___
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
    struct S_ooi2_ p6;
    struct S_S_ooi2__ p7;
};
    
// ValueTuple`8
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2_S_ooi2___
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
    struct S_ooi2_ p6;
    struct S_S_ooi2_S_ooi2__ p7;
};
    
// ValueTuple`8
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2_S_ooi2_S_ooi2___
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
    struct S_ooi2_ p6;
    struct S_S_ooi2_S_ooi2_S_ooi2__ p7;
};
    
// ValueTuple`8
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2_S_ooi2_S_ooi2_S_ooi2___
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
    struct S_ooi2_ p6;
    struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2__ p7;
};
    
// ValueTuple`8
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2___
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
    struct S_ooi2_ p6;
    struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2__ p7;
};
    
// ValueTuple`8
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2___
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
    struct S_ooi2_ p6;
    struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2__ p7;
};
    
// ValueTuple`8
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2___
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
    struct S_ooi2_ p6;
    struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2__ p7;
};
    
// ValueTuple`8
struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2____
{
    struct S_ooi2_ p0;
    struct S_ooi2_ p1;
    struct S_ooi2_ p2;
    struct S_ooi2_ p3;
    struct S_ooi2_ p4;
    struct S_ooi2_ p5;
    struct S_ooi2_ p6;
    struct S_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_ooi2_S_S_ooi2___ p7;
};
    
// ValueTuple`2
struct S_S_oi2_S_oi2__
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
};
    
// ValueTuple`3
struct S_S_oi2_S_oi2_S_oi2__
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
};
    
// ValueTuple`4
struct S_S_oi2_S_oi2_S_oi2_S_oi2__
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
};
    
// ValueTuple`5
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2__
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
};
    
// ValueTuple`6
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2__
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
};
    
// ValueTuple`7
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2__
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
    struct S_oi2_ p6;
};
    
// ValueTuple`8
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2___
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
    struct S_oi2_ p6;
    struct S_S_oi2__ p7;
};
    
// ValueTuple`8
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2_S_oi2___
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
    struct S_oi2_ p6;
    struct S_S_oi2_S_oi2__ p7;
};
    
// ValueTuple`8
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2_S_oi2_S_oi2___
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
    struct S_oi2_ p6;
    struct S_S_oi2_S_oi2_S_oi2__ p7;
};
    
// ValueTuple`8
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2_S_oi2_S_oi2_S_oi2___
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
    struct S_oi2_ p6;
    struct S_S_oi2_S_oi2_S_oi2_S_oi2__ p7;
};
    
// ValueTuple`8
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2___
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
    struct S_oi2_ p6;
    struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2__ p7;
};
    
// ValueTuple`8
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2___
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
    struct S_oi2_ p6;
    struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2__ p7;
};
    
// ValueTuple`8
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2___
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
    struct S_oi2_ p6;
    struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2__ p7;
};
    
// ValueTuple`8
struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2____
{
    struct S_oi2_ p0;
    struct S_oi2_ p1;
    struct S_oi2_ p2;
    struct S_oi2_ p3;
    struct S_oi2_ p4;
    struct S_oi2_ p5;
    struct S_oi2_ p6;
    struct S_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_oi2_S_S_oi2___ p7;
};
    
// ParticleProperties
struct S_ooooooooooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    Il2CppObject* p9;
    Il2CppObject* p10;
};
    
// LitProperties
struct S_ooooooooooooooooooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    Il2CppObject* p9;
    Il2CppObject* p10;
    Il2CppObject* p11;
    Il2CppObject* p12;
    Il2CppObject* p13;
    Il2CppObject* p14;
    Il2CppObject* p15;
    Il2CppObject* p16;
    Il2CppObject* p17;
    Il2CppObject* p18;
};
    
// Nullable`1
struct N_bu1_
{
    bool hasValue;
    uint8_t p1;
};
    
// Nullable`1
struct N_bc_
{
    bool hasValue;
    Il2CppChar p1;
};
    
// Nullable`1
struct N_bS_i4i4i4i4u8__
{
    bool hasValue;
    struct S_i4i4i4i4u8_ p1;
};
    
// Nullable`1
struct N_bS_i4i2i2u1u1u1u1u1u1u1u1__
{
    bool hasValue;
    struct S_i4i2i2u1u1u1u1u1u1u1u1_ p1;
};
    
// Nullable`1
struct N_bi2_
{
    bool hasValue;
    int16_t p1;
};
    
// Nullable`1
struct N_bi1_
{
    bool hasValue;
    int8_t p1;
};
    
// Nullable`1
struct N_bu2_
{
    bool hasValue;
    uint16_t p1;
};
    
// Nullable`1
struct N_bu8_
{
    bool hasValue;
    uint64_t p1;
};
    
// ChangesToApplySummary
struct S_i4i4i4i4i8i8i8i8_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int64_t p4;
    int64_t p5;
    int64_t p6;
    int64_t p7;
};
    
// FileData
struct S_i8i2u8bo_
{
    int64_t p0;
    int16_t p1;
    uint64_t p2;
    bool p3;
    Il2CppObject* p4;
};
    
// ConfiguredCancelableAsyncEnumerable`1
struct S_oS_o_b_
{
    Il2CppObject* p0;
    struct S_o_ p1;
    bool p2;
};
    
// ValueTask`1
struct S_Oi4i2b_
{
    Il2CppObject* p0;
    int32_t p1;
    int16_t p2;
    bool p3;
};
    
// Enumerator
struct S_oi4i4S_i4s__
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
    struct S_i4s_ p3;
};
    
// Enumerator
struct S_S_oi4i4S_i4s___
{
    struct S_oi4i4S_i4s__ p0;
};
    
// UQueryBuilder`1
struct S_ooooi4i4i4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    int32_t p4;
    int32_t p5;
    int32_t p6;
};
    
// CachedValue`1
struct S_osb_
{
    Il2CppObject* p0;
    Il2CppString* p1;
    bool p2;
};
    
// CachedValue`1
struct S_or4b_
{
    Il2CppObject* p0;
    float p1;
    bool p2;
};
    
// CachedValue`1
struct S_oi4b_
{
    Il2CppObject* p0;
    int32_t p1;
    bool p2;
};
    
// CachedValue`1
struct S_oS_u8_b_
{
    Il2CppObject* p0;
    struct S_u8_ p1;
    bool p2;
};
    
// CachedValue`1
struct S_oS_i8_b_
{
    Il2CppObject* p0;
    struct S_i8_ p1;
    bool p2;
};
    
// MethodInfo
struct S_ssu4_
{
    Il2CppString* p0;
    Il2CppString* p1;
    uint32_t p2;
};
    
// CacheServerCounters
struct S_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8__
{
    struct S_i8i8_ p0;
    struct S_i8i8_ p1;
    struct S_i8i8_ p2;
    struct S_i8i8_ p3;
    struct S_i8i8_ p4;
    struct S_i8i8_ p5;
    struct S_i8i8_ p6;
    struct S_i8i8_ p7;
    struct S_i8i8_ p8;
    struct S_i8i8_ p9;
    struct S_i8i8_ p10;
    struct S_i8i8_ p11;
    struct S_i8i8_ p12;
    struct S_i8i8_ p13;
    struct S_i8i8_ p14;
    struct S_i8i8_ p15;
};
    
// ImportCounters
struct S_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8__
{
    struct S_i8i8_ p0;
    struct S_i8i8_ p1;
    struct S_i8i8_ p2;
    struct S_i8i8_ p3;
    struct S_i8i8_ p4;
    struct S_i8i8_ p5;
};
    
// AssetDatabaseCounters
struct S_S_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8__S_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8___
{
    struct S_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8__ p0;
    struct S_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8_S_i8i8__ p1;
};
    
// ValueTask`1
struct S_OS_u4i4_i2b_
{
    Il2CppObject* p0;
    struct S_u4i4_ p1;
    int16_t p2;
    bool p3;
};
    
// HDRDisplayInformation
struct S_i4i4i4r4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    float p3;
};
    
// RuntimeResources
struct S_oooooooooo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    Il2CppObject* p9;
};
    
// UniTask`1
struct S_osi2_
{
    Il2CppObject* p0;
    Il2CppString* p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_si4i4_i2_
{
    Il2CppObject* p0;
    struct S_si4i4_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_obi2_
{
    Il2CppObject* p0;
    bool p1;
    int16_t p2;
};
    
// UniTask`1
struct S_or8i2_
{
    Il2CppObject* p0;
    double p1;
    int16_t p2;
};
    
// UniTask`1
struct S_or4i2_
{
    Il2CppObject* p0;
    float p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_i4i4i4i4u8_i2_
{
    Il2CppObject* p0;
    struct S_i4i4i4i4u8_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oN_br8_i2_
{
    Il2CppObject* p0;
    struct N_br8_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oN_br4_i2_
{
    Il2CppObject* p0;
    struct N_br4_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oN_bS_i4i4i4i4u8__i2_
{
    Il2CppObject* p0;
    struct N_bS_i4i4i4i4u8__ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oi4i2_
{
    Il2CppObject* p0;
    int32_t p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oi8i2_
{
    Il2CppObject* p0;
    int64_t p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oN_bi4_i2_
{
    Il2CppObject* p0;
    struct N_bi4_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oN_bi8_i2_
{
    Il2CppObject* p0;
    struct N_bi8_ p1;
    int16_t p2;
};
    
// Nullable`1
struct N_bS_r4r4r4r4i4i4r4r4__
{
    bool hasValue;
    struct S_r4r4r4r4i4i4r4r4_ p1;
};
    
// Selection
struct S_oi4N_bS_r4r4r4r4i4i4r4r4___
{
    Il2CppObject* p0;
    int32_t p1;
    struct N_bS_r4r4r4r4i4i4r4r4__ p2;
};
    
// ValueTuple`2
struct S_r4s_
{
    float p0;
    Il2CppString* p1;
};
    
// ValueTuple`2
struct S_S_oi2_S_oS_oi4___
{
    struct S_oi2_ p0;
    struct S_oS_oi4__ p1;
};
    
// UniTask`1
struct S_oS__i2_
{
    Il2CppObject* p0;
    struct S__ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oo_i2_
{
    Il2CppObject* p0;
    struct S_oo_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_ooo_i2_
{
    Il2CppObject* p0;
    struct S_ooo_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooo_i2_
{
    Il2CppObject* p0;
    struct S_oooo_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_ooooo_i2_
{
    Il2CppObject* p0;
    struct S_ooooo_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooooo_i2_
{
    Il2CppObject* p0;
    struct S_oooooo_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_ooooooo_i2_
{
    Il2CppObject* p0;
    struct S_ooooooo_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooooooS_o__i2_
{
    Il2CppObject* p0;
    struct S_oooooooS_o__ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooooooS_oo__i2_
{
    Il2CppObject* p0;
    struct S_oooooooS_oo__ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooooooS_ooo__i2_
{
    Il2CppObject* p0;
    struct S_oooooooS_ooo__ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooooooS_oooo__i2_
{
    Il2CppObject* p0;
    struct S_oooooooS_oooo__ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooooooS_ooooo__i2_
{
    Il2CppObject* p0;
    struct S_oooooooS_ooooo__ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooooooS_oooooo__i2_
{
    Il2CppObject* p0;
    struct S_oooooooS_oooooo__ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooooooS_ooooooo__i2_
{
    Il2CppObject* p0;
    struct S_oooooooS_ooooooo__ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oooooooS_oooooooS_o___i2_
{
    Il2CppObject* p0;
    struct S_oooooooS_oooooooS_o___ p1;
    int16_t p2;
};
    
// ValueTuple`2
struct S_bo_
{
    bool p0;
    Il2CppObject* p1;
};
    
// UniTask`1
struct S_oS_bo_i2_
{
    Il2CppObject* p0;
    struct S_bo_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_i4o_i2_
{
    Il2CppObject* p0;
    struct S_i4o_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_i4oo_i2_
{
    Il2CppObject* p0;
    struct S_i4oo_ p1;
    int16_t p2;
};
    
// ValueTuple`4
struct S_i4ooo_
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
};
    
// UniTask`1
struct S_oS_i4ooo_i2_
{
    Il2CppObject* p0;
    struct S_i4ooo_ p1;
    int16_t p2;
};
    
// ValueTuple`5
struct S_i4oooo_
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
};
    
// UniTask`1
struct S_oS_i4oooo_i2_
{
    Il2CppObject* p0;
    struct S_i4oooo_ p1;
    int16_t p2;
};
    
// ValueTuple`6
struct S_i4ooooo_
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
};
    
// UniTask`1
struct S_oS_i4ooooo_i2_
{
    Il2CppObject* p0;
    struct S_i4ooooo_ p1;
    int16_t p2;
};
    
// ValueTuple`7
struct S_i4oooooo_
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
};
    
// UniTask`1
struct S_oS_i4oooooo_i2_
{
    Il2CppObject* p0;
    struct S_i4oooooo_ p1;
    int16_t p2;
};
    
// ValueTuple`8
struct S_i4ooooooS_o__
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_o_ p7;
};
    
// UniTask`1
struct S_oS_i4ooooooS_o__i2_
{
    Il2CppObject* p0;
    struct S_i4ooooooS_o__ p1;
    int16_t p2;
};
    
// ValueTuple`8
struct S_i4ooooooS_oo__
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oo_ p7;
};
    
// UniTask`1
struct S_oS_i4ooooooS_oo__i2_
{
    Il2CppObject* p0;
    struct S_i4ooooooS_oo__ p1;
    int16_t p2;
};
    
// ValueTuple`8
struct S_i4ooooooS_ooo__
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_ooo_ p7;
};
    
// UniTask`1
struct S_oS_i4ooooooS_ooo__i2_
{
    Il2CppObject* p0;
    struct S_i4ooooooS_ooo__ p1;
    int16_t p2;
};
    
// ValueTuple`8
struct S_i4ooooooS_oooo__
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooo_ p7;
};
    
// UniTask`1
struct S_oS_i4ooooooS_oooo__i2_
{
    Il2CppObject* p0;
    struct S_i4ooooooS_oooo__ p1;
    int16_t p2;
};
    
// ValueTuple`8
struct S_i4ooooooS_ooooo__
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_ooooo_ p7;
};
    
// UniTask`1
struct S_oS_i4ooooooS_ooooo__i2_
{
    Il2CppObject* p0;
    struct S_i4ooooooS_ooooo__ p1;
    int16_t p2;
};
    
// ValueTuple`8
struct S_i4ooooooS_oooooo__
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooo_ p7;
};
    
// UniTask`1
struct S_oS_i4ooooooS_oooooo__i2_
{
    Il2CppObject* p0;
    struct S_i4ooooooS_oooooo__ p1;
    int16_t p2;
};
    
// ValueTuple`8
struct S_i4ooooooS_ooooooo__
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_ooooooo_ p7;
};
    
// UniTask`1
struct S_oS_i4ooooooS_ooooooo__i2_
{
    Il2CppObject* p0;
    struct S_i4ooooooS_ooooooo__ p1;
    int16_t p2;
};
    
// ValueTuple`8
struct S_i4ooooooS_oooooooS_o___
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooooS_o__ p7;
};
    
// UniTask`1
struct S_oS_i4ooooooS_oooooooS_o___i2_
{
    Il2CppObject* p0;
    struct S_i4ooooooS_oooooooS_o___ p1;
    int16_t p2;
};
    
// ValueTuple`8
struct S_i4ooooooS_oooooooS_oo___
{
    int32_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    struct S_oooooooS_oo__ p7;
};
    
// UniTask`1
struct S_oS_i4ooooooS_oooooooS_oo___i2_
{
    Il2CppObject* p0;
    struct S_i4ooooooS_oooooooS_oo___ p1;
    int16_t p2;
};
    
// Awaiter
struct S_S_oS_oo_i2__
{
    struct S_oS_oo_i2_ p0;
};
    
// Awaiter
struct S_S_oS_ooo_i2__
{
    struct S_oS_ooo_i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooo_i2__
{
    struct S_oS_oooo_i2_ p0;
};
    
// Awaiter
struct S_S_oS_ooooo_i2__
{
    struct S_oS_ooooo_i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooooo_i2__
{
    struct S_oS_oooooo_i2_ p0;
};
    
// Awaiter
struct S_S_oS_ooooooo_i2__
{
    struct S_oS_ooooooo_i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooooooS_o__i2__
{
    struct S_oS_oooooooS_o__i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooooooS_oo__i2__
{
    struct S_oS_oooooooS_oo__i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooooooS_ooo__i2__
{
    struct S_oS_oooooooS_ooo__i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooooooS_oooo__i2__
{
    struct S_oS_oooooooS_oooo__i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooooooS_ooooo__i2__
{
    struct S_oS_oooooooS_ooooo__i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooooooS_oooooo__i2__
{
    struct S_oS_oooooooS_oooooo__i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooooooS_ooooooo__i2__
{
    struct S_oS_oooooooS_ooooooo__i2_ p0;
};
    
// Awaiter
struct S_S_oS_oooooooS_oooooooS_o___i2__
{
    struct S_oS_oooooooS_oooooooS_o___i2_ p0;
};
    
// UniTask`1
struct S_oS_pi4_i2_
{
    Il2CppObject* p0;
    struct S_pi4_ p1;
    int16_t p2;
};
    
// Awaiter
struct S_S_oS_pi4_i2__
{
    struct S_oS_pi4_i2_ p0;
};
    
// UniTaskCompletionSourceCore`1
struct S_oOi2bi4oO_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    int16_t p2;
    bool p3;
    int32_t p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
};
    
// UniTask`1
struct S_oS_r4r4_i2_
{
    Il2CppObject* p0;
    struct S_r4r4_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_oi4_i2_
{
    Il2CppObject* p0;
    struct S_oi4_ p1;
    int16_t p2;
};
    
// UniTask`1
struct S_oS_i4S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_Pvi4i4i4S_pi4i4_i4_S_pi4i4__i2_
{
    Il2CppObject* p0;
    struct S_i4S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4_S_Pvi4i4i4S_pi4i4_i4__S_Pvi4i4i4S_pi4i4_i4_S_pi4i4__ p1;
    int16_t p2;
};
    
// ArrayEnumerator
struct S_S_oi4_i4i4_
{
    struct S_oi4_ p0;
    int32_t p1;
    int32_t p2;
};
    
// ValueTask`1
struct S_OOi2b_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    int16_t p2;
    bool p3;
};
    
// ValueTask`1
struct S_OS_S_OOi4i4_u1_i2b_
{
    Il2CppObject* p0;
    struct S_S_OOi4i4_u1_ p1;
    int16_t p2;
    bool p3;
};
    
// ValueTask`1
struct S_OS_u1_i2b_
{
    Il2CppObject* p0;
    struct S_u1_ p1;
    int16_t p2;
    bool p3;
};
    
// Content
struct S_oi8_
{
    Il2CppObject* p0;
    int64_t p1;
};
    
// CheckAuthenticationParametersResult
struct S_u1bs_
{
    uint8_t p0;
    bool p1;
    Il2CppString* p2;
};
    
// Enumerator
struct S_oi4i4S_sO__
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
    struct S_sO_ p3;
};
    
// Enumerator
struct S_S_oi4i4S_sO___
{
    struct S_oi4i4S_sO__ p0;
};
    
// Enumerator
struct S_S_si4i4_oi4S_si4i4__
{
    struct S_si4i4_ p0;
    Il2CppObject* p1;
    int32_t p2;
    struct S_si4i4_ p3;
};
    
// Enumerator
struct S_oi4s_
{
    Il2CppObject* p0;
    int32_t p1;
    Il2CppString* p2;
};
    
// RenderRequest
struct S_i4oi4_
{
    int32_t p0;
    Il2CppObject* p1;
    int32_t p2;
};
    
// PhotoCaptureResult
struct S_i4i8_
{
    int32_t p0;
    int64_t p1;
};
    
// MultipleSubstitutionRecord
struct S_u4o_
{
    uint32_t p0;
    Il2CppObject* p1;
};
    
// LigatureSubstitutionRecord
struct S_ou4_
{
    Il2CppObject* p0;
    uint32_t p1;
};
    
// MarkToBaseAdjustmentRecord
struct S_u4S_r4r4_u4S_r4r4__
{
    uint32_t p0;
    struct S_r4r4_ p1;
    uint32_t p2;
    struct S_r4r4_ p3;
};
    
// KeyValuePair`2
struct S_S_i4i4_O_
{
    struct S_i4i4_ p0;
    Il2CppObject* p1;
};
    
// StylePropertyValue
struct S_oS_i4i4__
{
    Il2CppObject* p0;
    struct S_i4i4_ p1;
};
    
// StyleVariable
struct S_soo_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
};
    
// Page
struct S_S_Pvi4i4i4S_pi4i4_i4_i4_
{
    struct S_Pvi4i4i4S_pi4i4_i4_ p0;
    int32_t p1;
};
    
// PanelClearSettings
struct S_bbS_r4r4r4r4__
{
    bool p0;
    bool p1;
    struct S_r4r4r4r4_ p2;
};
    
// UsingEntry
struct S_sso_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppObject* p2;
};
    
// TextureInfo
struct S_obi4_
{
    Il2CppObject* p0;
    bool p1;
    int32_t p2;
};
    
// StyleValueManaged
struct S_i4i4O_
{
    int32_t p0;
    int32_t p1;
    Il2CppObject* p2;
};
    
// StyleValue
struct S_i4i4r4S_r4i4_S_r4r4r4r4_S_p_S_i4S_r4i4__S_i4i4__
{
    int32_t p0;
    int32_t p1;
    float p2;
    struct S_r4i4_ p3;
    struct S_r4r4r4r4_ p4;
    struct S_p_ p5;
    struct S_i4S_r4i4__ p6;
    struct S_i4i4_ p7;
};
    
// StartDragArgs
struct S_si4oo_
{
    Il2CppString* p0;
    int32_t p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
};
    
// SetupDragAndDropArgs
struct S_ooS_si4oo__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    struct S_si4oo_ p2;
};
    
// DragAndDropArgs
struct S_Oi4i4i4i4o_
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    Il2CppObject* p5;
};
    
// HandleDragAndDropArgs
struct S_S_Oi4i4i4i4o_S_r4r4__
{
    struct S_Oi4i4i4i4o_ p0;
    struct S_r4r4_ p1;
};
    
// TreeViewItemWrapper
struct S_S_i4i4o_i4_
{
    struct S_i4i4o_ p0;
    int32_t p1;
};
    
// ColumnState
struct S_i4sr4S_r4i4_b_
{
    int32_t p0;
    Il2CppString* p1;
    float p2;
    struct S_r4i4_ p3;
    bool p4;
};
    
// MarkerInfo
struct S_i4u2u2so_
{
    int32_t p0;
    uint16_t p1;
    uint16_t p2;
    Il2CppString* p3;
    Il2CppObject* p4;
};
    
// Nullable`1
struct N_bS_sosi4i4i4i4i4i4i4__
{
    bool hasValue;
    struct S_sosi4i4i4i4i4i4i4_ p1;
};
    
// DrawElement
struct S_S_r4r4r4r4_S_r4r4r4r4_o_
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    Il2CppObject* p2;
};
    
// FlowEvent
struct S_i4u4u1_
{
    int32_t p0;
    uint32_t p1;
    uint8_t p2;
};
    
// UnityVersion
struct S_bi4i4i4i4i4s_
{
    bool p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    int32_t p5;
    Il2CppString* p6;
};
    
// SemVersion
struct S_bi4i4i4ss_
{
    bool p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    Il2CppString* p4;
    Il2CppString* p5;
};
    
// SerializedDependency
struct S_sosi4_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    Il2CppString* p2;
    int32_t p3;
};
    
// GraphViewChoice
struct S_ooi4b_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    int32_t p2;
    bool p3;
};
    
// SearchSessionContext
struct S_ooS_u8u8__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    struct S_u8u8_ p2;
};
    
// QueryTokenHandler
struct S_ooi4i4o_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    int32_t p2;
    int32_t p3;
    Il2CppObject* p4;
};
    
// SearchDocumentList
struct S_i4i4i4i4i4oi4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
    Il2CppObject* p5;
    int32_t p6;
};
    
// SearchIndexEntry
struct S_i8i4u1i4r8S_i4i4i4i4i4oi4__
{
    int64_t p0;
    int32_t p1;
    uint8_t p2;
    int32_t p3;
    double p4;
    struct S_i4i4i4i4i4oi4_ p5;
};
    
// PropertyDatabaseVolatileRecord
struct S_S_u8S_u8u8__bS_O__
{
    struct S_u8S_u8u8__ p0;
    bool p1;
    struct S_O_ p2;
};
    
// PropertyDatabaseRecordValue
struct S_u1u4u4u4u4u4u4u4u4_
{
    uint8_t p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
    uint32_t p4;
    uint32_t p5;
    uint32_t p6;
    uint32_t p7;
    uint32_t p8;
};
    
// PropertyDatabaseRecord
struct S_S_u8S_u8u8__u1S_u1u4u4u4u4u4u4u4u4__
{
    struct S_u8S_u8u8__ p0;
    uint8_t p1;
    struct S_u1u4u4u4u4u4u4u4u4_ p2;
};
    
// ParsingState
struct S_oi4i4oboooi4i4oi4i4sobboi4bb_
{
    Il2CppObject* p0;
    int32_t p1;
    int32_t p2;
    Il2CppObject* p3;
    bool p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    int32_t p8;
    int32_t p9;
    Il2CppObject* p10;
    int32_t p11;
    int32_t p12;
    Il2CppString* p13;
    Il2CppObject* p14;
    bool p15;
    bool p16;
    Il2CppObject* p17;
    int32_t p18;
    bool p19;
    bool p20;
};
    
// ZipGenericExtraField
struct S_u2u2o_
{
    uint16_t p0;
    uint16_t p1;
    Il2CppObject* p2;
};
    
// XRView
struct S_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_S_r4r4r4r4_oi4S_r4r4__
{
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p0;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    Il2CppObject* p3;
    int32_t p4;
    struct S_r4r4_ p5;
};
    
// ValueTuple`2
struct S_OS_oi4__
{
    Il2CppObject* p0;
    struct S_oi4_ p1;
};
    
// RendererListResource
struct S_S_i4i4S_i4i4_N_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__oobi4u4i4i4S_pPvS_pi4i4__oS_i4_o_S_pu4u4u4__
{
    struct S_i4i4S_i4i4_N_bS_S_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_S_u1u1u1u1u1u1u1u1_u1u1i2_S_i4i4r4u1u1u1u1_S_u1i1_S_u1u1u1u1u1u1u1u1u1u1u1u1_i4i4__oobi4u4i4i4S_pPvS_pi4i4__oS_i4_o_ p0;
    struct S_pu4u4u4_ p1;
};
    
// CompiledPassInfo
struct S_oooi4bbbi4i4bS_pi4i4_boo_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    int32_t p3;
    bool p4;
    bool p5;
    bool p6;
    int32_t p7;
    int32_t p8;
    bool p9;
    struct S_pi4i4_ p10;
    bool p11;
    Il2CppObject* p12;
    Il2CppObject* p13;
};
    
// PassDebugData
struct S_soobbi4i4b_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    bool p3;
    bool p4;
    int32_t p5;
    int32_t p6;
    bool p7;
};
    
// ResourceDebugData
struct S_sbi4i4oo_
{
    Il2CppString* p0;
    bool p1;
    int32_t p2;
    int32_t p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
};
    
// SerializableBoundItem
struct S_sS_S_r4r4r4_S_r4r4r4___
{
    Il2CppString* p0;
    struct S_S_r4r4r4_S_r4r4r4__ p1;
};
    
// SerializableHasPVItem
struct S_sb_
{
    Il2CppString* p0;
    bool p1;
};
    
// SerializablePVBakeSettings
struct S_sS_i4S_br4r4i4b_S_br4r4r4i4S_i4____
{
    Il2CppString* p0;
    struct S_i4S_br4r4i4b_S_br4r4r4i4S_i4___ p1;
};
    
// Brick
struct S_S_i4i4i4_i4_
{
    struct S_i4i4i4_ p0;
    int32_t p1;
};
    
// ReservedBrick
struct S_S_S_i4i4i4_i4_i4_
{
    struct S_S_i4i4i4_i4_ p0;
    int32_t p1;
};
    
// CellIndexUpdateInfo
struct S_i4i4i4S_i4i4i4_S_i4i4i4_S_i4i4i4__
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    struct S_i4i4i4_ p3;
    struct S_i4i4i4_ p4;
    struct S_i4i4i4_ p5;
};
    
// SerializablePerScenarioDataItem
struct S_sS_i4oo__
{
    Il2CppString* p0;
    struct S_i4oo_ p1;
};
    
// ShadowResolutionRequest
struct S_i4i4i4bbi4i4i4_
{
    int32_t p0;
    int32_t p1;
    int32_t p2;
    bool p3;
    bool p4;
    int32_t p5;
    int32_t p6;
    int32_t p7;
};
    
// Entry
struct S_i8i8o_
{
    int64_t p0;
    int64_t p1;
    Il2CppObject* p2;
};
    
// IntervalTreeNode
struct S_i8i4i4i4i4_
{
    int64_t p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    int32_t p4;
};
    
// MaterialHeaderScopeItem
struct S_ou4os_
{
    Il2CppObject* p0;
    uint32_t p1;
    Il2CppObject* p2;
    Il2CppString* p3;
};
    
// HLSLProperty
struct S_si4i4i4o_
{
    Il2CppString* p0;
    int32_t p1;
    int32_t p2;
    int32_t p3;
    Il2CppObject* p4;
};
    
// DrawState
struct S_bS_r4r4r4r4__
{
    bool p0;
    struct S_r4r4r4r4_ p1;
};
    
// SlotReference
struct S_S_os_i4_
{
    struct S_os_ p0;
    int32_t p1;
};
    
// StructData
struct S_S_r4r4r4r4_S_r4r4r4r4_r4bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__
{
    struct S_r4r4r4r4_ p0;
    struct S_r4r4r4r4_ p1;
    float p2;
    bool p3;
    struct S_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4_ p4;
};
    
// PreviewProperty
struct S_si4S_oooo_S_S_r4r4r4r4_S_r4r4r4r4_r4bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__i4_
{
    Il2CppString* p0;
    int32_t p1;
    struct S_oooo_ p2;
    struct S_S_r4r4r4r4_S_r4r4r4r4_r4bS_r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4r4__ p3;
    int32_t p4;
};
    
// NotificationEntry
struct S_r8obi2_
{
    double p0;
    Il2CppObject* p1;
    bool p2;
    int16_t p3;
};
    
// Nullable`1
struct N_bS_oooo__
{
    bool hasValue;
    struct S_oooo_ p1;
};
    
// ServiceCacheKey
struct S_S_Oo_i4_
{
    struct S_Oo_ p0;
    int32_t p1;
};
    
// ResultCache
struct S_i4S_S_Oo_i4__
{
    int32_t p0;
    struct S_S_Oo_i4_ p1;
};
    
// ActivityCreationOptions`1
struct S_oS_S_s_S_s_i4sb_sosi4sooi4_
{
    Il2CppObject* p0;
    struct S_S_s_S_s_i4sb_ p1;
    Il2CppString* p2;
    Il2CppObject* p3;
    Il2CppString* p4;
    int32_t p5;
    Il2CppString* p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    int32_t p9;
};
    
// ActivityCreationOptions`1
struct S_oS_S_s_S_s_i4sb_sosi4S_S_s_S_s_i4sb_ooi4_
{
    Il2CppObject* p0;
    struct S_S_s_S_s_i4sb_ p1;
    Il2CppString* p2;
    Il2CppObject* p3;
    Il2CppString* p4;
    int32_t p5;
    struct S_S_s_S_s_i4sb_ p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    int32_t p9;
};
    
// ActivityCreationOptions`1
struct S_oS_S_s_S_s_i4sb_sosi4oooi4_
{
    Il2CppObject* p0;
    struct S_S_s_S_s_i4sb_ p1;
    Il2CppString* p2;
    Il2CppObject* p3;
    Il2CppString* p4;
    int32_t p5;
    Il2CppObject* p6;
    Il2CppObject* p7;
    Il2CppObject* p8;
    int32_t p9;
};
    
// RiderInfo
struct S_bssos_
{
    bool p0;
    Il2CppString* p1;
    Il2CppString* p2;
    Il2CppObject* p3;
    Il2CppString* p4;
};
    
// AsyncLocalValueChangedArgs`1
struct S_S_o_S_o_b_
{
    struct S_o_ p0;
    struct S_o_ p1;
    bool p2;
};
    
// SubSceneInfo
struct S_oS_i4_osS_i4u1u1u1u1__
{
    Il2CppObject* p0;
    struct S_i4_ p1;
    Il2CppObject* p2;
    Il2CppString* p3;
    struct S_i4u1u1u1u1_ p4;
};
    
// StyleSelectorPart
struct S_si4O_
{
    Il2CppString* p0;
    int32_t p1;
    Il2CppObject* p2;
};
    
// KeyValuePair`2
struct S_S_r4r4r4r4_o_
{
    struct S_r4r4r4r4_ p0;
    Il2CppObject* p1;
};
    
// State
struct S_oS_i4_i4r4_
{
    Il2CppObject* p0;
    struct S_i4_ p1;
    int32_t p2;
    float p3;
};
    
// Alloc
struct S_u4u4Ob_
{
    uint32_t p0;
    uint32_t p1;
    Il2CppObject* p2;
    bool p3;
};
    
// AllocToFree
struct S_S_u4u4Ob_ob_
{
    struct S_u4u4Ob_ p0;
    Il2CppObject* p1;
    bool p2;
};
    
// AllocToUpdate
struct S_u4u4oS_u4u4Ob_S_u4u4Ob_ob_
{
    uint32_t p0;
    uint32_t p1;
    Il2CppObject* p2;
    struct S_u4u4Ob_ p3;
    struct S_u4u4Ob_ p4;
    Il2CppObject* p5;
    bool p6;
};
    
// RenderNodeData
struct S_ooooooor4S_Pvi4i4i4i4S_pi4i4__S_Pvi4i4i4i4S_pi4i4___
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
    float p7;
    struct S_Pvi4i4i4i4S_pi4i4__ p8;
    struct S_Pvi4i4i4i4S_pi4i4__ p9;
};
    
// Page
struct S_u2u2i4_
{
    uint16_t p0;
    uint16_t p1;
    int32_t p2;
};
    
// Entry
struct S_S_Pvi4i4i4i4S_pi4i4__S_Pvi4i4i4i4S_pi4i4__or4S_i4_oS_i4u2u1u1_i4bbbi4i4_
{
    struct S_Pvi4i4i4i4S_pi4i4__ p0;
    struct S_Pvi4i4i4i4S_pi4i4__ p1;
    Il2CppObject* p2;
    float p3;
    struct S_i4_ p4;
    Il2CppObject* p5;
    struct S_i4u2u1u1_ p6;
    int32_t p7;
    bool p8;
    bool p9;
    bool p10;
    int32_t p11;
    int32_t p12;
};
    
// AllocMeshData
struct S_ooS_i4_oi4S_i4u2u1u1__
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    struct S_i4_ p2;
    Il2CppObject* p3;
    int32_t p4;
    struct S_i4u2u1u1_ p5;
};
    
// EvalHandlerArgs
struct S_sObi4ooO_
{
    Il2CppString* p0;
    Il2CppObject* p1;
    bool p2;
    int32_t p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
};
    
// QueryData
struct S_oosoooS_r4r4_i4_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    Il2CppString* p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
    Il2CppObject* p5;
    struct S_r4r4_ p6;
    int32_t p7;
};
    
// unitytls_errorstate
struct S_u4u4u8_
{
    uint32_t p0;
    uint32_t p1;
    uint64_t p2;
};
    
// unitytls_tlsctx_callbacks
struct S_ooPv_
{
    Il2CppObject* p0;
    Il2CppObject* p1;
    void* p2;
};
    
// Entry
struct S_Oi8i8S_r4r4r4r4__
{
    Il2CppObject* p0;
    int64_t p1;
    int64_t p2;
    struct S_r4r4r4r4_ p3;
};
    
// Entry
struct S_i8i8S_Oi8i8S_r4r4r4r4___
{
    int64_t p0;
    int64_t p1;
    struct S_Oi8i8S_r4r4r4r4__ p2;
};
    
// MarkerOverlay
struct S_oS_r4r4r4r4_bbo_
{
    Il2CppObject* p0;
    struct S_r4r4r4r4_ p1;
    bool p2;
    bool p3;
    Il2CppObject* p4;
};
    
// LayerZOrder
struct S_u1i4_
{
    uint8_t p0;
    int32_t p1;
};
    
// ClipBlends
struct S_i4S_r4r4r4r4_i4S_r4r4r4r4__
{
    int32_t p0;
    struct S_r4r4r4r4_ p1;
    int32_t p2;
    struct S_r4r4r4r4_ p3;
};
    
// ClipDrawData
struct S_oS_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_S_r4r4r4r4_sbbr8r8ooobbi4oS_i4S_r4r4r4r4_i4S_r4r4r4r4__S_obsbsS_r4r4r4r4__o_
{
    Il2CppObject* p0;
    struct S_r4r4r4r4_ p1;
    struct S_r4r4r4r4_ p2;
    struct S_r4r4r4r4_ p3;
    struct S_r4r4r4r4_ p4;
    Il2CppString* p5;
    bool p6;
    bool p7;
    double p8;
    double p9;
    Il2CppObject* p10;
    Il2CppObject* p11;
    Il2CppObject* p12;
    bool p13;
    bool p14;
    int32_t p15;
    Il2CppObject* p16;
    struct S_i4S_r4r4r4r4_i4S_r4r4r4r4__ p17;
    struct S_obsbsS_r4r4r4r4__ p18;
    Il2CppObject* p19;
};
    
// OverlayDrawer
struct S_i4S_r4r4r4r4_soS_r4r4r4r4_oo_
{
    int32_t p0;
    struct S_r4r4r4r4_ p1;
    Il2CppString* p2;
    Il2CppObject* p3;
    struct S_r4r4r4r4_ p4;
    Il2CppObject* p5;
    Il2CppObject* p6;
};
    
// Frame
struct S_sS_r4r4r4r4_bbS_r4r4r4r4_S_r4r4_S_r4r4__
{
    Il2CppString* p0;
    struct S_r4r4r4r4_ p1;
    bool p2;
    bool p3;
    struct S_r4r4r4r4_ p4;
    struct S_r4r4_ p5;
    struct S_r4r4_ p6;
};
    
// ConverterItemDescriptor
struct S_ssss_
{
    Il2CppString* p0;
    Il2CppString* p1;
    Il2CppString* p2;
    Il2CppString* p3;
};
    
// PropertyRef
struct S_u8oo_
{
    uint64_t p0;
    Il2CppObject* p1;
    Il2CppObject* p2;
};
    
// ValueTuple`5
struct S_obboo_
{
    Il2CppObject* p0;
    bool p1;
    bool p2;
    Il2CppObject* p3;
    Il2CppObject* p4;
};
    
// Measurement`1
struct S_oS___
{
    Il2CppObject* p0;
    struct S__ p1;
};
    

}


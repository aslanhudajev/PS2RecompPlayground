#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _initRefImages
// Address: 0x120608 - 0x1206f0
void _initRefImages_0x120608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120608u;

    // 0x120608: 0x3c020017
    ctx->pc = 0x120608u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x12060c: 0x3c0c0017
    ctx->pc = 0x12060cu;
    SET_GPR_S32(ctx, 12, ((uint32_t)23 << 16));
    // 0x120610: 0x8c43190c
    ctx->pc = 0x120610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6412)));
    // 0x120614: 0x27bdffb0
    ctx->pc = 0x120614u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x120618: 0x8d821910
    ctx->pc = 0x120618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 6416)));
    // 0x12061c: 0x3c0e0fff
    ctx->pc = 0x12061cu;
    SET_GPR_S32(ctx, 14, ((uint32_t)4095 << 16));
    // 0x120620: 0xffb00000
    ctx->pc = 0x120620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120624: 0x35ceffff
    ctx->pc = 0x120624u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)65535);
    // 0x120628: 0x621818
    ctx->pc = 0x120628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x12062c: 0x2410ffff
    ctx->pc = 0x12062cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120630: 0xffb20020
    ctx->pc = 0x120630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x120634: 0x24120180
    ctx->pc = 0x120634u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 384));
    // 0x120638: 0x8fac0058
    ctx->pc = 0x120638u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12063c: 0xffb10010
    ctx->pc = 0x12063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x120640: 0x203802a
    ctx->pc = 0x120640u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x120644: 0x246201ff
    ctx->pc = 0x120644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 511));
    // 0x120648: 0x70100b
    ctx->pc = 0x120648u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x12064c: 0x18e8824
    ctx->pc = 0x12064cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x120650: 0x21243
    ctx->pc = 0x120650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x120654: 0xffb30030
    ctx->pc = 0x120654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x120658: 0x521818
    ctx->pc = 0x120658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x12065c: 0x8fad0060
    ctx->pc = 0x12065cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x120660: 0x3c132000
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 19, ((uint32_t)8192 << 16));
    // 0x120664: 0xffb40040
    ctx->pc = 0x120664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x120668: 0x8fb40068
    ctx->pc = 0x120668u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12066c: 0x2338825
    ctx->pc = 0x12066cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x120670: 0x1ae7824
    ctx->pc = 0x120670u;
    SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x120674: 0xac910000
    ctx->pc = 0x120674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x120678: 0x6c6021
    ctx->pc = 0x120678u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x12067c: 0x1f37825
    ctx->pc = 0x12067cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
    // 0x120680: 0x521818
    ctx->pc = 0x120680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x120684: 0x522018
    ctx->pc = 0x120684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x120688: 0xacaf0000
    ctx->pc = 0x120688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x12068c: 0x18e6024
    ctx->pc = 0x12068cu;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x120690: 0x1936025
    ctx->pc = 0x120690u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 19));
    // 0x120694: 0xdfb20020
    ctx->pc = 0x120694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120698: 0xdfb00000
    ctx->pc = 0x120698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12069c: 0x6d6821
    ctx->pc = 0x12069cu;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1206a0: 0x941021
    ctx->pc = 0x1206a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1206a4: 0x28e1824
    ctx->pc = 0x1206a4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 14)));
    // 0x1206a8: 0x1ae6824
    ctx->pc = 0x1206a8u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1206ac: 0x731825
    ctx->pc = 0x1206acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1206b0: 0x4e1024
    ctx->pc = 0x1206b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x1206b4: 0xacc30000
    ctx->pc = 0x1206b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1206b8: 0x1b36825
    ctx->pc = 0x1206b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 19));
    // 0x1206bc: 0xacf10000
    ctx->pc = 0x1206bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x1206c0: 0x531025
    ctx->pc = 0x1206c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x1206c4: 0xad0f0000
    ctx->pc = 0x1206c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x1206c8: 0xad230000
    ctx->pc = 0x1206c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x1206cc: 0xad4c0000
    ctx->pc = 0x1206ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x1206d0: 0x8fa30050
    ctx->pc = 0x1206d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1206d4: 0xad6d0000
    ctx->pc = 0x1206d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x1206d8: 0xdfb40040
    ctx->pc = 0x1206d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1206dc: 0xdfb30030
    ctx->pc = 0x1206dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1206e0: 0xdfb10010
    ctx->pc = 0x1206e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1206e4: 0xac620000
    ctx->pc = 0x1206e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1206e8: 0x3e00008
    ctx->pc = 0x1206E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1206ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1206F0u;
}

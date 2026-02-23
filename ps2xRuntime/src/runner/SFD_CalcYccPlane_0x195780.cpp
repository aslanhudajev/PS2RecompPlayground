#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_CalcYccPlane
// Address: 0x195780 - 0x19580c
void SFD_CalcYccPlane_0x195780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_CalcYccPlane");


    ctx->pc = 0x195780u;

    // 0x195780: 0x2409ffff
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195784: 0x24a3000f
    ctx->pc = 0x195784u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 15));
    // 0x195788: 0x123102a
    ctx->pc = 0x195788u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 3)));
    // 0x19578c: 0x24a5001e
    ctx->pc = 0x19578cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30));
    // 0x195790: 0x24c8000f
    ctx->pc = 0x195790u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 15));
    // 0x195794: 0x62280b
    ctx->pc = 0x195794u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x195798: 0x52903
    ctx->pc = 0x195798u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x19579c: 0x128182a
    ctx->pc = 0x19579cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x1957a0: 0x24c6001e
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 30));
    // 0x1957a4: 0x24aa0003
    ctx->pc = 0x1957a4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 5), 3));
    // 0x1957a8: 0x103300b
    ctx->pc = 0x1957a8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 8));
    // 0x1957ac: 0x24a20006
    ctx->pc = 0x1957acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 6));
    // 0x1957b0: 0x12a182a
    ctx->pc = 0x1957b0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 10)));
    // 0x1957b4: 0x24a80007
    ctx->pc = 0x1957b4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 5), 7));
    // 0x1957b8: 0x143100b
    ctx->pc = 0x1957b8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 10));
    // 0x1957bc: 0x63103
    ctx->pc = 0x1957bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1957c0: 0x24a5000e
    ctx->pc = 0x1957c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 14));
    // 0x1957c4: 0x128482a
    ctx->pc = 0x1957c4u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x1957c8: 0x61a80
    ctx->pc = 0x1957c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 10));
    // 0x1957cc: 0x21083
    ctx->pc = 0x1957ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1957d0: 0x109280b
    ctx->pc = 0x1957d0u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 8));
    // 0x1957d4: 0x435018
    ctx->pc = 0x1957d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x1957d8: 0x63240
    ctx->pc = 0x1957d8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 9));
    // 0x1957dc: 0x528c3
    ctx->pc = 0x1957dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x1957e0: 0xa61818
    ctx->pc = 0x1957e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1957e4: 0x21180
    ctx->pc = 0x1957e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1957e8: 0x52980
    ctx->pc = 0x1957e8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 6));
    // 0x1957ec: 0xa4e2000e
    ctx->pc = 0x1957ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1957f0: 0x1445821
    ctx->pc = 0x1957f0u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1957f4: 0xa4e5000c
    ctx->pc = 0x1957f4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1957f8: 0xace40008
    ctx->pc = 0x1957f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1957fc: 0x6b3021
    ctx->pc = 0x1957fcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x195800: 0xaceb0000
    ctx->pc = 0x195800u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x195804: 0x3e00008
    ctx->pc = 0x195804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195808u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19580Cu;
}

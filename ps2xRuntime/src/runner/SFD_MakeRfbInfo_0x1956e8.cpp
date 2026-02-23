#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_MakeRfbInfo
// Address: 0x1956e8 - 0x195780
void SFD_MakeRfbInfo_0x1956e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_MakeRfbInfo");


    ctx->pc = 0x1956e8u;

    // 0x1956e8: 0x8c820000
    ctx->pc = 0x1956e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1956ec: 0x2409ffff
    ctx->pc = 0x1956ecu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1956f0: 0x8c870004
    ctx->pc = 0x1956f0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1956f4: 0x2446000f
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 15));
    // 0x1956f8: 0x126182a
    ctx->pc = 0x1956f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 6)));
    // 0x1956fc: 0x2442001e
    ctx->pc = 0x1956fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x195700: 0x24ea000f
    ctx->pc = 0x195700u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 7), 15));
    // 0x195704: 0xc3100b
    ctx->pc = 0x195704u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x195708: 0x21103
    ctx->pc = 0x195708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x19570c: 0x12a182a
    ctx->pc = 0x19570cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 10)));
    // 0x195710: 0x24e7001e
    ctx->pc = 0x195710u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 30));
    // 0x195714: 0x24480003
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 3));
    // 0x195718: 0x143380b
    ctx->pc = 0x195718u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 10));
    // 0x19571c: 0x24460006
    ctx->pc = 0x19571cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 6));
    // 0x195720: 0x128182a
    ctx->pc = 0x195720u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x195724: 0x73903
    ctx->pc = 0x195724u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x195728: 0x103300b
    ctx->pc = 0x195728u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 8));
    // 0x19572c: 0x8c880020
    ctx->pc = 0x19572cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x195730: 0x71a80
    ctx->pc = 0x195730u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 10));
    // 0x195734: 0x24440007
    ctx->pc = 0x195734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7));
    // 0x195738: 0x63083
    ctx->pc = 0x195738u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x19573c: 0x2442000e
    ctx->pc = 0x19573cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
    // 0x195740: 0x124482a
    ctx->pc = 0x195740u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 4)));
    // 0x195744: 0x89100b
    ctx->pc = 0x195744u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x195748: 0xc35018
    ctx->pc = 0x195748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x19574c: 0x73a40
    ctx->pc = 0x19574cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 9));
    // 0x195750: 0x210c3
    ctx->pc = 0x195750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x195754: 0x471818
    ctx->pc = 0x195754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x195758: 0x63180
    ctx->pc = 0x195758u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 6));
    // 0x19575c: 0x21180
    ctx->pc = 0x19575cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x195760: 0xa4a6000e
    ctx->pc = 0x195760u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x195764: 0x1485821
    ctx->pc = 0x195764u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x195768: 0xa4a2000c
    ctx->pc = 0x195768u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x19576c: 0xaca80008
    ctx->pc = 0x19576cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x195770: 0x6b3821
    ctx->pc = 0x195770u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x195774: 0xacab0000
    ctx->pc = 0x195774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x195778: 0x3e00008
    ctx->pc = 0x195778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19577Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195780u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutBeginEntry
// Address: 0x1a86b0 - 0x1a8754
void nlObjPutBeginEntry_0x1a86b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutBeginEntry");


    ctx->pc = 0x1a86b0u;

    // 0x1a86b0: 0x3c030030
    ctx->pc = 0x1a86b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a86b4: 0x70002628
    ctx->pc = 0x1a86b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a86b8: 0x24654090
    ctx->pc = 0x1a86b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 16528));
label_1a86bc:
    // 0x1a86bc: 0xaca00004
    ctx->pc = 0x1a86bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1a86c0: 0xaca00000
    ctx->pc = 0x1a86c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1a86c4: 0xaca00804
    ctx->pc = 0x1a86c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2052), GPR_U32(ctx, 0));
    // 0x1a86c8: 0xaca00800
    ctx->pc = 0x1a86c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2048), GPR_U32(ctx, 0));
    // 0x1a86cc: 0xaca0000c
    ctx->pc = 0x1a86ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1a86d0: 0xaca00008
    ctx->pc = 0x1a86d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1a86d4: 0xaca0080c
    ctx->pc = 0x1a86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2060), GPR_U32(ctx, 0));
    // 0x1a86d8: 0xaca00808
    ctx->pc = 0x1a86d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2056), GPR_U32(ctx, 0));
    // 0x1a86dc: 0xaca00014
    ctx->pc = 0x1a86dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1a86e0: 0xaca00010
    ctx->pc = 0x1a86e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1a86e4: 0xaca00814
    ctx->pc = 0x1a86e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2068), GPR_U32(ctx, 0));
    // 0x1a86e8: 0xaca00810
    ctx->pc = 0x1a86e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2064), GPR_U32(ctx, 0));
    // 0x1a86ec: 0xaca0001c
    ctx->pc = 0x1a86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1a86f0: 0xaca00018
    ctx->pc = 0x1a86f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1a86f4: 0xaca0081c
    ctx->pc = 0x1a86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2076), GPR_U32(ctx, 0));
    // 0x1a86f8: 0xaca00818
    ctx->pc = 0x1a86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2072), GPR_U32(ctx, 0));
    // 0x1a86fc: 0xaca00024
    ctx->pc = 0x1a86fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1a8700: 0xaca00020
    ctx->pc = 0x1a8700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1a8704: 0xaca00824
    ctx->pc = 0x1a8704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2084), GPR_U32(ctx, 0));
    // 0x1a8708: 0xaca00820
    ctx->pc = 0x1a8708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2080), GPR_U32(ctx, 0));
    // 0x1a870c: 0xaca0002c
    ctx->pc = 0x1a870cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1a8710: 0xaca00028
    ctx->pc = 0x1a8710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1a8714: 0xaca0082c
    ctx->pc = 0x1a8714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2092), GPR_U32(ctx, 0));
    // 0x1a8718: 0xaca00828
    ctx->pc = 0x1a8718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2088), GPR_U32(ctx, 0));
    // 0x1a871c: 0xaca00034
    ctx->pc = 0x1a871cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x1a8720: 0xaca00030
    ctx->pc = 0x1a8720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x1a8724: 0xaca00834
    ctx->pc = 0x1a8724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2100), GPR_U32(ctx, 0));
    // 0x1a8728: 0xaca00830
    ctx->pc = 0x1a8728u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2096), GPR_U32(ctx, 0));
    // 0x1a872c: 0xaca0003c
    ctx->pc = 0x1a872cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1a8730: 0xaca00038
    ctx->pc = 0x1a8730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x1a8734: 0xaca0083c
    ctx->pc = 0x1a8734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2108), GPR_U32(ctx, 0));
    // 0x1a8738: 0x24840008
    ctx->pc = 0x1a8738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a873c: 0xaca00838
    ctx->pc = 0x1a873cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2104), GPR_U32(ctx, 0));
    // 0x1a8740: 0x28830100
    ctx->pc = 0x1a8740u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 256));
    // 0x1a8744: 0x1460ffdd
    ctx->pc = 0x1A8744u;
    {
        const bool branch_taken_0x1a8744 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8748u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
        if (branch_taken_0x1a8744) {
            ctx->pc = 0x1A86BCu;
            goto label_1a86bc;
        }
    }
    ctx->pc = 0x1A874Cu;
    // 0x1a874c: 0x3e00008
    ctx->pc = 0x1A874Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8750u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937156), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A86BCu: goto label_1a86bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8754u;
}

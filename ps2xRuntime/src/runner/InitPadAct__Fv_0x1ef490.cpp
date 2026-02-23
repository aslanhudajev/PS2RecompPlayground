#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitPadAct__Fv
// Address: 0x1ef490 - 0x1ef528
void InitPadAct__Fv_0x1ef490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitPadAct__Fv");


    ctx->pc = 0x1ef490u;

    // 0x1ef490: 0x3c030051
    ctx->pc = 0x1ef490u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1ef494: 0x70003628
    ctx->pc = 0x1ef494u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef498: 0x24674f80
    ctx->pc = 0x1ef498u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 20352));
    // 0x1ef49c: 0x240500ff
    ctx->pc = 0x1ef49cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ef4a0: 0x24040001
    ctx->pc = 0x1ef4a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1ef4a4:
    // 0x1ef4a4: 0xa0e00000
    ctx->pc = 0x1ef4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4a8: 0xa0e50013
    ctx->pc = 0x1ef4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ef4ac: 0xa0e00001
    ctx->pc = 0x1ef4acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4b0: 0xa0e0000d
    ctx->pc = 0x1ef4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4b4: 0xa0e00007
    ctx->pc = 0x1ef4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4b8: 0xa0e50014
    ctx->pc = 0x1ef4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 20), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ef4bc: 0xa0e00002
    ctx->pc = 0x1ef4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4c0: 0xa0e0000e
    ctx->pc = 0x1ef4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4c4: 0xa0e00008
    ctx->pc = 0x1ef4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4c8: 0xa0e50015
    ctx->pc = 0x1ef4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 21), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ef4cc: 0xa0e00003
    ctx->pc = 0x1ef4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4d0: 0xa0e0000f
    ctx->pc = 0x1ef4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4d4: 0xa0e00009
    ctx->pc = 0x1ef4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4d8: 0xa0e50016
    ctx->pc = 0x1ef4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 22), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ef4dc: 0xa0e00004
    ctx->pc = 0x1ef4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4e0: 0xa0e00010
    ctx->pc = 0x1ef4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4e4: 0xa0e0000a
    ctx->pc = 0x1ef4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4e8: 0xa0e50017
    ctx->pc = 0x1ef4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 23), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ef4ec: 0xa0e00005
    ctx->pc = 0x1ef4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4f0: 0xa0e00011
    ctx->pc = 0x1ef4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4f4: 0xa0e0000b
    ctx->pc = 0x1ef4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef4f8: 0xa0e50018
    ctx->pc = 0x1ef4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ef4fc: 0xa0e00006
    ctx->pc = 0x1ef4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef500: 0xa0e00012
    ctx->pc = 0x1ef500u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef504: 0xa0e0000c
    ctx->pc = 0x1ef504u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef508: 0xa0e00013
    ctx->pc = 0x1ef508u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef50c: 0x24c60001
    ctx->pc = 0x1ef50cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ef510: 0xa0e40014
    ctx->pc = 0x1ef510u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 20), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ef514: 0x28c30002
    ctx->pc = 0x1ef514u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 2));
    // 0x1ef518: 0x1460ffe2
    ctx->pc = 0x1EF518u;
    {
        const bool branch_taken_0x1ef518 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF51Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25));
        if (branch_taken_0x1ef518) {
            ctx->pc = 0x1EF4A4u;
            goto label_1ef4a4;
        }
    }
    ctx->pc = 0x1EF520u;
    // 0x1ef520: 0x3e00008
    ctx->pc = 0x1EF520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF4A4u: goto label_1ef4a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF528u;
}

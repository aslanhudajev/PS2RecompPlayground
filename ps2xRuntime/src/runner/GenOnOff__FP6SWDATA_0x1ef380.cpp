#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GenOnOff__FP6SWDATA
// Address: 0x1ef380 - 0x1ef43c
void GenOnOff__FP6SWDATA_0x1ef380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GenOnOff__FP6SWDATA");


    ctx->pc = 0x1ef380u;

    // 0x1ef380: 0x70004628
    ctx->pc = 0x1ef380u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef384: 0x70801e28
    ctx->pc = 0x1ef384u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1ef388:
    // 0x1ef388: 0x94670002
    ctx->pc = 0x1ef388u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ef38c: 0x94660004
    ctx->pc = 0x1ef38cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ef390: 0x25080001
    ctx->pc = 0x1ef390u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ef394: 0x29050002
    ctx->pc = 0x1ef394u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), 2));
    // 0x1ef398: 0xe64826
    ctx->pc = 0x1ef398u;
    SET_GPR_U32(ctx, 9, XOR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ef39c: 0x1273024
    ctx->pc = 0x1ef39cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1ef3a0: 0xa4660006
    ctx->pc = 0x1ef3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ef3a4: 0x84660004
    ctx->pc = 0x1ef3a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ef3a8: 0x1263024
    ctx->pc = 0x1ef3a8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1ef3ac: 0xa4660008
    ctx->pc = 0x1ef3acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ef3b0: 0x9467000e
    ctx->pc = 0x1ef3b0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1ef3b4: 0x94660010
    ctx->pc = 0x1ef3b4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ef3b8: 0xe64826
    ctx->pc = 0x1ef3b8u;
    SET_GPR_U32(ctx, 9, XOR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ef3bc: 0x1273024
    ctx->pc = 0x1ef3bcu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1ef3c0: 0xa4660012
    ctx->pc = 0x1ef3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ef3c4: 0x84660010
    ctx->pc = 0x1ef3c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ef3c8: 0x1263024
    ctx->pc = 0x1ef3c8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1ef3cc: 0xa4660014
    ctx->pc = 0x1ef3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ef3d0: 0x94670036
    ctx->pc = 0x1ef3d0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x1ef3d4: 0x94660038
    ctx->pc = 0x1ef3d4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1ef3d8: 0xe64826
    ctx->pc = 0x1ef3d8u;
    SET_GPR_U32(ctx, 9, XOR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ef3dc: 0x1273024
    ctx->pc = 0x1ef3dcu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1ef3e0: 0xa466003a
    ctx->pc = 0x1ef3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ef3e4: 0x84660038
    ctx->pc = 0x1ef3e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1ef3e8: 0x1263024
    ctx->pc = 0x1ef3e8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1ef3ec: 0xa466003c
    ctx->pc = 0x1ef3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ef3f0: 0x94670042
    ctx->pc = 0x1ef3f0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x1ef3f4: 0x94660044
    ctx->pc = 0x1ef3f4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1ef3f8: 0xe64826
    ctx->pc = 0x1ef3f8u;
    SET_GPR_U32(ctx, 9, XOR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ef3fc: 0x1273024
    ctx->pc = 0x1ef3fcu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1ef400: 0xa4660046
    ctx->pc = 0x1ef400u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ef404: 0x84660044
    ctx->pc = 0x1ef404u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1ef408: 0x1263024
    ctx->pc = 0x1ef408u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1ef40c: 0xa4660048
    ctx->pc = 0x1ef40cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ef410: 0x14a0ffdd
    ctx->pc = 0x1EF410u;
    {
        const bool branch_taken_0x1ef410 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF414u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26));
        if (branch_taken_0x1ef410) {
            ctx->pc = 0x1EF388u;
            goto label_1ef388;
        }
    }
    ctx->pc = 0x1EF418u;
    // 0x1ef418: 0x94850068
    ctx->pc = 0x1ef418u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1ef41c: 0x9483006a
    ctx->pc = 0x1ef41cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x1ef420: 0xa33026
    ctx->pc = 0x1ef420u;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ef424: 0xc51824
    ctx->pc = 0x1ef424u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1ef428: 0xa483006c
    ctx->pc = 0x1ef428u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef42c: 0x8483006a
    ctx->pc = 0x1ef42cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x1ef430: 0xc31824
    ctx->pc = 0x1ef430u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ef434: 0x3e00008
    ctx->pc = 0x1EF434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF438u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 110), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF388u: goto label_1ef388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF43Cu;
}

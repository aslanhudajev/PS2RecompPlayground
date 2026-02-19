#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextItem
// Address: 0x26b398 - 0x26b454
void NextItem_0x26b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b398u;

    // 0x26b398: 0x3c020034
    ctx->pc = 0x26b398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b39c: 0x8c46cd98
    ctx->pc = 0x26b39cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x26b3a0: 0x3c030034
    ctx->pc = 0x26b3a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b3a4: 0x2463eb60
    ctx->pc = 0x26b3a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b3a8: 0x240201a0
    ctx->pc = 0x26b3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b3ac: 0x821018
    ctx->pc = 0x26b3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b3b0: 0x431021
    ctx->pc = 0x26b3b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b3b4: 0x8c450114
    ctx->pc = 0x26b3b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x26b3b8: 0xa6102a
    ctx->pc = 0x26b3b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x26b3bc: 0x18c00023
    ctx->pc = 0x26B3BCu;
    {
        const bool branch_taken_0x26b3bc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x26B3C0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
        if (branch_taken_0x26b3bc) {
            ctx->pc = 0x26B44Cu;
            goto label_26b44c;
        }
    }
    ctx->pc = 0x26B3C4u;
    // 0x26b3c4: 0x3c020034
    ctx->pc = 0x26b3c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b3c8: 0x240a0110
    ctx->pc = 0x26b3c8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 272));
    // 0x26b3cc: 0x8c4bcd94
    ctx->pc = 0x26b3ccu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x26b3d0: 0x24090003
    ctx->pc = 0x26b3d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b3d4: 0x2408ffff
    ctx->pc = 0x26b3d4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b3d8: 0x3c030034
    ctx->pc = 0x26b3d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b3dc: 0x2463eb60
    ctx->pc = 0x26b3dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b3e0: 0x240201a0
    ctx->pc = 0x26b3e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b3e4: 0x821018
    ctx->pc = 0x26b3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b3e8: 0x432021
    ctx->pc = 0x26b3e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b3ec: 0x3c020034
    ctx->pc = 0x26b3ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b3f0: 0x8c47cd98
    ctx->pc = 0x26b3f0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x26b3f4: 0x0
    ctx->pc = 0x26b3f4u;
    // NOP
label_26b3f8:
    // 0x26b3f8: 0xaa1018
    ctx->pc = 0x26b3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b3fc: 0x4b1821
    ctx->pc = 0x26b3fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x26b400: 0x8c620070
    ctx->pc = 0x26b400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x26b404: 0x5040000d
    ctx->pc = 0x26B404u;
    {
        const bool branch_taken_0x26b404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26b404) {
            ctx->pc = 0x26B408u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x26B43Cu;
            goto label_26b43c;
        }
    }
    ctx->pc = 0x26B40Cu;
    // 0x26b40c: 0x8c620000
    ctx->pc = 0x26b40cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b410: 0x8c420000
    ctx->pc = 0x26b410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b414: 0x14490004
    ctx->pc = 0x26B414u;
    {
        const bool branch_taken_0x26b414 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 9));
        ctx->pc = 0x26B418u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
        if (branch_taken_0x26b414) {
            ctx->pc = 0x26B428u;
            goto label_26b428;
        }
    }
    ctx->pc = 0x26B41Cu;
    // 0x26b41c: 0x5c400005
    ctx->pc = 0x26B41Cu;
    {
        const bool branch_taken_0x26b41c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x26b41c) {
            ctx->pc = 0x26B420u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
            ctx->pc = 0x26B434u;
            goto label_26b434;
        }
    }
    ctx->pc = 0x26B424u;
    // 0x26b424: 0x846200d8
    ctx->pc = 0x26b424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_26b428:
    // 0x26b428: 0x50480004
    ctx->pc = 0x26B428u;
    {
        const bool branch_taken_0x26b428 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        if (branch_taken_0x26b428) {
            ctx->pc = 0x26B42Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x26B43Cu;
            goto label_26b43c;
        }
    }
    ctx->pc = 0x26B430u;
    // 0x26b430: 0xac850114
    ctx->pc = 0x26b430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
label_26b434:
    // 0x26b434: 0x3e00008
    ctx->pc = 0x26B434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B438u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B3F8u: goto label_26b3f8;
            case 0x26B428u: goto label_26b428;
            case 0x26B434u: goto label_26b434;
            case 0x26B43Cu: goto label_26b43c;
            case 0x26B44Cu: goto label_26b44c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B43Cu;
label_26b43c:
    // 0x26b43c: 0xa7102a
    ctx->pc = 0x26b43cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x26b440: 0x24c6ffff
    ctx->pc = 0x26b440u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x26b444: 0x1cc0ffec
    ctx->pc = 0x26B444u;
    {
        const bool branch_taken_0x26b444 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x26B448u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
        if (branch_taken_0x26b444) {
            ctx->pc = 0x26B3F8u;
            goto label_26b3f8;
        }
    }
    ctx->pc = 0x26B44Cu;
label_26b44c:
    // 0x26b44c: 0x3e00008
    ctx->pc = 0x26B44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B450u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B3F8u: goto label_26b3f8;
            case 0x26B428u: goto label_26b428;
            case 0x26B434u: goto label_26b434;
            case 0x26B43Cu: goto label_26b43c;
            case 0x26B44Cu: goto label_26b44c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B454u;
}

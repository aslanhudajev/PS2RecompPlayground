#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _fwalk
// Address: 0x12a378 - 0x12a40c
void _fwalk_0x12a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a378u;

label_12a378:
    // 0x12a378: 0x27bdffa0
    ctx->pc = 0x12a378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_12a37c:
    // 0x12a37c: 0xffb40040
    ctx->pc = 0x12a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_12a380:
    // 0x12a380: 0xffb30030
    ctx->pc = 0x12a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_12a384:
    // 0x12a384: 0xa0a02d
    ctx->pc = 0x12a384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12a388:
    // 0x12a388: 0xffb20020
    ctx->pc = 0x12a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_12a38c:
    // 0x12a38c: 0x982d
    ctx->pc = 0x12a38cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a390:
    // 0x12a390: 0xffbf0050
    ctx->pc = 0x12a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_12a394:
    // 0x12a394: 0x249201d8
    ctx->pc = 0x12a394u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 4), 472));
label_12a398:
    // 0x12a398: 0xffb10010
    ctx->pc = 0x12a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_12a39c:
    // 0x12a39c: 0x12400012
label_12a3a0:
    if (ctx->pc == 0x12A3A0u) {
        ctx->pc = 0x12A3A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x12A3A4u;
        goto label_12a3a4;
    }
    ctx->pc = 0x12A39Cu;
    {
        const bool branch_taken_0x12a39c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x12A3A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x12a39c) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A3A4u;
label_12a3a4:
    // 0x12a3a4: 0x8e500004
    ctx->pc = 0x12a3a4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12a3a8:
    // 0x12a3a8: 0x2610ffff
    ctx->pc = 0x12a3a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_12a3ac:
    // 0x12a3ac: 0x600000b
label_12a3b0:
    if (ctx->pc == 0x12A3B0u) {
        ctx->pc = 0x12A3B0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x12A3B4u;
        goto label_12a3b4;
    }
    ctx->pc = 0x12A3ACu;
    {
        const bool branch_taken_0x12a3ac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x12A3B0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        if (branch_taken_0x12a3ac) {
            ctx->pc = 0x12A3DCu;
            goto label_12a3dc;
        }
    }
    ctx->pc = 0x12A3B4u;
label_12a3b4:
    // 0x12a3b4: 0x0
    ctx->pc = 0x12a3b4u;
    // NOP
label_12a3b8:
    // 0x12a3b8: 0x8622000c
    ctx->pc = 0x12a3b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_12a3bc:
    // 0x12a3bc: 0x50400005
label_12a3c0:
    if (ctx->pc == 0x12A3C0u) {
        ctx->pc = 0x12A3C0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x12A3C4u;
        goto label_12a3c4;
    }
    ctx->pc = 0x12A3BCu;
    {
        const bool branch_taken_0x12a3bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12a3bc) {
            ctx->pc = 0x12A3C0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->pc = 0x12A3D4u;
            goto label_12a3d4;
        }
    }
    ctx->pc = 0x12A3C4u;
label_12a3c4:
    // 0x12a3c4: 0x280f809
label_12a3c8:
    if (ctx->pc == 0x12A3C8u) {
        ctx->pc = 0x12A3C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A3CCu;
        goto label_12a3cc;
    }
    ctx->pc = 0x12A3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x12A3CCu);
        ctx->pc = 0x12A3C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A378u: goto label_12a378;
            case 0x12A37Cu: goto label_12a37c;
            case 0x12A380u: goto label_12a380;
            case 0x12A384u: goto label_12a384;
            case 0x12A388u: goto label_12a388;
            case 0x12A38Cu: goto label_12a38c;
            case 0x12A390u: goto label_12a390;
            case 0x12A394u: goto label_12a394;
            case 0x12A398u: goto label_12a398;
            case 0x12A39Cu: goto label_12a39c;
            case 0x12A3A0u: goto label_12a3a0;
            case 0x12A3A4u: goto label_12a3a4;
            case 0x12A3A8u: goto label_12a3a8;
            case 0x12A3ACu: goto label_12a3ac;
            case 0x12A3B0u: goto label_12a3b0;
            case 0x12A3B4u: goto label_12a3b4;
            case 0x12A3B8u: goto label_12a3b8;
            case 0x12A3BCu: goto label_12a3bc;
            case 0x12A3C0u: goto label_12a3c0;
            case 0x12A3C4u: goto label_12a3c4;
            case 0x12A3C8u: goto label_12a3c8;
            case 0x12A3CCu: goto label_12a3cc;
            case 0x12A3D0u: goto label_12a3d0;
            case 0x12A3D4u: goto label_12a3d4;
            case 0x12A3D8u: goto label_12a3d8;
            case 0x12A3DCu: goto label_12a3dc;
            case 0x12A3E0u: goto label_12a3e0;
            case 0x12A3E4u: goto label_12a3e4;
            case 0x12A3E8u: goto label_12a3e8;
            case 0x12A3ECu: goto label_12a3ec;
            case 0x12A3F0u: goto label_12a3f0;
            case 0x12A3F4u: goto label_12a3f4;
            case 0x12A3F8u: goto label_12a3f8;
            case 0x12A3FCu: goto label_12a3fc;
            case 0x12A400u: goto label_12a400;
            case 0x12A404u: goto label_12a404;
            case 0x12A408u: goto label_12a408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A3CCu; }
            if (ctx->pc != 0x12A3CCu) { return; }
        }
    }
    ctx->pc = 0x12A3CCu;
label_12a3cc:
    // 0x12a3cc: 0x2629825
    ctx->pc = 0x12a3ccu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_12a3d0:
    // 0x12a3d0: 0x2610ffff
    ctx->pc = 0x12a3d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_12a3d4:
    // 0x12a3d4: 0x601fff8
label_12a3d8:
    if (ctx->pc == 0x12A3D8u) {
        ctx->pc = 0x12A3D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x12A3DCu;
        goto label_12a3dc;
    }
    ctx->pc = 0x12A3D4u;
    {
        const bool branch_taken_0x12a3d4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12A3D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 88));
        if (branch_taken_0x12a3d4) {
            ctx->pc = 0x12A3B8u;
            goto label_12a3b8;
        }
    }
    ctx->pc = 0x12A3DCu;
label_12a3dc:
    // 0x12a3dc: 0x8e520000
    ctx->pc = 0x12a3dcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12a3e0:
    // 0x12a3e0: 0x5640fff1
label_12a3e4:
    if (ctx->pc == 0x12A3E4u) {
        ctx->pc = 0x12A3E4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x12A3E8u;
        goto label_12a3e8;
    }
    ctx->pc = 0x12A3E0u;
    {
        const bool branch_taken_0x12a3e0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x12a3e0) {
            ctx->pc = 0x12A3E4u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x12A3A8u;
            goto label_12a3a8;
        }
    }
    ctx->pc = 0x12A3E8u;
label_12a3e8:
    // 0x12a3e8: 0x260102d
    ctx->pc = 0x12a3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12a3ec:
    // 0x12a3ec: 0xdfbf0050
    ctx->pc = 0x12a3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12a3f0:
    // 0x12a3f0: 0xdfb40040
    ctx->pc = 0x12a3f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12a3f4:
    // 0x12a3f4: 0xdfb30030
    ctx->pc = 0x12a3f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12a3f8:
    // 0x12a3f8: 0xdfb20020
    ctx->pc = 0x12a3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12a3fc:
    // 0x12a3fc: 0xdfb10010
    ctx->pc = 0x12a3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12a400:
    // 0x12a400: 0xdfb00000
    ctx->pc = 0x12a400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12a404:
    // 0x12a404: 0x3e00008
label_12a408:
    if (ctx->pc == 0x12A408u) {
        ctx->pc = 0x12A408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x12A40Cu;
        goto label_fallthrough_0x12a404;
    }
    ctx->pc = 0x12A404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A378u: goto label_12a378;
            case 0x12A37Cu: goto label_12a37c;
            case 0x12A380u: goto label_12a380;
            case 0x12A384u: goto label_12a384;
            case 0x12A388u: goto label_12a388;
            case 0x12A38Cu: goto label_12a38c;
            case 0x12A390u: goto label_12a390;
            case 0x12A394u: goto label_12a394;
            case 0x12A398u: goto label_12a398;
            case 0x12A39Cu: goto label_12a39c;
            case 0x12A3A0u: goto label_12a3a0;
            case 0x12A3A4u: goto label_12a3a4;
            case 0x12A3A8u: goto label_12a3a8;
            case 0x12A3ACu: goto label_12a3ac;
            case 0x12A3B0u: goto label_12a3b0;
            case 0x12A3B4u: goto label_12a3b4;
            case 0x12A3B8u: goto label_12a3b8;
            case 0x12A3BCu: goto label_12a3bc;
            case 0x12A3C0u: goto label_12a3c0;
            case 0x12A3C4u: goto label_12a3c4;
            case 0x12A3C8u: goto label_12a3c8;
            case 0x12A3CCu: goto label_12a3cc;
            case 0x12A3D0u: goto label_12a3d0;
            case 0x12A3D4u: goto label_12a3d4;
            case 0x12A3D8u: goto label_12a3d8;
            case 0x12A3DCu: goto label_12a3dc;
            case 0x12A3E0u: goto label_12a3e0;
            case 0x12A3E4u: goto label_12a3e4;
            case 0x12A3E8u: goto label_12a3e8;
            case 0x12A3ECu: goto label_12a3ec;
            case 0x12A3F0u: goto label_12a3f0;
            case 0x12A3F4u: goto label_12a3f4;
            case 0x12A3F8u: goto label_12a3f8;
            case 0x12A3FCu: goto label_12a3fc;
            case 0x12A400u: goto label_12a400;
            case 0x12A404u: goto label_12a404;
            case 0x12A408u: goto label_12a408;
            default: break;
        }
        return;
    }
label_fallthrough_0x12a404:
    ctx->pc = 0x12A40Cu;
}

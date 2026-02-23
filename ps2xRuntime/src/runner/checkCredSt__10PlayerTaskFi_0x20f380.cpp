#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkCredSt__10PlayerTaskFi
// Address: 0x20f380 - 0x20f4c8
void checkCredSt__10PlayerTaskFi_0x20f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkCredSt__10PlayerTaskFi");


    ctx->pc = 0x20f380u;

    // 0x20f380: 0x27bdffc0
    ctx->pc = 0x20f380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20f384: 0x7fbf0030
    ctx->pc = 0x20f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20f388: 0x7fb20020
    ctx->pc = 0x20f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20f38c: 0x7fb10010
    ctx->pc = 0x20f38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20f390: 0x7fb00000
    ctx->pc = 0x20f390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20f394: 0x8c831cbc
    ctx->pc = 0x20f394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f398: 0x24020004
    ctx->pc = 0x20f398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20f39c: 0x70a08e28
    ctx->pc = 0x20f39cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20f3a0: 0x70809628
    ctx->pc = 0x20f3a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20f3a4: 0x8c630004
    ctx->pc = 0x20f3a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20f3a8: 0x10620003
    ctx->pc = 0x20F3A8u;
    {
        const bool branch_taken_0x20f3a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20F3ACu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20f3a8) {
            ctx->pc = 0x20F3B8u;
            goto label_20f3b8;
        }
    }
    ctx->pc = 0x20F3B0u;
    // 0x20f3b0: 0x10000002
    ctx->pc = 0x20F3B0u;
    {
        const bool branch_taken_0x20f3b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F3B4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20f3b0) {
            ctx->pc = 0x20F3BCu;
            goto label_20f3bc;
        }
    }
    ctx->pc = 0x20F3B8u;
label_20f3b8:
    // 0x20f3b8: 0x24050001
    ctx->pc = 0x20f3b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_20f3bc:
    // 0x20f3bc: 0xc071e90
    ctx->pc = 0x20F3BCu;
    SET_GPR_U32(ctx, 31, 0x20F3C4u);
    ctx->pc = 0x20F3C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
    ctx->pc = 0x1C7A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlaCheckCreditEnough_0x1c7a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3C4u; }
        else if (ctx->pc != 0x20F3C4u) { ctx->pc = 0x20F3C4u; }
    }
    if (ctx->pc != 0x20F3C4u) { return; }
    ctx->pc = 0x20F3C4u;
    // 0x20f3c4: 0x1040002b
    ctx->pc = 0x20F3C4u;
    {
        const bool branch_taken_0x20f3c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F3C8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x20f3c4) {
            ctx->pc = 0x20F474u;
            goto label_20f474;
        }
    }
    ctx->pc = 0x20F3CCu;
    // 0x20f3cc: 0x8423e504
    ctx->pc = 0x20f3ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20f3d0: 0x2402000a
    ctx->pc = 0x20f3d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20f3d4: 0x10620007
    ctx->pc = 0x20F3D4u;
    {
        const bool branch_taken_0x20f3d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20F3D8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20f3d4) {
            ctx->pc = 0x20F3F4u;
            goto label_20f3f4;
        }
    }
    ctx->pc = 0x20F3DCu;
    // 0x20f3dc: 0x3c010050
    ctx->pc = 0x20f3dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f3e0: 0xa422e506
    ctx->pc = 0x20f3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960390), (uint16_t)GPR_U32(ctx, 2));
    // 0x20f3e4: 0x8f828cb0
    ctx->pc = 0x20f3e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20f3e8: 0x34420001
    ctx->pc = 0x20f3e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x20f3ec: 0xc080cb0
    ctx->pc = 0x20F3ECu;
    SET_GPR_U32(ctx, 31, 0x20F3F4u);
    ctx->pc = 0x20F3F0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
    ctx->pc = 0x2032C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MaskScreen__Fv_0x2032c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3F4u; }
        else if (ctx->pc != 0x20F3F4u) { ctx->pc = 0x20F3F4u; }
    }
    if (ctx->pc != 0x20F3F4u) { return; }
    ctx->pc = 0x20F3F4u;
label_20f3f4:
    // 0x20f3f4: 0x8f838cb0
    ctx->pc = 0x20f3f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20f3f8: 0x30620001
    ctx->pc = 0x20f3f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x20f3fc: 0x10400007
    ctx->pc = 0x20F3FCu;
    {
        const bool branch_taken_0x20f3fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F400u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x20f3fc) {
            ctx->pc = 0x20F41Cu;
            goto label_20f41c;
        }
    }
    ctx->pc = 0x20F404u;
    // 0x20f404: 0x72402628
    ctx->pc = 0x20f404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x20f408: 0x72202e28
    ctx->pc = 0x20f408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20f40c: 0xc083d34
    ctx->pc = 0x20F40Cu;
    SET_GPR_U32(ctx, 31, 0x20F414u);
    ctx->pc = 0x20F410u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F414u; }
        else if (ctx->pc != 0x20F414u) { ctx->pc = 0x20F414u; }
    }
    if (ctx->pc != 0x20F414u) { return; }
    ctx->pc = 0x20F414u;
    // 0x20f414: 0x10000017
    ctx->pc = 0x20F414u;
    {
        const bool branch_taken_0x20f414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f414) {
            ctx->pc = 0x20F474u;
            goto label_20f474;
        }
    }
    ctx->pc = 0x20F41Cu;
label_20f41c:
    // 0x20f41c: 0x10400007
    ctx->pc = 0x20F41Cu;
    {
        const bool branch_taken_0x20f41c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F420u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x20f41c) {
            ctx->pc = 0x20F43Cu;
            goto label_20f43c;
        }
    }
    ctx->pc = 0x20F424u;
    // 0x20f424: 0x72402628
    ctx->pc = 0x20f424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x20f428: 0x72202e28
    ctx->pc = 0x20f428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20f42c: 0xc083d34
    ctx->pc = 0x20F42Cu;
    SET_GPR_U32(ctx, 31, 0x20F434u);
    ctx->pc = 0x20F430u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F434u; }
        else if (ctx->pc != 0x20F434u) { ctx->pc = 0x20F434u; }
    }
    if (ctx->pc != 0x20F434u) { return; }
    ctx->pc = 0x20F434u;
    // 0x20f434: 0x1000000f
    ctx->pc = 0x20F434u;
    {
        const bool branch_taken_0x20f434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f434) {
            ctx->pc = 0x20F474u;
            goto label_20f474;
        }
    }
    ctx->pc = 0x20F43Cu;
label_20f43c:
    // 0x20f43c: 0x10400007
    ctx->pc = 0x20F43Cu;
    {
        const bool branch_taken_0x20f43c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F440u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20f43c) {
            ctx->pc = 0x20F45Cu;
            goto label_20f45c;
        }
    }
    ctx->pc = 0x20F444u;
    // 0x20f444: 0x16260005
    ctx->pc = 0x20F444u;
    {
        const bool branch_taken_0x20f444 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 6));
        ctx->pc = 0x20F448u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20f444) {
            ctx->pc = 0x20F45Cu;
            goto label_20f45c;
        }
    }
    ctx->pc = 0x20F44Cu;
    // 0x20f44c: 0xc083d34
    ctx->pc = 0x20F44Cu;
    SET_GPR_U32(ctx, 31, 0x20F454u);
    ctx->pc = 0x20F450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F454u; }
        else if (ctx->pc != 0x20F454u) { ctx->pc = 0x20F454u; }
    }
    if (ctx->pc != 0x20F454u) { return; }
    ctx->pc = 0x20F454u;
    // 0x20f454: 0x10000007
    ctx->pc = 0x20F454u;
    {
        const bool branch_taken_0x20f454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f454) {
            ctx->pc = 0x20F474u;
            goto label_20f474;
        }
    }
    ctx->pc = 0x20F45Cu;
label_20f45c:
    // 0x20f45c: 0x8e421cbc
    ctx->pc = 0x20f45cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20f460: 0x72402628
    ctx->pc = 0x20f460u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x20f464: 0x2405000a
    ctx->pc = 0x20f464u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20f468: 0x24060001
    ctx->pc = 0x20f468u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f46c: 0xc083d34
    ctx->pc = 0x20F46Cu;
    SET_GPR_U32(ctx, 31, 0x20F474u);
    ctx->pc = 0x20F470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 17));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F474u; }
        else if (ctx->pc != 0x20F474u) { ctx->pc = 0x20F474u; }
    }
    if (ctx->pc != 0x20F474u) { return; }
    ctx->pc = 0x20F474u;
label_20f474:
    // 0x20f474: 0x1200000e
    ctx->pc = 0x20F474u;
    {
        const bool branch_taken_0x20f474 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F478u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20f474) {
            ctx->pc = 0x20F4B0u;
            goto label_20f4b0;
        }
    }
    ctx->pc = 0x20F47Cu;
    // 0x20f47c: 0x3c010050
    ctx->pc = 0x20f47cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f480: 0x8423e504
    ctx->pc = 0x20f480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20f484: 0x24020006
    ctx->pc = 0x20f484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x20f488: 0x10620008
    ctx->pc = 0x20F488u;
    {
        const bool branch_taken_0x20f488 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20F48Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x20f488) {
            ctx->pc = 0x20F4ACu;
            goto label_20f4ac;
        }
    }
    ctx->pc = 0x20F490u;
    // 0x20f490: 0x244434f0
    ctx->pc = 0x20f490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x20f494: 0x3c020001
    ctx->pc = 0x20f494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x20f498: 0x3445000e
    ctx->pc = 0x20f498u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 14));
    // 0x20f49c: 0x70003628
    ctx->pc = 0x20f49cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f4a0: 0x70003e28
    ctx->pc = 0x20f4a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f4a4: 0xc086018
    ctx->pc = 0x20F4A4u;
    SET_GPR_U32(ctx, 31, 0x20F4ACu);
    ctx->pc = 0x20F4A8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F4ACu; }
        else if (ctx->pc != 0x20F4ACu) { ctx->pc = 0x20F4ACu; }
    }
    if (ctx->pc != 0x20F4ACu) { return; }
    ctx->pc = 0x20F4ACu;
label_20f4ac:
    // 0x20f4ac: 0x72001628
    ctx->pc = 0x20f4acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_20f4b0:
    // 0x20f4b0: 0x7bbf0030
    ctx->pc = 0x20f4b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f4b4: 0x7bb20020
    ctx->pc = 0x20f4b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f4b8: 0x7bb10010
    ctx->pc = 0x20f4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f4bc: 0x7bb00000
    ctx->pc = 0x20f4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f4c0: 0x3e00008
    ctx->pc = 0x20F4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F4C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F3B8u: goto label_20f3b8;
            case 0x20F3BCu: goto label_20f3bc;
            case 0x20F3F4u: goto label_20f3f4;
            case 0x20F41Cu: goto label_20f41c;
            case 0x20F43Cu: goto label_20f43c;
            case 0x20F45Cu: goto label_20f45c;
            case 0x20F474u: goto label_20f474;
            case 0x20F4ACu: goto label_20f4ac;
            case 0x20F4B0u: goto label_20f4b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F4C8u;
}

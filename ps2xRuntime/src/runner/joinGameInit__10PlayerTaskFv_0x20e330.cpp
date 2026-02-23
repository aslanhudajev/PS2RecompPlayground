#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: joinGameInit__10PlayerTaskFv
// Address: 0x20e330 - 0x20e408
void joinGameInit__10PlayerTaskFv_0x20e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("joinGameInit__10PlayerTaskFv");


    ctx->pc = 0x20e330u;

    // 0x20e330: 0x27bdffe0
    ctx->pc = 0x20e330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e334: 0x7fbf0010
    ctx->pc = 0x20e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20e338: 0x7fb00000
    ctx->pc = 0x20e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e33c: 0x8c851cbc
    ctx->pc = 0x20e33cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20e340: 0x70808628
    ctx->pc = 0x20e340u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20e344: 0x3c020050
    ctx->pc = 0x20e344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e348: 0x8ca30008
    ctx->pc = 0x20e348u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20e34c: 0x34630001
    ctx->pc = 0x20e34cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x20e350: 0xaca30008
    ctx->pc = 0x20e350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x20e354: 0x8c831cbc
    ctx->pc = 0x20e354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20e358: 0xac600060
    ctx->pc = 0x20e358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x20e35c: 0x8c831cbc
    ctx->pc = 0x20e35cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20e360: 0xac600064
    ctx->pc = 0x20e360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x20e364: 0x8c831cbc
    ctx->pc = 0x20e364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20e368: 0xac600068
    ctx->pc = 0x20e368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x20e36c: 0x8c831cbc
    ctx->pc = 0x20e36cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20e370: 0xac60006c
    ctx->pc = 0x20e370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x20e374: 0x8c831cbc
    ctx->pc = 0x20e374u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20e378: 0xac600070
    ctx->pc = 0x20e378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x20e37c: 0x8e051cb8
    ctx->pc = 0x20e37cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x20e380: 0xc074dd0
    ctx->pc = 0x20E380u;
    SET_GPR_U32(ctx, 31, 0x20E388u);
    ctx->pc = 0x20E384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D3740u;
    {
        const uint32_t __entryPc = ctx->pc;
        setBookPlGameStart__14SysCfgMgrClassFi_0x1d3740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E388u; }
        else if (ctx->pc != 0x20E388u) { ctx->pc = 0x20E388u; }
    }
    if (ctx->pc != 0x20E388u) { return; }
    ctx->pc = 0x20E388u;
    // 0x20e388: 0x8e051cb8
    ctx->pc = 0x20e388u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x20e38c: 0x3c020050
    ctx->pc = 0x20e38cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e390: 0xc07b71c
    ctx->pc = 0x20E390u;
    SET_GPR_U32(ctx, 31, 0x20E398u);
    ctx->pc = 0x20E394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957936));
    ctx->pc = 0x1EDC70u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_SightPosPl__11GunMgrClassFi_0x1edc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E398u; }
        else if (ctx->pc != 0x20E398u) { ctx->pc = 0x20E398u; }
    }
    if (ctx->pc != 0x20E398u) { return; }
    ctx->pc = 0x20E398u;
    // 0x20e398: 0x3c010050
    ctx->pc = 0x20e398u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20e39c: 0x8423e504
    ctx->pc = 0x20e39cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20e3a0: 0x2402000a
    ctx->pc = 0x20e3a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20e3a4: 0x1462000c
    ctx->pc = 0x20E3A4u;
    {
        const bool branch_taken_0x20e3a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20E3A8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20e3a4) {
            ctx->pc = 0x20E3D8u;
            goto label_20e3d8;
        }
    }
    ctx->pc = 0x20E3ACu;
    // 0x20e3ac: 0x8f838bcc
    ctx->pc = 0x20e3acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20e3b0: 0x24020001
    ctx->pc = 0x20e3b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e3b4: 0x14620007
    ctx->pc = 0x20E3B4u;
    {
        const bool branch_taken_0x20e3b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20e3b4) {
            ctx->pc = 0x20E3D4u;
            goto label_20e3d4;
        }
    }
    ctx->pc = 0x20E3BCu;
    // 0x20e3bc: 0x8e021cbc
    ctx->pc = 0x20e3bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e3c0: 0xc284048
    ctx->pc = 0x20E3C0u;
    SET_GPR_U32(ctx, 31, 0x20E3C8u);
    ctx->pc = 0x20E3C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0xA10120u;
    {
        const uint32_t __entryPc = ctx->pc;
        unequipJoinIn__Fi_0xa10120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3C8u; }
        else if (ctx->pc != 0x20E3C8u) { ctx->pc = 0x20E3C8u; }
    }
    if (ctx->pc != 0x20E3C8u) { return; }
    ctx->pc = 0x20E3C8u;
    // 0x20e3c8: 0x8e021cbc
    ctx->pc = 0x20e3c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e3cc: 0xc28409c
    ctx->pc = 0x20E3CCu;
    SET_GPR_U32(ctx, 31, 0x20E3D4u);
    ctx->pc = 0x20E3D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0xA10270u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDispScoreJoinIn__Fi_0xa10270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3D4u; }
        else if (ctx->pc != 0x20E3D4u) { ctx->pc = 0x20E3D4u; }
    }
    if (ctx->pc != 0x20E3D4u) { return; }
    ctx->pc = 0x20E3D4u;
label_20e3d4:
    // 0x20e3d4: 0x72002628
    ctx->pc = 0x20e3d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_20e3d8:
    // 0x20e3d8: 0xc083c24
    ctx->pc = 0x20E3D8u;
    SET_GPR_U32(ctx, 31, 0x20E3E0u);
    ctx->pc = 0x20E3DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x20F090u;
    {
        const uint32_t __entryPc = ctx->pc;
        startInit__10PlayerTaskFi_0x20f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3E0u; }
        else if (ctx->pc != 0x20E3E0u) { ctx->pc = 0x20E3E0u; }
    }
    if (ctx->pc != 0x20E3E0u) { return; }
    ctx->pc = 0x20E3E0u;
    // 0x20e3e0: 0x3c020027
    ctx->pc = 0x20e3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20e3e4: 0x244232f8
    ctx->pc = 0x20e3e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13048));
    // 0x20e3e8: 0x8c450008
    ctx->pc = 0x20e3e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20e3ec: 0x8e041cb4
    ctx->pc = 0x20e3ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7348)));
    // 0x20e3f0: 0xc068fd8
    ctx->pc = 0x20E3F0u;
    SET_GPR_U32(ctx, 31, 0x20E3F8u);
    ctx->pc = 0x20E3F4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3F8u; }
        else if (ctx->pc != 0x20E3F8u) { ctx->pc = 0x20E3F8u; }
    }
    if (ctx->pc != 0x20E3F8u) { return; }
    ctx->pc = 0x20E3F8u;
    // 0x20e3f8: 0x7bbf0010
    ctx->pc = 0x20e3f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e3fc: 0x7bb00000
    ctx->pc = 0x20e3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e400: 0x3e00008
    ctx->pc = 0x20E400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E408u;
}

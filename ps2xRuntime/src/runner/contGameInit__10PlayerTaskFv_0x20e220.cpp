#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: contGameInit__10PlayerTaskFv
// Address: 0x20e220 - 0x20e2f0
void contGameInit__10PlayerTaskFv_0x20e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("contGameInit__10PlayerTaskFv");


    ctx->pc = 0x20e220u;

    // 0x20e220: 0x27bdffe0
    ctx->pc = 0x20e220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e224: 0x7fbf0010
    ctx->pc = 0x20e224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20e228: 0x7fb00000
    ctx->pc = 0x20e228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e22c: 0x70808628
    ctx->pc = 0x20e22cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20e230: 0x8c841cb8
    ctx->pc = 0x20e230u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x20e234: 0x3c020050
    ctx->pc = 0x20e234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e238: 0x2442e3b0
    ctx->pc = 0x20e238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960048));
    // 0x20e23c: 0x418c0
    ctx->pc = 0x20e23cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x20e240: 0x641823
    ctx->pc = 0x20e240u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20e244: 0x31880
    ctx->pc = 0x20e244u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20e248: 0x431021
    ctx->pc = 0x20e248u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e24c: 0x8c420000
    ctx->pc = 0x20e24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e250: 0x10400003
    ctx->pc = 0x20E250u;
    {
        const bool branch_taken_0x20e250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e250) {
            ctx->pc = 0x20E260u;
            goto label_20e260;
        }
    }
    ctx->pc = 0x20E258u;
    // 0x20e258: 0xc084ad4
    ctx->pc = 0x20E258u;
    SET_GPR_U32(ctx, 31, 0x20E260u);
    ctx->pc = 0x212B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClrPlDamEff__Fi_0x212b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E260u; }
        else if (ctx->pc != 0x20E260u) { ctx->pc = 0x20E260u; }
    }
    if (ctx->pc != 0x20E260u) { return; }
    ctx->pc = 0x20E260u;
label_20e260:
    // 0x20e260: 0x8e051cb8
    ctx->pc = 0x20e260u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x20e264: 0x3c020050
    ctx->pc = 0x20e264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e268: 0xc074dd8
    ctx->pc = 0x20E268u;
    SET_GPR_U32(ctx, 31, 0x20E270u);
    ctx->pc = 0x20E26Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D3760u;
    {
        const uint32_t __entryPc = ctx->pc;
        setBookPlGameEnd__14SysCfgMgrClassFi_0x1d3760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E270u; }
        else if (ctx->pc != 0x20E270u) { ctx->pc = 0x20E270u; }
    }
    if (ctx->pc != 0x20E270u) { return; }
    ctx->pc = 0x20E270u;
    // 0x20e270: 0x8e051cb8
    ctx->pc = 0x20e270u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x20e274: 0x3c020050
    ctx->pc = 0x20e274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e278: 0xc074dd4
    ctx->pc = 0x20E278u;
    SET_GPR_U32(ctx, 31, 0x20E280u);
    ctx->pc = 0x20E27Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D3750u;
    {
        const uint32_t __entryPc = ctx->pc;
        setBookPlGameCont__14SysCfgMgrClassFi_0x1d3750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E280u; }
        else if (ctx->pc != 0x20E280u) { ctx->pc = 0x20E280u; }
    }
    if (ctx->pc != 0x20E280u) { return; }
    ctx->pc = 0x20E280u;
    // 0x20e280: 0x8e041cb8
    ctx->pc = 0x20e280u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x20e284: 0xc084d14
    ctx->pc = 0x20E284u;
    SET_GPR_U32(ctx, 31, 0x20E28Cu);
    ctx->pc = 0x20E288u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E28Cu; }
        else if (ctx->pc != 0x20E28Cu) { ctx->pc = 0x20E28Cu; }
    }
    if (ctx->pc != 0x20E28Cu) { return; }
    ctx->pc = 0x20E28Cu;
    // 0x20e28c: 0x87828bba
    ctx->pc = 0x20e28cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937530)));
    // 0x20e290: 0x2442fffd
    ctx->pc = 0x20e290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x20e294: 0xa7828bba
    ctx->pc = 0x20e294u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937530), (uint16_t)GPR_U32(ctx, 2));
    // 0x20e298: 0x2143c
    ctx->pc = 0x20e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20e29c: 0x2143f
    ctx->pc = 0x20e29cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20e2a0: 0x4410002
    ctx->pc = 0x20E2A0u;
    {
        const bool branch_taken_0x20e2a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20e2a0) {
            ctx->pc = 0x20E2ACu;
            goto label_20e2ac;
        }
    }
    ctx->pc = 0x20E2A8u;
    // 0x20e2a8: 0xa7808bba
    ctx->pc = 0x20e2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937530), (uint16_t)GPR_U32(ctx, 0));
label_20e2ac:
    // 0x20e2ac: 0x8e051cb8
    ctx->pc = 0x20e2acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x20e2b0: 0x3c020050
    ctx->pc = 0x20e2b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e2b4: 0xc07b71c
    ctx->pc = 0x20E2B4u;
    SET_GPR_U32(ctx, 31, 0x20E2BCu);
    ctx->pc = 0x20E2B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957936));
    ctx->pc = 0x1EDC70u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_SightPosPl__11GunMgrClassFi_0x1edc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E2BCu; }
        else if (ctx->pc != 0x20E2BCu) { ctx->pc = 0x20E2BCu; }
    }
    if (ctx->pc != 0x20E2BCu) { return; }
    ctx->pc = 0x20E2BCu;
    // 0x20e2bc: 0x72002628
    ctx->pc = 0x20e2bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20e2c0: 0xc083c24
    ctx->pc = 0x20E2C0u;
    SET_GPR_U32(ctx, 31, 0x20E2C8u);
    ctx->pc = 0x20E2C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20F090u;
    {
        const uint32_t __entryPc = ctx->pc;
        startInit__10PlayerTaskFi_0x20f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E2C8u; }
        else if (ctx->pc != 0x20E2C8u) { ctx->pc = 0x20E2C8u; }
    }
    if (ctx->pc != 0x20E2C8u) { return; }
    ctx->pc = 0x20E2C8u;
    // 0x20e2c8: 0x3c020027
    ctx->pc = 0x20e2c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20e2cc: 0x244232d8
    ctx->pc = 0x20e2ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13016));
    // 0x20e2d0: 0x8c450008
    ctx->pc = 0x20e2d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20e2d4: 0x8e041cb4
    ctx->pc = 0x20e2d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7348)));
    // 0x20e2d8: 0xc068fd8
    ctx->pc = 0x20E2D8u;
    SET_GPR_U32(ctx, 31, 0x20E2E0u);
    ctx->pc = 0x20E2DCu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E2E0u; }
        else if (ctx->pc != 0x20E2E0u) { ctx->pc = 0x20E2E0u; }
    }
    if (ctx->pc != 0x20E2E0u) { return; }
    ctx->pc = 0x20E2E0u;
    // 0x20e2e0: 0x7bbf0010
    ctx->pc = 0x20e2e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e2e4: 0x7bb00000
    ctx->pc = 0x20e2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e2e8: 0x3e00008
    ctx->pc = 0x20E2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E2ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E260u: goto label_20e260;
            case 0x20E2ACu: goto label_20e2ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E2F0u;
}

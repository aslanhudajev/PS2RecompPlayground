#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_mipk
// Address: 0x281a20 - 0x281af4
void set_mipk_0x281a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x281a20u;

    // 0x281a20: 0x27bdffa0
    ctx->pc = 0x281a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x281a24: 0xffbf0050
    ctx->pc = 0x281a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x281a28: 0xffb00040
    ctx->pc = 0x281a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x281a2c: 0xc0ab566
    ctx->pc = 0x281A2Cu;
    SET_GPR_U32(ctx, 31, 0x281A34u);
    ctx->pc = 0x281A30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AD598u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetTexMipK_0x2ad598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A34u; }
    }
    if (ctx->pc != 0x281A34u) { return; }
    ctx->pc = 0x281A34u;
    // 0x281a34: 0x40302d
    ctx->pc = 0x281a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a38: 0x2a020003
    ctx->pc = 0x281a38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
    // 0x281a3c: 0x1040002a
    ctx->pc = 0x281A3Cu;
    {
        const bool branch_taken_0x281a3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281A40u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x281a3c) {
            ctx->pc = 0x281AE8u;
            goto label_281ae8;
        }
    }
    ctx->pc = 0x281A44u;
    // 0x281a44: 0x1e00001b
    ctx->pc = 0x281A44u;
    {
        const bool branch_taken_0x281a44 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x281A48u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x281a44) {
            ctx->pc = 0x281AB4u;
            goto label_281ab4;
        }
    }
    ctx->pc = 0x281A4Cu;
    // 0x281a4c: 0x2a02fffe
    ctx->pc = 0x281a4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4294967294));
    // 0x281a50: 0x54400026
    ctx->pc = 0x281A50u;
    {
        const bool branch_taken_0x281a50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x281a50) {
            ctx->pc = 0x281A54u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x281AECu;
            goto label_281aec;
        }
    }
    ctx->pc = 0x281A58u;
    // 0x281a58: 0x6000015
    ctx->pc = 0x281A58u;
    {
        const bool branch_taken_0x281a58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x281A5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x281a58) {
            ctx->pc = 0x281AB0u;
            goto label_281ab0;
        }
    }
    ctx->pc = 0x281A60u;
    // 0x281a60: 0x3c05003b
    ctx->pc = 0x281a60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x281a64: 0xc0b6252
    ctx->pc = 0x281A64u;
    SET_GPR_U32(ctx, 31, 0x281A6Cu);
    ctx->pc = 0x281A68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950792));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A6Cu; }
    }
    if (ctx->pc != 0x281A6Cu) { return; }
    ctx->pc = 0x281A6Cu;
    // 0x281a6c: 0x3c02003c
    ctx->pc = 0x281a6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x281a70: 0x3c03003c
    ctx->pc = 0x281a70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x281a74: 0x3c06003c
    ctx->pc = 0x281a74u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x281a78: 0x3c07003c
    ctx->pc = 0x281a78u;
    SET_GPR_U32(ctx, 7, ((uint32_t)60 << 16));
    // 0x281a7c: 0x3c08003c
    ctx->pc = 0x281a7cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)60 << 16));
    // 0x281a80: 0x8c443ac8
    ctx->pc = 0x281a80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15048)));
    // 0x281a84: 0x8c653acc
    ctx->pc = 0x281a84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 15052)));
    // 0x281a88: 0x8cc63abc
    ctx->pc = 0x281a88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 15036)));
    // 0x281a8c: 0x8ce73ac4
    ctx->pc = 0x281a8cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 15044)));
    // 0x281a90: 0xc50c3ac0
    ctx->pc = 0x281a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281a94: 0xc080510
    ctx->pc = 0x281A94u;
    SET_GPR_U32(ctx, 31, 0x281A9Cu);
    ctx->pc = 0x281A98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A9Cu; }
    }
    if (ctx->pc != 0x281A9Cu) { return; }
    ctx->pc = 0x281A9Cu;
    // 0x281a9c: 0x8c430000
    ctx->pc = 0x281a9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281aa0: 0x3c040004
    ctx->pc = 0x281aa0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
    // 0x281aa4: 0x641825
    ctx->pc = 0x281aa4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x281aa8: 0x1000000e
    ctx->pc = 0x281AA8u;
    {
        const bool branch_taken_0x281aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281AACu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x281aa8) {
            ctx->pc = 0x281AE4u;
            goto label_281ae4;
        }
    }
    ctx->pc = 0x281AB0u;
label_281ab0:
    // 0x281ab0: 0x101080
    ctx->pc = 0x281ab0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_281ab4:
    // 0x281ab4: 0x2021018
    ctx->pc = 0x281ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x281ab8: 0x501818
    ctx->pc = 0x281ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x281abc: 0x663021
    ctx->pc = 0x281abcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x281ac0: 0x28c2ff00
    ctx->pc = 0x281ac0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294967040));
    // 0x281ac4: 0x54400005
    ctx->pc = 0x281AC4u;
    {
        const bool branch_taken_0x281ac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x281ac4) {
            ctx->pc = 0x281AC8u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
            ctx->pc = 0x281ADCu;
            goto label_281adc;
        }
    }
    ctx->pc = 0x281ACCu;
    // 0x281acc: 0x28c30101
    ctx->pc = 0x281accu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 257));
    // 0x281ad0: 0x24020100
    ctx->pc = 0x281ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x281ad4: 0x40202d
    ctx->pc = 0x281ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ad8: 0xc3200b
    ctx->pc = 0x281ad8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 6));
label_281adc:
    // 0x281adc: 0xc0ab56c
    ctx->pc = 0x281ADCu;
    SET_GPR_U32(ctx, 31, 0x281AE4u);
    ctx->pc = 0x2AD5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetTexMipK_0x2ad5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281AE4u; }
    }
    if (ctx->pc != 0x281AE4u) { return; }
    ctx->pc = 0x281AE4u;
label_281ae4:
    // 0x281ae4: 0xdfbf0050
    ctx->pc = 0x281ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_281ae8:
    // 0x281ae8: 0xdfb00040
    ctx->pc = 0x281ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_281aec:
    // 0x281aec: 0x3e00008
    ctx->pc = 0x281AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281AB0u: goto label_281ab0;
            case 0x281AB4u: goto label_281ab4;
            case 0x281ADCu: goto label_281adc;
            case 0x281AE4u: goto label_281ae4;
            case 0x281AE8u: goto label_281ae8;
            case 0x281AECu: goto label_281aec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281AF4u;
}

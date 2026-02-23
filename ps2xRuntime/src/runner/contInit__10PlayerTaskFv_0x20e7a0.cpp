#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: contInit__10PlayerTaskFv
// Address: 0x20e7a0 - 0x20e864
void contInit__10PlayerTaskFv_0x20e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("contInit__10PlayerTaskFv");


    ctx->pc = 0x20e7a0u;

    // 0x20e7a0: 0x27bdffd0
    ctx->pc = 0x20e7a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20e7a4: 0x7fbf0020
    ctx->pc = 0x20e7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x20e7a8: 0x7fb10010
    ctx->pc = 0x20e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e7ac: 0x7fb00000
    ctx->pc = 0x20e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e7b0: 0x70808628
    ctx->pc = 0x20e7b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20e7b4: 0x3c020050
    ctx->pc = 0x20e7b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e7b8: 0x2444dac0
    ctx->pc = 0x20e7b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x20e7bc: 0xc075278
    ctx->pc = 0x20E7BCu;
    SET_GPR_U32(ctx, 31, 0x20E7C4u);
    ctx->pc = 0x20E7C0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D49E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCreditData__11CreditClassFi_0x1d49e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E7C4u; }
        else if (ctx->pc != 0x20E7C4u) { ctx->pc = 0x20E7C4u; }
    }
    if (ctx->pc != 0x20E7C4u) { return; }
    ctx->pc = 0x20E7C4u;
    // 0x20e7c4: 0x70408e28
    ctx->pc = 0x20e7c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20e7c8: 0x3c020050
    ctx->pc = 0x20e7c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e7cc: 0x2444dac0
    ctx->pc = 0x20e7ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x20e7d0: 0xc075278
    ctx->pc = 0x20E7D0u;
    SET_GPR_U32(ctx, 31, 0x20E7D8u);
    ctx->pc = 0x20E7D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D49E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCreditData__11CreditClassFi_0x1d49e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E7D8u; }
        else if (ctx->pc != 0x20E7D8u) { ctx->pc = 0x20E7D8u; }
    }
    if (ctx->pc != 0x20E7D8u) { return; }
    ctx->pc = 0x20E7D8u;
    // 0x20e7d8: 0x8e041cbc
    ctx->pc = 0x20e7d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e7dc: 0x34059fff
    ctx->pc = 0x20e7dcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 40959));
    // 0x20e7e0: 0x3c010050
    ctx->pc = 0x20e7e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20e7e4: 0x2403000a
    ctx->pc = 0x20e7e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20e7e8: 0xac8500b4
    ctx->pc = 0x20e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 5));
    // 0x20e7ec: 0x8e250000
    ctx->pc = 0x20e7ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20e7f0: 0x8e041cbc
    ctx->pc = 0x20e7f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e7f4: 0xac850078
    ctx->pc = 0x20e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x20e7f8: 0x8c440000
    ctx->pc = 0x20e7f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e7fc: 0x8e021cbc
    ctx->pc = 0x20e7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e800: 0xac44007c
    ctx->pc = 0x20e800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 4));
    // 0x20e804: 0x8422e504
    ctx->pc = 0x20e804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20e808: 0x1443000b
    ctx->pc = 0x20E808u;
    {
        const bool branch_taken_0x20e808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x20e808) {
            ctx->pc = 0x20E838u;
            goto label_20e838;
        }
    }
    ctx->pc = 0x20E810u;
    // 0x20e810: 0x8f838bcc
    ctx->pc = 0x20e810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20e814: 0x24020002
    ctx->pc = 0x20e814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e818: 0x14620007
    ctx->pc = 0x20E818u;
    {
        const bool branch_taken_0x20e818 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20e818) {
            ctx->pc = 0x20E838u;
            goto label_20e838;
        }
    }
    ctx->pc = 0x20E820u;
    // 0x20e820: 0x24050001
    ctx->pc = 0x20e820u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e824: 0x72002628
    ctx->pc = 0x20e824u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20e828: 0xc083d34
    ctx->pc = 0x20E828u;
    SET_GPR_U32(ctx, 31, 0x20E830u);
    ctx->pc = 0x20E82Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E830u; }
        else if (ctx->pc != 0x20E830u) { ctx->pc = 0x20E830u; }
    }
    if (ctx->pc != 0x20E830u) { return; }
    ctx->pc = 0x20E830u;
    // 0x20e830: 0x10000008
    ctx->pc = 0x20E830u;
    {
        const bool branch_taken_0x20e830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E834u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x20e830) {
            ctx->pc = 0x20E854u;
            goto label_20e854;
        }
    }
    ctx->pc = 0x20E838u;
label_20e838:
    // 0x20e838: 0x3c020027
    ctx->pc = 0x20e838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20e83c: 0x24423308
    ctx->pc = 0x20e83cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13064));
    // 0x20e840: 0x8c450008
    ctx->pc = 0x20e840u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20e844: 0x8e041cb4
    ctx->pc = 0x20e844u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7348)));
    // 0x20e848: 0xc068fd8
    ctx->pc = 0x20E848u;
    SET_GPR_U32(ctx, 31, 0x20E850u);
    ctx->pc = 0x20E84Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E850u; }
        else if (ctx->pc != 0x20E850u) { ctx->pc = 0x20E850u; }
    }
    if (ctx->pc != 0x20E850u) { return; }
    ctx->pc = 0x20E850u;
    // 0x20e850: 0x7bbf0020
    ctx->pc = 0x20e850u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20e854:
    // 0x20e854: 0x7bb10010
    ctx->pc = 0x20e854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e858: 0x7bb00000
    ctx->pc = 0x20e858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e85c: 0x3e00008
    ctx->pc = 0x20E85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E860u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E838u: goto label_20e838;
            case 0x20E854u: goto label_20e854;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E864u;
}

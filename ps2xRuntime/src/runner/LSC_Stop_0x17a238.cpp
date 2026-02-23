#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_Stop
// Address: 0x17a238 - 0x17a2c8
void LSC_Stop_0x17a238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_Stop");


    ctx->pc = 0x17a238u;

    // 0x17a238: 0x27bdffd0
    ctx->pc = 0x17a238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a23c: 0xffb00010
    ctx->pc = 0x17a23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17a240: 0x80802d
    ctx->pc = 0x17a240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a244: 0x16000006
    ctx->pc = 0x17A244u;
    {
        const bool branch_taken_0x17a244 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A248u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x17a244) {
            ctx->pc = 0x17A260u;
            goto label_17a260;
        }
    }
    ctx->pc = 0x17A24Cu;
    // 0x17a24c: 0x3c04002c
    ctx->pc = 0x17a24cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a250: 0xc05e9c6
    ctx->pc = 0x17A250u;
    SET_GPR_U32(ctx, 31, 0x17A258u);
    ctx->pc = 0x17A254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A258u; }
        else if (ctx->pc != 0x17A258u) { ctx->pc = 0x17A258u; }
    }
    if (ctx->pc != 0x17A258u) { return; }
    ctx->pc = 0x17A258u;
    // 0x17a258: 0x10000018
    ctx->pc = 0x17A258u;
    {
        const bool branch_taken_0x17a258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A25Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17a258) {
            ctx->pc = 0x17A2BCu;
            goto label_17a2bc;
        }
    }
    ctx->pc = 0x17A260u;
label_17a260:
    // 0x17a260: 0xc05e9b4
    ctx->pc = 0x17A260u;
    SET_GPR_U32(ctx, 31, 0x17A268u);
    ctx->pc = 0x17A264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_LockCrs_0x17a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A268u; }
        else if (ctx->pc != 0x17A268u) { ctx->pc = 0x17A268u; }
    }
    if (ctx->pc != 0x17A268u) { return; }
    ctx->pc = 0x17A268u;
    // 0x17a268: 0x8e040028
    ctx->pc = 0x17a268u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17a26c: 0x1080000a
    ctx->pc = 0x17A26Cu;
    {
        const bool branch_taken_0x17a26c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A270u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17a26c) {
            ctx->pc = 0x17A298u;
            goto label_17a298;
        }
    }
    ctx->pc = 0x17A274u;
    // 0x17a274: 0x82030002
    ctx->pc = 0x17a274u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17a278: 0x14620004
    ctx->pc = 0x17A278u;
    {
        const bool branch_taken_0x17a278 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x17a278) {
            ctx->pc = 0x17A28Cu;
            goto label_17a28c;
        }
    }
    ctx->pc = 0x17A280u;
    // 0x17a280: 0xc05c31c
    ctx->pc = 0x17A280u;
    SET_GPR_U32(ctx, 31, 0x17A288u);
    ctx->pc = 0x170C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Stop_0x170c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A288u; }
        else if (ctx->pc != 0x17A288u) { ctx->pc = 0x17A288u; }
    }
    if (ctx->pc != 0x17A288u) { return; }
    ctx->pc = 0x17A288u;
    // 0x17a288: 0xa2000002
    ctx->pc = 0x17a288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_17a28c:
    // 0x17a28c: 0xc05c2ca
    ctx->pc = 0x17A28Cu;
    SET_GPR_U32(ctx, 31, 0x17A294u);
    ctx->pc = 0x17A290u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x170B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Close_0x170b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A294u; }
        else if (ctx->pc != 0x17A294u) { ctx->pc = 0x17A294u; }
    }
    if (ctx->pc != 0x17A294u) { return; }
    ctx->pc = 0x17A294u;
    // 0x17a294: 0xae000028
    ctx->pc = 0x17a294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_17a298:
    // 0x17a298: 0xa2000001
    ctx->pc = 0x17a298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a29c: 0x3a0202d
    ctx->pc = 0x17a29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a2a0: 0xae00002c
    ctx->pc = 0x17a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17a2a4: 0xae00001c
    ctx->pc = 0x17a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x17a2a8: 0xae000020
    ctx->pc = 0x17a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x17a2ac: 0xae000024
    ctx->pc = 0x17a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x17a2b0: 0xc05e9bc
    ctx->pc = 0x17A2B0u;
    SET_GPR_U32(ctx, 31, 0x17A2B8u);
    ctx->pc = 0x17A2B4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->pc = 0x17A6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_UnlockCrs_0x17a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A2B8u; }
        else if (ctx->pc != 0x17A2B8u) { ctx->pc = 0x17A2B8u; }
    }
    if (ctx->pc != 0x17A2B8u) { return; }
    ctx->pc = 0x17A2B8u;
    // 0x17a2b8: 0xdfbf0020
    ctx->pc = 0x17a2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17a2bc:
    // 0x17a2bc: 0xdfb00010
    ctx->pc = 0x17a2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a2c0: 0x3e00008
    ctx->pc = 0x17A2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A2C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A260u: goto label_17a260;
            case 0x17A28Cu: goto label_17a28c;
            case 0x17A298u: goto label_17a298;
            case 0x17A2BCu: goto label_17a2bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A2C8u;
}

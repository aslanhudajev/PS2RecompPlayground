#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sitofp
// Address: 0x129e60 - 0x129f18
void sitofp_0x129e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129e60u;

    // 0x129e60: 0x27bdffe0
    ctx->pc = 0x129e60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129e64: 0x24020003
    ctx->pc = 0x129e64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x129e68: 0x41fc2
    ctx->pc = 0x129e68u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x129e6c: 0xffbf0010
    ctx->pc = 0x129e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129e70: 0xafa20000
    ctx->pc = 0x129e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x129e74: 0x14800004
    ctx->pc = 0x129E74u;
    {
        const bool branch_taken_0x129e74 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x129E78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x129e74) {
            ctx->pc = 0x129E88u;
            goto label_129e88;
        }
    }
    ctx->pc = 0x129E7Cu;
    // 0x129e7c: 0x24020002
    ctx->pc = 0x129e7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x129e80: 0x10000020
    ctx->pc = 0x129E80u;
    {
        const bool branch_taken_0x129e80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129E84u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x129e80) {
            ctx->pc = 0x129F04u;
            goto label_129f04;
        }
    }
    ctx->pc = 0x129E88u;
label_129e88:
    // 0x129e88: 0x2402001e
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x129e8c: 0x1060000a
    ctx->pc = 0x129E8Cu;
    {
        const bool branch_taken_0x129e8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x129E90u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x129e8c) {
            ctx->pc = 0x129EB8u;
            goto label_129eb8;
        }
    }
    ctx->pc = 0x129E94u;
    // 0x129e94: 0x3c028000
    ctx->pc = 0x129e94u;
    SET_GPR_S32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x129e98: 0x14820005
    ctx->pc = 0x129E98u;
    {
        const bool branch_taken_0x129e98 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x129E9Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x129e98) {
            ctx->pc = 0x129EB0u;
            goto label_129eb0;
        }
    }
    ctx->pc = 0x129EA0u;
    // 0x129ea0: 0x3c01cf00
    ctx->pc = 0x129ea0u;
    SET_GPR_S32(ctx, 1, ((uint32_t)52992 << 16));
    // 0x129ea4: 0x44810000
    ctx->pc = 0x129ea4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x129ea8: 0x10000019
    ctx->pc = 0x129EA8u;
    {
        const bool branch_taken_0x129ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129EACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x129ea8) {
            ctx->pc = 0x129F10u;
            goto label_129f10;
        }
    }
    ctx->pc = 0x129EB0u;
label_129eb0:
    // 0x129eb0: 0x10000002
    ctx->pc = 0x129EB0u;
    {
        const bool branch_taken_0x129eb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129EB4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x129eb0) {
            ctx->pc = 0x129EBCu;
            goto label_129ebc;
        }
    }
    ctx->pc = 0x129EB8u;
label_129eb8:
    // 0x129eb8: 0xafa4000c
    ctx->pc = 0x129eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_129ebc:
    // 0x129ebc: 0x8fa6000c
    ctx->pc = 0x129ebcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x129ec0: 0x3c023fff
    ctx->pc = 0x129ec0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x129ec4: 0x3442ffff
    ctx->pc = 0x129ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
    // 0x129ec8: 0x46102b
    ctx->pc = 0x129ec8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x129ecc: 0x1440000d
    ctx->pc = 0x129ECCu;
    {
        const bool branch_taken_0x129ecc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x129ED0u;
        SET_GPR_S32(ctx, 5, ((uint32_t)16383 << 16));
        if (branch_taken_0x129ecc) {
            ctx->pc = 0x129F04u;
            goto label_129f04;
        }
    }
    ctx->pc = 0x129ED4u;
    // 0x129ed4: 0x8fa40008
    ctx->pc = 0x129ed4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129ed8: 0x34a5ffff
    ctx->pc = 0x129ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)65535);
    // 0x129edc: 0x0
    ctx->pc = 0x129edcu;
    // NOP
label_129ee0:
    // 0x129ee0: 0x61840
    ctx->pc = 0x129ee0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x129ee4: 0x2484ffff
    ctx->pc = 0x129ee4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x129ee8: 0x60302d
    ctx->pc = 0x129ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129eec: 0xa3102b
    ctx->pc = 0x129eecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x129ef0: 0x0
    ctx->pc = 0x129ef0u;
    // NOP
    // 0x129ef4: 0x1040fffa
    ctx->pc = 0x129EF4u;
    {
        const bool branch_taken_0x129ef4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x129ef4) {
            ctx->pc = 0x129EE0u;
            goto label_129ee0;
        }
    }
    ctx->pc = 0x129EFCu;
    // 0x129efc: 0xafa40008
    ctx->pc = 0x129efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x129f00: 0xafa3000c
    ctx->pc = 0x129f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_129f04:
    // 0x129f04: 0xc04a542
    ctx->pc = 0x129F04u;
    SET_GPR_U32(ctx, 31, 0x129F0Cu);
    ctx->pc = 0x129F08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129508u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x129508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F0Cu; }
    }
    if (ctx->pc != 0x129F0Cu) { return; }
    ctx->pc = 0x129F0Cu;
    // 0x129f0c: 0xdfbf0010
    ctx->pc = 0x129f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_129f10:
    // 0x129f10: 0x3e00008
    ctx->pc = 0x129F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129E88u: goto label_129e88;
            case 0x129EB0u: goto label_129eb0;
            case 0x129EB8u: goto label_129eb8;
            case 0x129EBCu: goto label_129ebc;
            case 0x129EE0u: goto label_129ee0;
            case 0x129F04u: goto label_129f04;
            case 0x129F10u: goto label_129f10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129F18u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sitofp
// Address: 0x2f9f40 - 0x2f9ff8
void sitofp_0x2f9f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9f40u;

    // 0x2f9f40: 0x27bdffe0
    ctx->pc = 0x2f9f40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f9f44: 0x24020003
    ctx->pc = 0x2f9f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9f48: 0x41fc2
    ctx->pc = 0x2f9f48u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x2f9f4c: 0xffbf0010
    ctx->pc = 0x2f9f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f9f50: 0xafa20000
    ctx->pc = 0x2f9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f9f54: 0x14800004
    ctx->pc = 0x2F9F54u;
    {
        const bool branch_taken_0x2f9f54 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9F58u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x2f9f54) {
            ctx->pc = 0x2F9F68u;
            goto label_2f9f68;
        }
    }
    ctx->pc = 0x2F9F5Cu;
    // 0x2f9f5c: 0x24020002
    ctx->pc = 0x2f9f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9f60: 0x10000020
    ctx->pc = 0x2F9F60u;
    {
        const bool branch_taken_0x2f9f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9F64u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9f60) {
            ctx->pc = 0x2F9FE4u;
            goto label_2f9fe4;
        }
    }
    ctx->pc = 0x2F9F68u;
label_2f9f68:
    // 0x2f9f68: 0x2402001e
    ctx->pc = 0x2f9f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f9f6c: 0x1060000a
    ctx->pc = 0x2F9F6Cu;
    {
        const bool branch_taken_0x2f9f6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9F70u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9f6c) {
            ctx->pc = 0x2F9F98u;
            goto label_2f9f98;
        }
    }
    ctx->pc = 0x2F9F74u;
    // 0x2f9f74: 0x3c028000
    ctx->pc = 0x2f9f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x2f9f78: 0x14820005
    ctx->pc = 0x2F9F78u;
    {
        const bool branch_taken_0x2f9f78 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F9F7Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x2f9f78) {
            ctx->pc = 0x2F9F90u;
            goto label_2f9f90;
        }
    }
    ctx->pc = 0x2F9F80u;
    // 0x2f9f80: 0x3c01cf00
    ctx->pc = 0x2f9f80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52992 << 16));
    // 0x2f9f84: 0x44810000
    ctx->pc = 0x2f9f84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2f9f88: 0x10000019
    ctx->pc = 0x2F9F88u;
    {
        const bool branch_taken_0x2f9f88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9F8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2f9f88) {
            ctx->pc = 0x2F9FF0u;
            goto label_2f9ff0;
        }
    }
    ctx->pc = 0x2F9F90u;
label_2f9f90:
    // 0x2f9f90: 0x10000002
    ctx->pc = 0x2F9F90u;
    {
        const bool branch_taken_0x2f9f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9F94u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9f90) {
            ctx->pc = 0x2F9F9Cu;
            goto label_2f9f9c;
        }
    }
    ctx->pc = 0x2F9F98u;
label_2f9f98:
    // 0x2f9f98: 0xafa4000c
    ctx->pc = 0x2f9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_2f9f9c:
    // 0x2f9f9c: 0x8fa6000c
    ctx->pc = 0x2f9f9cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f9fa0: 0x3c023fff
    ctx->pc = 0x2f9fa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x2f9fa4: 0x3442ffff
    ctx->pc = 0x2f9fa4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2f9fa8: 0x46102b
    ctx->pc = 0x2f9fa8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f9fac: 0x1440000d
    ctx->pc = 0x2F9FACu;
    {
        const bool branch_taken_0x2f9fac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9FB0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)16383 << 16));
        if (branch_taken_0x2f9fac) {
            ctx->pc = 0x2F9FE4u;
            goto label_2f9fe4;
        }
    }
    ctx->pc = 0x2F9FB4u;
    // 0x2f9fb4: 0x8fa40008
    ctx->pc = 0x2f9fb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9fb8: 0x34a5ffff
    ctx->pc = 0x2f9fb8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x2f9fbc: 0x0
    ctx->pc = 0x2f9fbcu;
    // NOP
label_2f9fc0:
    // 0x2f9fc0: 0x61840
    ctx->pc = 0x2f9fc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x2f9fc4: 0x2484ffff
    ctx->pc = 0x2f9fc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f9fc8: 0x60302d
    ctx->pc = 0x2f9fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9fcc: 0xa3102b
    ctx->pc = 0x2f9fccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f9fd0: 0x0
    ctx->pc = 0x2f9fd0u;
    // NOP
    // 0x2f9fd4: 0x1040fffa
    ctx->pc = 0x2F9FD4u;
    {
        const bool branch_taken_0x2f9fd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f9fd4) {
            ctx->pc = 0x2F9FC0u;
            goto label_2f9fc0;
        }
    }
    ctx->pc = 0x2F9FDCu;
    // 0x2f9fdc: 0xafa40008
    ctx->pc = 0x2f9fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2f9fe0: 0xafa3000c
    ctx->pc = 0x2f9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2f9fe4:
    // 0x2f9fe4: 0xc0be57a
    ctx->pc = 0x2F9FE4u;
    SET_GPR_U32(ctx, 31, 0x2F9FECu);
    ctx->pc = 0x2F9FE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F95E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x2f95e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FECu; }
    }
    if (ctx->pc != 0x2F9FECu) { return; }
    ctx->pc = 0x2F9FECu;
    // 0x2f9fec: 0xdfbf0010
    ctx->pc = 0x2f9fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9ff0:
    // 0x2f9ff0: 0x3e00008
    ctx->pc = 0x2F9FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F9F68u: goto label_2f9f68;
            case 0x2F9F90u: goto label_2f9f90;
            case 0x2F9F98u: goto label_2f9f98;
            case 0x2F9F9Cu: goto label_2f9f9c;
            case 0x2F9FC0u: goto label_2f9fc0;
            case 0x2F9FE4u: goto label_2f9fe4;
            case 0x2F9FF0u: goto label_2f9ff0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F9FF8u;
}

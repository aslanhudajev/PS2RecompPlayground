#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_DoReformTc
// Address: 0x196f30 - 0x197014
void sfmpv_DoReformTc_0x196f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_DoReformTc");


    ctx->pc = 0x196f30u;

    // 0x196f30: 0x27bdffc0
    ctx->pc = 0x196f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196f34: 0x80182d
    ctx->pc = 0x196f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f38: 0xffb00020
    ctx->pc = 0x196f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x196f3c: 0x24620ad4
    ctx->pc = 0x196f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2772));
    // 0x196f40: 0xffbf0030
    ctx->pc = 0x196f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x196f44: 0xa0802d
    ctx->pc = 0x196f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f48: 0x24640ad8
    ctx->pc = 0x196f48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2776));
    // 0x196f4c: 0x8e050010
    ctx->pc = 0x196f4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196f50: 0x8e09001c
    ctx->pc = 0x196f50u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x196f54: 0x10e0000a
    ctx->pc = 0x196F54u;
    {
        const bool branch_taken_0x196f54 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x196F58u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x196f54) {
            ctx->pc = 0x196F80u;
            goto label_196f80;
        }
    }
    ctx->pc = 0x196F5Cu;
    // 0x196f5c: 0x4c20009
    ctx->pc = 0x196F5Cu;
    {
        const bool branch_taken_0x196f5c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x196f5c) {
            ctx->pc = 0x196F60u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->pc = 0x196F84u;
            goto label_196f84;
        }
    }
    ctx->pc = 0x196F64u;
    // 0x196f64: 0xc0202d
    ctx->pc = 0x196f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f68: 0x100382d
    ctx->pc = 0x196f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f6c: 0x120302d
    ctx->pc = 0x196f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f70: 0xc065c06
    ctx->pc = 0x196F70u;
    SET_GPR_U32(ctx, 31, 0x196F78u);
    ctx->pc = 0x196F74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197018u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_Pts2Tc_0x197018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F78u; }
        else if (ctx->pc != 0x196F78u) { ctx->pc = 0x196F78u; }
    }
    if (ctx->pc != 0x196F78u) { return; }
    ctx->pc = 0x196F78u;
    // 0x196f78: 0x10000012
    ctx->pc = 0x196F78u;
    {
        const bool branch_taken_0x196f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196F7Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x196f78) {
            ctx->pc = 0x196FC4u;
            goto label_196fc4;
        }
    }
    ctx->pc = 0x196F80u;
label_196f80:
    // 0x196f80: 0x8c420000
    ctx->pc = 0x196f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196f84:
    // 0x196f84: 0x1440000a
    ctx->pc = 0x196F84u;
    {
        const bool branch_taken_0x196f84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x196f84) {
            ctx->pc = 0x196FB0u;
            goto label_196fb0;
        }
    }
    ctx->pc = 0x196F8Cu;
    // 0x196f8c: 0x8c626758
    ctx->pc = 0x196f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 26456)));
    // 0x196f90: 0x1440001d
    ctx->pc = 0x196F90u;
    {
        const bool branch_taken_0x196f90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x196F94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x196f90) {
            ctx->pc = 0x197008u;
            goto label_197008;
        }
    }
    ctx->pc = 0x196F98u;
    // 0x196f98: 0xae00002c
    ctx->pc = 0x196f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x196f9c: 0xae00001c
    ctx->pc = 0x196f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x196fa0: 0xae000020
    ctx->pc = 0x196fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x196fa4: 0xae000024
    ctx->pc = 0x196fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x196fa8: 0x10000017
    ctx->pc = 0x196FA8u;
    {
        const bool branch_taken_0x196fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196FACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        if (branch_taken_0x196fa8) {
            ctx->pc = 0x197008u;
            goto label_197008;
        }
    }
    ctx->pc = 0x196FB0u;
label_196fb0:
    // 0x196fb0: 0x10e0000c
    ctx->pc = 0x196FB0u;
    {
        const bool branch_taken_0x196fb0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x196FB4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196fb0) {
            ctx->pc = 0x196FE4u;
            goto label_196fe4;
        }
    }
    ctx->pc = 0x196FB8u;
    // 0x196fb8: 0xc065c7c
    ctx->pc = 0x196FB8u;
    SET_GPR_U32(ctx, 31, 0x196FC0u);
    ctx->pc = 0x196FBCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1971F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_NextTc_0x1971f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196FC0u; }
        else if (ctx->pc != 0x196FC0u) { ctx->pc = 0x196FC0u; }
    }
    if (ctx->pc != 0x196FC0u) { return; }
    ctx->pc = 0x196FC0u;
    // 0x196fc0: 0x8fa30008
    ctx->pc = 0x196fc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_196fc4:
    // 0x196fc4: 0x8fa4000c
    ctx->pc = 0x196fc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x196fc8: 0x8fa50010
    ctx->pc = 0x196fc8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196fcc: 0x8fa20014
    ctx->pc = 0x196fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x196fd0: 0xae030020
    ctx->pc = 0x196fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x196fd4: 0xae02002c
    ctx->pc = 0x196fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x196fd8: 0xae040024
    ctx->pc = 0x196fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x196fdc: 0x10000009
    ctx->pc = 0x196FDCu;
    {
        const bool branch_taken_0x196fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196FE0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
        if (branch_taken_0x196fdc) {
            ctx->pc = 0x197004u;
            goto label_197004;
        }
    }
    ctx->pc = 0x196FE4u;
label_196fe4:
    // 0x196fe4: 0x8c820008
    ctx->pc = 0x196fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x196fe8: 0xae020020
    ctx->pc = 0x196fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x196fec: 0x8c83000c
    ctx->pc = 0x196fecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x196ff0: 0xae030024
    ctx->pc = 0x196ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x196ff4: 0x8c820010
    ctx->pc = 0x196ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x196ff8: 0xae020028
    ctx->pc = 0x196ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x196ffc: 0x8c830014
    ctx->pc = 0x196ffcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x197000: 0xae03002c
    ctx->pc = 0x197000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_197004:
    // 0x197004: 0xdfbf0030
    ctx->pc = 0x197004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_197008:
    // 0x197008: 0xdfb00020
    ctx->pc = 0x197008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19700c: 0x3e00008
    ctx->pc = 0x19700Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197010u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196F80u: goto label_196f80;
            case 0x196F84u: goto label_196f84;
            case 0x196FB0u: goto label_196fb0;
            case 0x196FC4u: goto label_196fc4;
            case 0x196FE4u: goto label_196fe4;
            case 0x197004u: goto label_197004;
            case 0x197008u: goto label_197008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197014u;
}

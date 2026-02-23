#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_RelFrm
// Address: 0x19be80 - 0x19bee4
void SFD_RelFrm_0x19be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_RelFrm");


    ctx->pc = 0x19be80u;

    // 0x19be80: 0x27bdffd0
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19be84: 0xffb00000
    ctx->pc = 0x19be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19be88: 0xffb10010
    ctx->pc = 0x19be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19be8c: 0x80802d
    ctx->pc = 0x19be8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be90: 0xffbf0020
    ctx->pc = 0x19be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19be94: 0xc064f1e
    ctx->pc = 0x19BE94u;
    SET_GPR_U32(ctx, 31, 0x19BE9Cu);
    ctx->pc = 0x19BE98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE9Cu; }
        else if (ctx->pc != 0x19BE9Cu) { ctx->pc = 0x19BE9Cu; }
    }
    if (ctx->pc != 0x19BE9Cu) { return; }
    ctx->pc = 0x19BE9Cu;
    // 0x19be9c: 0x10400006
    ctx->pc = 0x19BE9Cu;
    {
        const bool branch_taken_0x19be9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BEA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19be9c) {
            ctx->pc = 0x19BEB8u;
            goto label_19beb8;
        }
    }
    ctx->pc = 0x19BEA4u;
    // 0x19bea4: 0x3c05ff00
    ctx->pc = 0x19bea4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19bea8: 0xc064ea0
    ctx->pc = 0x19BEA8u;
    SET_GPR_U32(ctx, 31, 0x19BEB0u);
    ctx->pc = 0x19BEACu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 311));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEB0u; }
        else if (ctx->pc != 0x19BEB0u) { ctx->pc = 0x19BEB0u; }
    }
    if (ctx->pc != 0x19BEB0u) { return; }
    ctx->pc = 0x19BEB0u;
    // 0x19beb0: 0x10000008
    ctx->pc = 0x19BEB0u;
    {
        const bool branch_taken_0x19beb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BEB4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19beb0) {
            ctx->pc = 0x19BED4u;
            goto label_19bed4;
        }
    }
    ctx->pc = 0x19BEB8u;
label_19beb8:
    // 0x19beb8: 0x200202d
    ctx->pc = 0x19beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bebc: 0x220382d
    ctx->pc = 0x19bebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bec0: 0x24050006
    ctx->pc = 0x19bec0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19bec4: 0x2406000c
    ctx->pc = 0x19bec4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x19bec8: 0xc067cca
    ctx->pc = 0x19BEC8u;
    SET_GPR_U32(ctx, 31, 0x19BED0u);
    ctx->pc = 0x19BECCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BED0u; }
        else if (ctx->pc != 0x19BED0u) { ctx->pc = 0x19BED0u; }
    }
    if (ctx->pc != 0x19BED0u) { return; }
    ctx->pc = 0x19BED0u;
    // 0x19bed0: 0xdfbf0020
    ctx->pc = 0x19bed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19bed4:
    // 0x19bed4: 0xdfb10010
    ctx->pc = 0x19bed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bed8: 0xdfb00000
    ctx->pc = 0x19bed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bedc: 0x3e00008
    ctx->pc = 0x19BEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BEE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BEB8u: goto label_19beb8;
            case 0x19BED4u: goto label_19bed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BEE4u;
}

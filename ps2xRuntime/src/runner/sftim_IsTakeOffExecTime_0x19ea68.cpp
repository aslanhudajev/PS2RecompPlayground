#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_IsTakeOffExecTime
// Address: 0x19ea68 - 0x19ead8
void sftim_IsTakeOffExecTime_0x19ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_IsTakeOffExecTime");


    ctx->pc = 0x19ea68u;

    // 0x19ea68: 0x27bdffe0
    ctx->pc = 0x19ea68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ea6c: 0x24840a94
    ctx->pc = 0x19ea6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2708));
    // 0x19ea70: 0xffb00000
    ctx->pc = 0x19ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ea74: 0x3c020026
    ctx->pc = 0x19ea74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19ea78: 0xffbf0010
    ctx->pc = 0x19ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ea7c: 0x2442dee8
    ctx->pc = 0x19ea7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958824));
    // 0x19ea80: 0xc0402d
    ctx->pc = 0x19ea80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea84: 0xe0802d
    ctx->pc = 0x19ea84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea88: 0x8c830278
    ctx->pc = 0x19ea88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x19ea8c: 0x4610004
    ctx->pc = 0x19EA8Cu;
    {
        const bool branch_taken_0x19ea8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19ea8c) {
            ctx->pc = 0x19EAA0u;
            goto label_19eaa0;
        }
    }
    ctx->pc = 0x19EA94u;
    // 0x19ea94: 0xac800278
    ctx->pc = 0x19ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 0));
    // 0x19ea98: 0x10000008
    ctx->pc = 0x19EA98u;
    {
        const bool branch_taken_0x19ea98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EA9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19ea98) {
            ctx->pc = 0x19EABCu;
            goto label_19eabc;
        }
    }
    ctx->pc = 0x19EAA0u;
label_19eaa0:
    // 0x19eaa0: 0x8c860278
    ctx->pc = 0x19eaa0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x19eaa4: 0xa0202d
    ctx->pc = 0x19eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eaa8: 0x8c470008
    ctx->pc = 0x19eaa8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19eaac: 0xc05f946
    ctx->pc = 0x19EAACu;
    SET_GPR_U32(ctx, 31, 0x19EAB4u);
    ctx->pc = 0x19EAB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E518u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_CmpTime_0x17e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EAB4u; }
        else if (ctx->pc != 0x19EAB4u) { ctx->pc = 0x19EAB4u; }
    }
    if (ctx->pc != 0x19EAB4u) { return; }
    ctx->pc = 0x19EAB4u;
    // 0x19eab4: 0x10400003
    ctx->pc = 0x19EAB4u;
    {
        const bool branch_taken_0x19eab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EAB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19eab4) {
            ctx->pc = 0x19EAC4u;
            goto label_19eac4;
        }
    }
    ctx->pc = 0x19EABCu;
label_19eabc:
    // 0x19eabc: 0x10000002
    ctx->pc = 0x19EABCu;
    {
        const bool branch_taken_0x19eabc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EAC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x19eabc) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19EAC4u;
label_19eac4:
    // 0x19eac4: 0xae000000
    ctx->pc = 0x19eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_19eac8:
    // 0x19eac8: 0xdfbf0010
    ctx->pc = 0x19eac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eacc: 0xdfb00000
    ctx->pc = 0x19eaccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ead0: 0x3e00008
    ctx->pc = 0x19EAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EAD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EAA0u: goto label_19eaa0;
            case 0x19EABCu: goto label_19eabc;
            case 0x19EAC4u: goto label_19eac4;
            case 0x19EAC8u: goto label_19eac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EAD8u;
}

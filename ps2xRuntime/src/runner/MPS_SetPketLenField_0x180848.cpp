#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_SetPketLenField
// Address: 0x180848 - 0x18089c
void MPS_SetPketLenField_0x180848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_SetPketLenField");


    ctx->pc = 0x180848u;

    // 0x180848: 0x27bdffd0
    ctx->pc = 0x180848u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18084c: 0xffb00000
    ctx->pc = 0x18084cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180850: 0xffb10010
    ctx->pc = 0x180850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x180854: 0x80802d
    ctx->pc = 0x180854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180858: 0xffbf0020
    ctx->pc = 0x180858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18085c: 0xc0609f0
    ctx->pc = 0x18085Cu;
    SET_GPR_U32(ctx, 31, 0x180864u);
    ctx->pc = 0x180860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1827C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_CheckHn_0x1827c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180864u; }
        else if (ctx->pc != 0x180864u) { ctx->pc = 0x180864u; }
    }
    if (ctx->pc != 0x180864u) { return; }
    ctx->pc = 0x180864u;
    // 0x180864: 0x10400006
    ctx->pc = 0x180864u;
    {
        const bool branch_taken_0x180864 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x180868u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180864) {
            ctx->pc = 0x180880u;
            goto label_180880;
        }
    }
    ctx->pc = 0x18086Cu;
    // 0x18086c: 0x3c05ff02
    ctx->pc = 0x18086cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x180870: 0xc060986
    ctx->pc = 0x180870u;
    SET_GPR_U32(ctx, 31, 0x180878u);
    ctx->pc = 0x180874u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 770));
    ctx->pc = 0x182618u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_SetErr_0x182618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180878u; }
        else if (ctx->pc != 0x180878u) { ctx->pc = 0x180878u; }
    }
    if (ctx->pc != 0x180878u) { return; }
    ctx->pc = 0x180878u;
    // 0x180878: 0x10000004
    ctx->pc = 0x180878u;
    {
        const bool branch_taken_0x180878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18087Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x180878) {
            ctx->pc = 0x18088Cu;
            goto label_18088c;
        }
    }
    ctx->pc = 0x180880u;
label_180880:
    // 0x180880: 0xae110010
    ctx->pc = 0x180880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x180884: 0x102d
    ctx->pc = 0x180884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180888: 0xdfbf0020
    ctx->pc = 0x180888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18088c:
    // 0x18088c: 0xdfb10010
    ctx->pc = 0x18088cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180890: 0xdfb00000
    ctx->pc = 0x180890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180894: 0x3e00008
    ctx->pc = 0x180894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180898u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180880u: goto label_180880;
            case 0x18088Cu: goto label_18088c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18089Cu;
}

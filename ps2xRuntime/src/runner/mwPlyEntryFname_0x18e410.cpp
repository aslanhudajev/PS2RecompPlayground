#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyEntryFname
// Address: 0x18e410 - 0x18e474
void mwPlyEntryFname_0x18e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyEntryFname");


    ctx->pc = 0x18e410u;

    // 0x18e410: 0x27bdffd0
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e414: 0xffb10010
    ctx->pc = 0x18e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18e418: 0xffb00000
    ctx->pc = 0x18e418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e41c: 0xa0882d
    ctx->pc = 0x18e41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e420: 0xffbf0020
    ctx->pc = 0x18e420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e424: 0x80802d
    ctx->pc = 0x18e424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e428: 0xc05e7f0
    ctx->pc = 0x18E428u;
    SET_GPR_U32(ctx, 31, 0x18E430u);
    ctx->pc = 0x18E42Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x179FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_EntryFname_0x179fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E430u; }
        else if (ctx->pc != 0x18E430u) { ctx->pc = 0x18E430u; }
    }
    if (ctx->pc != 0x18E430u) { return; }
    ctx->pc = 0x18E430u;
    // 0x18e430: 0x4430009
    ctx->pc = 0x18E430u;
    {
        const bool branch_taken_0x18e430 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18e430) {
            ctx->pc = 0x18E434u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->pc = 0x18E458u;
            goto label_18e458;
        }
    }
    ctx->pc = 0x18E438u;
    // 0x18e438: 0x220282d
    ctx->pc = 0x18e438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e43c: 0x3c04002c
    ctx->pc = 0x18e43cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18e440: 0xdfbf0020
    ctx->pc = 0x18e440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e444: 0x2484cfc8
    ctx->pc = 0x18e444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954952));
    // 0x18e448: 0xdfb10010
    ctx->pc = 0x18e448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e44c: 0xdfb00000
    ctx->pc = 0x18e44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e450: 0x8063dda
    ctx->pc = 0x18E450u;
    ctx->pc = 0x18E454u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x18F768u;
    MWSFSVM_Error_0x18f768(rdram, ctx, runtime); return;
    ctx->pc = 0x18E458u;
label_18e458:
    // 0x18e458: 0xdfbf0020
    ctx->pc = 0x18e458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e45c: 0x24420001
    ctx->pc = 0x18e45cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18e460: 0xdfb10010
    ctx->pc = 0x18e460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e464: 0xae020084
    ctx->pc = 0x18e464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x18e468: 0xdfb00000
    ctx->pc = 0x18e468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e46c: 0x3e00008
    ctx->pc = 0x18E46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E470u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E458u: goto label_18e458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E474u;
}

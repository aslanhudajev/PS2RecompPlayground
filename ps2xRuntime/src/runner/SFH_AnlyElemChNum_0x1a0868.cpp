#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemChNum
// Address: 0x1a0868 - 0x1a08d0
void SFH_AnlyElemChNum_0x1a0868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemChNum");


    ctx->pc = 0x1a0868u;

    // 0x1a0868: 0x27bdffc0
    ctx->pc = 0x1a0868u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a086c: 0xffb10010
    ctx->pc = 0x1a086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0870: 0xffb20020
    ctx->pc = 0x1a0870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0874: 0x30b100ff
    ctx->pc = 0x1a0874u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0878: 0xffb00000
    ctx->pc = 0x1a0878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a087c: 0xc0902d
    ctx->pc = 0x1a087cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0880: 0xffbf0030
    ctx->pc = 0x1a0880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0884: 0xc0681d0
    ctx->pc = 0x1A0884u;
    SET_GPR_U32(ctx, 31, 0x1A088Cu);
    ctx->pc = 0x1A0888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A088Cu; }
        else if (ctx->pc != 0x1A088Cu) { ctx->pc = 0x1A088Cu; }
    }
    if (ctx->pc != 0x1A088Cu) { return; }
    ctx->pc = 0x1A088Cu;
    // 0x1a088c: 0x40802d
    ctx->pc = 0x1a088cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0890: 0x12000009
    ctx->pc = 0x1A0890u;
    {
        const bool branch_taken_0x1a0890 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0894u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0890) {
            ctx->pc = 0x1A08B8u;
            goto label_1a08b8;
        }
    }
    ctx->pc = 0x1A0898u;
    // 0x1a0898: 0xc0683c8
    ctx->pc = 0x1A0898u;
    SET_GPR_U32(ctx, 31, 0x1A08A0u);
    ctx->pc = 0x1A089Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08A0u; }
        else if (ctx->pc != 0x1A08A0u) { ctx->pc = 0x1A08A0u; }
    }
    if (ctx->pc != 0x1A08A0u) { return; }
    ctx->pc = 0x1A08A0u;
    // 0x1a08a0: 0x240300c0
    ctx->pc = 0x1a08a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a08a4: 0x14430004
    ctx->pc = 0x1A08A4u;
    {
        const bool branch_taken_0x1a08a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A08A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a08a4) {
            ctx->pc = 0x1A08B8u;
            goto label_1a08b8;
        }
    }
    ctx->pc = 0x1A08ACu;
    // 0x1a08ac: 0x9203001b
    ctx->pc = 0x1a08acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x1a08b0: 0x24020001
    ctx->pc = 0x1a08b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a08b4: 0xae430000
    ctx->pc = 0x1a08b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a08b8:
    // 0x1a08b8: 0xdfbf0030
    ctx->pc = 0x1a08b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a08bc: 0xdfb20020
    ctx->pc = 0x1a08bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a08c0: 0xdfb10010
    ctx->pc = 0x1a08c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a08c4: 0xdfb00000
    ctx->pc = 0x1a08c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a08c8: 0x3e00008
    ctx->pc = 0x1A08C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A08CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A08B8u: goto label_1a08b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A08D0u;
}

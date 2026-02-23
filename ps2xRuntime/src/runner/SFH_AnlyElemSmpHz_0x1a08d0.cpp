#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemSmpHz
// Address: 0x1a08d0 - 0x1a0938
void SFH_AnlyElemSmpHz_0x1a08d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemSmpHz");


    ctx->pc = 0x1a08d0u;

    // 0x1a08d0: 0x27bdffc0
    ctx->pc = 0x1a08d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a08d4: 0xffb10010
    ctx->pc = 0x1a08d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a08d8: 0xffb20020
    ctx->pc = 0x1a08d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a08dc: 0x30b100ff
    ctx->pc = 0x1a08dcu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a08e0: 0xffb00000
    ctx->pc = 0x1a08e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a08e4: 0xc0902d
    ctx->pc = 0x1a08e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08e8: 0xffbf0030
    ctx->pc = 0x1a08e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a08ec: 0xc0681d0
    ctx->pc = 0x1A08ECu;
    SET_GPR_U32(ctx, 31, 0x1A08F4u);
    ctx->pc = 0x1A08F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08F4u; }
        else if (ctx->pc != 0x1A08F4u) { ctx->pc = 0x1A08F4u; }
    }
    if (ctx->pc != 0x1A08F4u) { return; }
    ctx->pc = 0x1A08F4u;
    // 0x1a08f4: 0x40802d
    ctx->pc = 0x1a08f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08f8: 0x12000009
    ctx->pc = 0x1A08F8u;
    {
        const bool branch_taken_0x1a08f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A08FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a08f8) {
            ctx->pc = 0x1A0920u;
            goto label_1a0920;
        }
    }
    ctx->pc = 0x1A0900u;
    // 0x1a0900: 0xc0683c8
    ctx->pc = 0x1A0900u;
    SET_GPR_U32(ctx, 31, 0x1A0908u);
    ctx->pc = 0x1A0904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0908u; }
        else if (ctx->pc != 0x1A0908u) { ctx->pc = 0x1A0908u; }
    }
    if (ctx->pc != 0x1A0908u) { return; }
    ctx->pc = 0x1A0908u;
    // 0x1a0908: 0x240300c0
    ctx->pc = 0x1a0908u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a090c: 0x14430004
    ctx->pc = 0x1A090Cu;
    {
        const bool branch_taken_0x1a090c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A0910u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a090c) {
            ctx->pc = 0x1A0920u;
            goto label_1a0920;
        }
    }
    ctx->pc = 0x1A0914u;
    // 0x1a0914: 0x8e03001c
    ctx->pc = 0x1a0914u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a0918: 0x24020001
    ctx->pc = 0x1a0918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a091c: 0xae430000
    ctx->pc = 0x1a091cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0920:
    // 0x1a0920: 0xdfbf0030
    ctx->pc = 0x1a0920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0924: 0xdfb20020
    ctx->pc = 0x1a0924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0928: 0xdfb10010
    ctx->pc = 0x1a0928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a092c: 0xdfb00000
    ctx->pc = 0x1a092cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0930: 0x3e00008
    ctx->pc = 0x1A0930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0920u: goto label_1a0920;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0938u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemCodecVid
// Address: 0x1a0938 - 0x1a09a0
void SFH_AnlyElemCodecVid_0x1a0938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemCodecVid");


    ctx->pc = 0x1a0938u;

    // 0x1a0938: 0x27bdffc0
    ctx->pc = 0x1a0938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a093c: 0xffb10010
    ctx->pc = 0x1a093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0940: 0xffb20020
    ctx->pc = 0x1a0940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0944: 0x30b100ff
    ctx->pc = 0x1a0944u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0948: 0xffb00000
    ctx->pc = 0x1a0948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a094c: 0xc0902d
    ctx->pc = 0x1a094cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0950: 0xffbf0030
    ctx->pc = 0x1a0950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0954: 0xc0681d0
    ctx->pc = 0x1A0954u;
    SET_GPR_U32(ctx, 31, 0x1A095Cu);
    ctx->pc = 0x1A0958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A095Cu; }
        else if (ctx->pc != 0x1A095Cu) { ctx->pc = 0x1A095Cu; }
    }
    if (ctx->pc != 0x1A095Cu) { return; }
    ctx->pc = 0x1A095Cu;
    // 0x1a095c: 0x40802d
    ctx->pc = 0x1a095cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0960: 0x12000009
    ctx->pc = 0x1A0960u;
    {
        const bool branch_taken_0x1a0960 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0964u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0960) {
            ctx->pc = 0x1A0988u;
            goto label_1a0988;
        }
    }
    ctx->pc = 0x1A0968u;
    // 0x1a0968: 0xc0683c8
    ctx->pc = 0x1A0968u;
    SET_GPR_U32(ctx, 31, 0x1A0970u);
    ctx->pc = 0x1A096Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0970u; }
        else if (ctx->pc != 0x1A0970u) { ctx->pc = 0x1A0970u; }
    }
    if (ctx->pc != 0x1A0970u) { return; }
    ctx->pc = 0x1A0970u;
    // 0x1a0970: 0x240300e0
    ctx->pc = 0x1a0970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a0974: 0x14430004
    ctx->pc = 0x1A0974u;
    {
        const bool branch_taken_0x1a0974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A0978u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0974) {
            ctx->pc = 0x1A0988u;
            goto label_1a0988;
        }
    }
    ctx->pc = 0x1A097Cu;
    // 0x1a097c: 0x92030019
    ctx->pc = 0x1a097cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1a0980: 0x24020001
    ctx->pc = 0x1a0980u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0984: 0xae430000
    ctx->pc = 0x1a0984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0988:
    // 0x1a0988: 0xdfbf0030
    ctx->pc = 0x1a0988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a098c: 0xdfb20020
    ctx->pc = 0x1a098cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0990: 0xdfb10010
    ctx->pc = 0x1a0990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0994: 0xdfb00000
    ctx->pc = 0x1a0994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0998: 0x3e00008
    ctx->pc = 0x1A0998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A099Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0988u: goto label_1a0988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A09A0u;
}

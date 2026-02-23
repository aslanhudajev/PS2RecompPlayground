#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyByteRate
// Address: 0x1a04f8 - 0x1a055c
void SFH_AnlyByteRate_0x1a04f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyByteRate");


    ctx->pc = 0x1a04f8u;

    // 0x1a04f8: 0x27bdffc0
    ctx->pc = 0x1a04f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a04fc: 0xffb20020
    ctx->pc = 0x1a04fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0500: 0xffb10010
    ctx->pc = 0x1a0500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0504: 0xa0902d
    ctx->pc = 0x1a0504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0508: 0xffb00000
    ctx->pc = 0x1a0508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a050c: 0xffbf0030
    ctx->pc = 0x1a050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0510: 0x80802d
    ctx->pc = 0x1a0510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0514: 0x8e020004
    ctx->pc = 0x1a0514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a0518: 0xc067f18
    ctx->pc = 0x1A0518u;
    SET_GPR_U32(ctx, 31, 0x1A0520u);
    ctx->pc = 0x1A051Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0520u; }
        else if (ctx->pc != 0x1A0520u) { ctx->pc = 0x1A0520u; }
    }
    if (ctx->pc != 0x1A0520u) { return; }
    ctx->pc = 0x1A0520u;
    // 0x1a0520: 0x10400008
    ctx->pc = 0x1A0520u;
    {
        const bool branch_taken_0x1a0520 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0524u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0520) {
            ctx->pc = 0x1A0544u;
            goto label_1a0544;
        }
    }
    ctx->pc = 0x1A0528u;
    // 0x1a0528: 0x8e02000c
    ctx->pc = 0x1a0528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a052c: 0x2842006e
    ctx->pc = 0x1a052cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 110));
    // 0x1a0530: 0x14400004
    ctx->pc = 0x1A0530u;
    {
        const bool branch_taken_0x1a0530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A0534u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0530) {
            ctx->pc = 0x1A0544u;
            goto label_1a0544;
        }
    }
    ctx->pc = 0x1A0538u;
    // 0x1a0538: 0x8e230004
    ctx->pc = 0x1a0538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a053c: 0x24020001
    ctx->pc = 0x1a053cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0540: 0xae430000
    ctx->pc = 0x1a0540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0544:
    // 0x1a0544: 0xdfbf0030
    ctx->pc = 0x1a0544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0548: 0xdfb20020
    ctx->pc = 0x1a0548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a054c: 0xdfb10010
    ctx->pc = 0x1a054cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0550: 0xdfb00000
    ctx->pc = 0x1a0550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0554: 0x3e00008
    ctx->pc = 0x1A0554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0544u: goto label_1a0544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A055Cu;
}

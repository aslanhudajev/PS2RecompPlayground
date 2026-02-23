#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_AnlyAudio
// Address: 0x193530 - 0x1935c4
void sfhds_AnlyAudio_0x193530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_AnlyAudio");


    ctx->pc = 0x193530u;

    // 0x193530: 0x27bdffc0
    ctx->pc = 0x193530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193534: 0xffb20020
    ctx->pc = 0x193534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x193538: 0xffb10010
    ctx->pc = 0x193538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19353c: 0xc0902d
    ctx->pc = 0x19353cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193540: 0xffb00000
    ctx->pc = 0x193540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193544: 0x80882d
    ctx->pc = 0x193544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193548: 0xa0802d
    ctx->pc = 0x193548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19354c: 0x12000017
    ctx->pc = 0x19354Cu;
    {
        const bool branch_taken_0x19354c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x193550u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x19354c) {
            ctx->pc = 0x1935ACu;
            goto label_1935ac;
        }
    }
    ctx->pc = 0x193554u;
    // 0x193554: 0x3c06001a
    ctx->pc = 0x193554u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x193558: 0xc064ddc
    ctx->pc = 0x193558u;
    SET_GPR_U32(ctx, 31, 0x193560u);
    ctx->pc = 0x19355Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1928));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193560u; }
        else if (ctx->pc != 0x193560u) { ctx->pc = 0x193560u; }
    }
    if (ctx->pc != 0x193560u) { return; }
    ctx->pc = 0x193560u;
    // 0x193560: 0x3c06001a
    ctx->pc = 0x193560u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x193564: 0xae420000
    ctx->pc = 0x193564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x193568: 0x24c607f0
    ctx->pc = 0x193568u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2032));
    // 0x19356c: 0x220202d
    ctx->pc = 0x19356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193570: 0xc064ddc
    ctx->pc = 0x193570u;
    SET_GPR_U32(ctx, 31, 0x193578u);
    ctx->pc = 0x193574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193578u; }
        else if (ctx->pc != 0x193578u) { ctx->pc = 0x193578u; }
    }
    if (ctx->pc != 0x193578u) { return; }
    ctx->pc = 0x193578u;
    // 0x193578: 0x3c06001a
    ctx->pc = 0x193578u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x19357c: 0xae420004
    ctx->pc = 0x19357cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x193580: 0x24c60868
    ctx->pc = 0x193580u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2152));
    // 0x193584: 0x220202d
    ctx->pc = 0x193584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193588: 0xc064ddc
    ctx->pc = 0x193588u;
    SET_GPR_U32(ctx, 31, 0x193590u);
    ctx->pc = 0x19358Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193590u; }
        else if (ctx->pc != 0x193590u) { ctx->pc = 0x193590u; }
    }
    if (ctx->pc != 0x193590u) { return; }
    ctx->pc = 0x193590u;
    // 0x193590: 0x3c06001a
    ctx->pc = 0x193590u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x193594: 0xae420008
    ctx->pc = 0x193594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x193598: 0x220202d
    ctx->pc = 0x193598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19359c: 0x200282d
    ctx->pc = 0x19359cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935a0: 0xc064ddc
    ctx->pc = 0x1935A0u;
    SET_GPR_U32(ctx, 31, 0x1935A8u);
    ctx->pc = 0x1935A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2256));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935A8u; }
        else if (ctx->pc != 0x1935A8u) { ctx->pc = 0x1935A8u; }
    }
    if (ctx->pc != 0x1935A8u) { return; }
    ctx->pc = 0x1935A8u;
    // 0x1935a8: 0xae42000c
    ctx->pc = 0x1935a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1935ac:
    // 0x1935ac: 0xdfbf0030
    ctx->pc = 0x1935acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1935b0: 0xdfb20020
    ctx->pc = 0x1935b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1935b4: 0xdfb10010
    ctx->pc = 0x1935b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1935b8: 0xdfb00000
    ctx->pc = 0x1935b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1935bc: 0x3e00008
    ctx->pc = 0x1935BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1935C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1935ACu: goto label_1935ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1935C4u;
}

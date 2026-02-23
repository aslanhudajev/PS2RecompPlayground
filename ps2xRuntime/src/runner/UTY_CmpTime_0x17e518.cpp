#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_CmpTime
// Address: 0x17e518 - 0x17e5ac
void UTY_CmpTime_0x17e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_CmpTime");


    ctx->pc = 0x17e518u;

    // 0x17e518: 0x27bdffb0
    ctx->pc = 0x17e518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e51c: 0xffb30030
    ctx->pc = 0x17e51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17e520: 0xffb20020
    ctx->pc = 0x17e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17e524: 0xa0982d
    ctx->pc = 0x17e524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e528: 0xffb10010
    ctx->pc = 0x17e528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17e52c: 0xc0902d
    ctx->pc = 0x17e52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e530: 0xffb00000
    ctx->pc = 0x17e530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e534: 0xffbf0040
    ctx->pc = 0x17e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17e538: 0xc052e16
    ctx->pc = 0x17E538u;
    SET_GPR_U32(ctx, 31, 0x17E540u);
    ctx->pc = 0x17E53Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E540u; }
        else if (ctx->pc != 0x17E540u) { ctx->pc = 0x17E540u; }
    }
    if (ctx->pc != 0x17E540u) { return; }
    ctx->pc = 0x17E540u;
    // 0x17e540: 0x40802d
    ctx->pc = 0x17e540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e544: 0xc052e16
    ctx->pc = 0x17E544u;
    SET_GPR_U32(ctx, 31, 0x17E54Cu);
    ctx->pc = 0x17E548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E54Cu; }
        else if (ctx->pc != 0x17E54Cu) { ctx->pc = 0x17E54Cu; }
    }
    if (ctx->pc != 0x17E54Cu) { return; }
    ctx->pc = 0x17E54Cu;
    // 0x17e54c: 0x200202d
    ctx->pc = 0x17e54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e550: 0xc052cb8
    ctx->pc = 0x17E550u;
    SET_GPR_U32(ctx, 31, 0x17E558u);
    ctx->pc = 0x17E554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E558u; }
        else if (ctx->pc != 0x17E558u) { ctx->pc = 0x17E558u; }
    }
    if (ctx->pc != 0x17E558u) { return; }
    ctx->pc = 0x17E558u;
    // 0x17e558: 0x40882d
    ctx->pc = 0x17e558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e55c: 0xc052e16
    ctx->pc = 0x17E55Cu;
    SET_GPR_U32(ctx, 31, 0x17E564u);
    ctx->pc = 0x17E560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E564u; }
        else if (ctx->pc != 0x17E564u) { ctx->pc = 0x17E564u; }
    }
    if (ctx->pc != 0x17E564u) { return; }
    ctx->pc = 0x17E564u;
    // 0x17e564: 0x40802d
    ctx->pc = 0x17e564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e568: 0xc052e16
    ctx->pc = 0x17E568u;
    SET_GPR_U32(ctx, 31, 0x17E570u);
    ctx->pc = 0x17E56Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E570u; }
        else if (ctx->pc != 0x17E570u) { ctx->pc = 0x17E570u; }
    }
    if (ctx->pc != 0x17E570u) { return; }
    ctx->pc = 0x17E570u;
    // 0x17e570: 0x200202d
    ctx->pc = 0x17e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e574: 0xc052cb8
    ctx->pc = 0x17E574u;
    SET_GPR_U32(ctx, 31, 0x17E57Cu);
    ctx->pc = 0x17E578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E57Cu; }
        else if (ctx->pc != 0x17E57Cu) { ctx->pc = 0x17E57Cu; }
    }
    if (ctx->pc != 0x17E57Cu) { return; }
    ctx->pc = 0x17E57Cu;
    // 0x17e57c: 0x220202d
    ctx->pc = 0x17e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e580: 0xc052e02
    ctx->pc = 0x17E580u;
    SET_GPR_U32(ctx, 31, 0x17E588u);
    ctx->pc = 0x17E584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E588u; }
        else if (ctx->pc != 0x17E588u) { ctx->pc = 0x17E588u; }
    }
    if (ctx->pc != 0x17E588u) { return; }
    ctx->pc = 0x17E588u;
    // 0x17e588: 0x2102a
    ctx->pc = 0x17e588u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x17e58c: 0xdfbf0040
    ctx->pc = 0x17e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e590: 0xdfb30030
    ctx->pc = 0x17e590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e594: 0x38420001
    ctx->pc = 0x17e594u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x17e598: 0xdfb20020
    ctx->pc = 0x17e598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e59c: 0xdfb10010
    ctx->pc = 0x17e59cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e5a0: 0xdfb00000
    ctx->pc = 0x17e5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e5a4: 0x3e00008
    ctx->pc = 0x17E5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E5A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E5ACu;
}

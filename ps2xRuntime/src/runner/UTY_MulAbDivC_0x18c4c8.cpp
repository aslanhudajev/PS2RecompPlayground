#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_MulAbDivC
// Address: 0x18c4c8 - 0x18c560
void UTY_MulAbDivC_0x18c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_MulAbDivC");


    ctx->pc = 0x18c4c8u;

    // 0x18c4c8: 0x27bdffc0
    ctx->pc = 0x18c4c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18c4cc: 0xffb20020
    ctx->pc = 0x18c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18c4d0: 0xffb10010
    ctx->pc = 0x18c4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18c4d4: 0xc0902d
    ctx->pc = 0x18c4d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4d8: 0xffbf0030
    ctx->pc = 0x18c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18c4dc: 0xa0882d
    ctx->pc = 0x18c4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4e0: 0x16400009
    ctx->pc = 0x18C4E0u;
    {
        const bool branch_taken_0x18c4e0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C4E4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x18c4e0) {
            ctx->pc = 0x18C508u;
            goto label_18c508;
        }
    }
    ctx->pc = 0x18C4E8u;
    // 0x18c4e8: 0x911026
    ctx->pc = 0x18c4e8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x18c4ec: 0x2403ffff
    ctx->pc = 0x18c4ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18c4f0: 0x62182a
    ctx->pc = 0x18c4f0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x18c4f4: 0x3c047fff
    ctx->pc = 0x18c4f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32767 << 16));
    // 0x18c4f8: 0x3484ffff
    ctx->pc = 0x18c4f8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x18c4fc: 0x3c028000
    ctx->pc = 0x18c4fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x18c500: 0x10000011
    ctx->pc = 0x18C500u;
    {
        const bool branch_taken_0x18c500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C504u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x18c500) {
            ctx->pc = 0x18C548u;
            goto label_18c548;
        }
    }
    ctx->pc = 0x18C508u;
label_18c508:
    // 0x18c508: 0xc052e16
    ctx->pc = 0x18C508u;
    SET_GPR_U32(ctx, 31, 0x18C510u);
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C510u; }
        else if (ctx->pc != 0x18C510u) { ctx->pc = 0x18C510u; }
    }
    if (ctx->pc != 0x18C510u) { return; }
    ctx->pc = 0x18C510u;
    // 0x18c510: 0x40802d
    ctx->pc = 0x18c510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c514: 0xc052e16
    ctx->pc = 0x18C514u;
    SET_GPR_U32(ctx, 31, 0x18C51Cu);
    ctx->pc = 0x18C518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C51Cu; }
        else if (ctx->pc != 0x18C51Cu) { ctx->pc = 0x18C51Cu; }
    }
    if (ctx->pc != 0x18C51Cu) { return; }
    ctx->pc = 0x18C51Cu;
    // 0x18c51c: 0x200202d
    ctx->pc = 0x18c51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c520: 0xc052cb8
    ctx->pc = 0x18C520u;
    SET_GPR_U32(ctx, 31, 0x18C528u);
    ctx->pc = 0x18C524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C528u; }
        else if (ctx->pc != 0x18C528u) { ctx->pc = 0x18C528u; }
    }
    if (ctx->pc != 0x18C528u) { return; }
    ctx->pc = 0x18C528u;
    // 0x18c528: 0x40802d
    ctx->pc = 0x18c528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c52c: 0xc052e16
    ctx->pc = 0x18C52Cu;
    SET_GPR_U32(ctx, 31, 0x18C534u);
    ctx->pc = 0x18C530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C534u; }
        else if (ctx->pc != 0x18C534u) { ctx->pc = 0x18C534u; }
    }
    if (ctx->pc != 0x18C534u) { return; }
    ctx->pc = 0x18C534u;
    // 0x18c534: 0x200202d
    ctx->pc = 0x18c534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c538: 0xc052d62
    ctx->pc = 0x18C538u;
    SET_GPR_U32(ctx, 31, 0x18C540u);
    ctx->pc = 0x18C53Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C540u; }
        else if (ctx->pc != 0x18C540u) { ctx->pc = 0x18C540u; }
    }
    if (ctx->pc != 0x18C540u) { return; }
    ctx->pc = 0x18C540u;
    // 0x18c540: 0xc052e44
    ctx->pc = 0x18C540u;
    SET_GPR_U32(ctx, 31, 0x18C548u);
    ctx->pc = 0x18C544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C548u; }
        else if (ctx->pc != 0x18C548u) { ctx->pc = 0x18C548u; }
    }
    if (ctx->pc != 0x18C548u) { return; }
    ctx->pc = 0x18C548u;
label_18c548:
    // 0x18c548: 0xdfbf0030
    ctx->pc = 0x18c548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c54c: 0xdfb20020
    ctx->pc = 0x18c54cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c550: 0xdfb10010
    ctx->pc = 0x18c550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c554: 0xdfb00000
    ctx->pc = 0x18c554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c558: 0x3e00008
    ctx->pc = 0x18C558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C55Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C508u: goto label_18c508;
            case 0x18C548u: goto label_18c548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C560u;
}

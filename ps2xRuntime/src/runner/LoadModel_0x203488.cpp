#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadModel
// Address: 0x203488 - 0x203548
void LoadModel_0x203488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203488u;

    // 0x203488: 0x27bdffa0
    ctx->pc = 0x203488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20348c: 0xffbf0050
    ctx->pc = 0x20348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x203490: 0xffb40040
    ctx->pc = 0x203490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x203494: 0xffb30030
    ctx->pc = 0x203494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x203498: 0xffb20020
    ctx->pc = 0x203498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20349c: 0xffb10010
    ctx->pc = 0x20349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2034a0: 0xffb00000
    ctx->pc = 0x2034a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2034a4: 0x80802d
    ctx->pc = 0x2034a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034a8: 0xa0882d
    ctx->pc = 0x2034a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034ac: 0xe0102d
    ctx->pc = 0x2034acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034b0: 0x4410003
    ctx->pc = 0x2034B0u;
    {
        const bool branch_taken_0x2034b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2034B4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2034b0) {
            ctx->pc = 0x2034C0u;
            goto label_2034c0;
        }
    }
    ctx->pc = 0x2034B8u;
    // 0x2034b8: 0xc0b1dd0
    ctx->pc = 0x2034B8u;
    SET_GPR_U32(ctx, 31, 0x2034C0u);
    ctx->pc = 0x2C7740u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_LoadModel_0x2c7740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034C0u; }
    }
    if (ctx->pc != 0x2034C0u) { return; }
    ctx->pc = 0x2034C0u;
label_2034c0:
    // 0x2034c0: 0x12200018
    ctx->pc = 0x2034C0u;
    {
        const bool branch_taken_0x2034c0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2034C4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2034c0) {
            ctx->pc = 0x203524u;
            goto label_203524;
        }
    }
    ctx->pc = 0x2034C8u;
    // 0x2034c8: 0x200202d
    ctx->pc = 0x2034c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034cc: 0x3c13003a
    ctx->pc = 0x2034ccu;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2034d0: 0xc0b4eca
    ctx->pc = 0x2034D0u;
    SET_GPR_U32(ctx, 31, 0x2034D8u);
    ctx->pc = 0x2034D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 18656));
    ctx->pc = 0x2D3B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileExists_0x2d3b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034D8u; }
    }
    if (ctx->pc != 0x2034D8u) { return; }
    ctx->pc = 0x2034D8u;
    // 0x2034d8: 0x1040000a
    ctx->pc = 0x2034D8u;
    {
        const bool branch_taken_0x2034d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2034DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2034d8) {
            ctx->pc = 0x203504u;
            goto label_203504;
        }
    }
    ctx->pc = 0x2034E0u;
    // 0x2034e0: 0xc0b4e96
    ctx->pc = 0x2034E0u;
    SET_GPR_U32(ctx, 31, 0x2034E8u);
    ctx->pc = 0x2034E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 18656));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034E8u; }
    }
    if (ctx->pc != 0x2034E8u) { return; }
    ctx->pc = 0x2034E8u;
    // 0x2034e8: 0xae220000
    ctx->pc = 0x2034e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2034ec: 0x40202d
    ctx->pc = 0x2034ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034f0: 0x240282d
    ctx->pc = 0x2034f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034f4: 0xc084784
    ctx->pc = 0x2034F4u;
    SET_GPR_U32(ctx, 31, 0x2034FCu);
    ctx->pc = 0x2034F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x211E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupAtreeList_0x211e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034FCu; }
    }
    if (ctx->pc != 0x2034FCu) { return; }
    ctx->pc = 0x2034FCu;
    // 0x2034fc: 0x10000003
    ctx->pc = 0x2034FCu;
    {
        const bool branch_taken_0x2034fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203500u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x2034fc) {
            ctx->pc = 0x20350Cu;
            goto label_20350c;
        }
    }
    ctx->pc = 0x203504u;
label_203504:
    // 0x203504: 0xae200000
    ctx->pc = 0x203504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x203508: 0x8e240000
    ctx->pc = 0x203508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20350c:
    // 0x20350c: 0x10800006
    ctx->pc = 0x20350Cu;
    {
        const bool branch_taken_0x20350c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x203510u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20350c) {
            ctx->pc = 0x203528u;
            goto label_203528;
        }
    }
    ctx->pc = 0x203514u;
    // 0x203514: 0x12800005
    ctx->pc = 0x203514u;
    {
        const bool branch_taken_0x203514 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x203518u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x203514) {
            ctx->pc = 0x20352Cu;
            goto label_20352c;
        }
    }
    ctx->pc = 0x20351Cu;
    // 0x20351c: 0xc084c42
    ctx->pc = 0x20351Cu;
    SET_GPR_U32(ctx, 31, 0x203524u);
    ctx->pc = 0x203520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203524u; }
    }
    if (ctx->pc != 0x203524u) { return; }
    ctx->pc = 0x203524u;
label_203524:
    // 0x203524: 0x240102d
    ctx->pc = 0x203524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203528:
    // 0x203528: 0xdfbf0050
    ctx->pc = 0x203528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20352c:
    // 0x20352c: 0xdfb40040
    ctx->pc = 0x20352cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203530: 0xdfb30030
    ctx->pc = 0x203530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203534: 0xdfb20020
    ctx->pc = 0x203534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203538: 0xdfb10010
    ctx->pc = 0x203538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20353c: 0xdfb00000
    ctx->pc = 0x20353cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203540: 0x3e00008
    ctx->pc = 0x203540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203544u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2034C0u: goto label_2034c0;
            case 0x203504u: goto label_203504;
            case 0x20350Cu: goto label_20350c;
            case 0x203524u: goto label_203524;
            case 0x203528u: goto label_203528;
            case 0x20352Cu: goto label_20352c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203548u;
}

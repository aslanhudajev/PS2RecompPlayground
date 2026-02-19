#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadEnemy
// Address: 0x2382f0 - 0x2383c4
void LoadEnemy_0x2382f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2382f0u;

    // 0x2382f0: 0x27bdff80
    ctx->pc = 0x2382f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2382f4: 0xffbf0070
    ctx->pc = 0x2382f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2382f8: 0xffb20060
    ctx->pc = 0x2382f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2382fc: 0xffb10050
    ctx->pc = 0x2382fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x238300: 0xffb00040
    ctx->pc = 0x238300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x238304: 0xa0902d
    ctx->pc = 0x238304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238308: 0x3c02003c
    ctx->pc = 0x238308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23830c: 0x8c431bb0
    ctx->pc = 0x23830cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7088)));
    // 0x238310: 0x24650001
    ctx->pc = 0x238310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x238314: 0xac451bb0
    ctx->pc = 0x238314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7088), GPR_U32(ctx, 5));
    // 0x238318: 0x28a20009
    ctx->pc = 0x238318u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 9));
    // 0x23831c: 0x14400005
    ctx->pc = 0x23831Cu;
    {
        const bool branch_taken_0x23831c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x238320u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23831c) {
            ctx->pc = 0x238334u;
            goto label_238334;
        }
    }
    ctx->pc = 0x238324u;
    // 0x238324: 0x3c04003a
    ctx->pc = 0x238324u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x238328: 0x24847d70
    ctx->pc = 0x238328u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32112));
    // 0x23832c: 0xc0b4976
    ctx->pc = 0x23832Cu;
    SET_GPR_U32(ctx, 31, 0x238334u);
    ctx->pc = 0x238330u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238334u; }
    }
    if (ctx->pc != 0x238334u) { return; }
    ctx->pc = 0x238334u;
label_238334:
    // 0x238334: 0x3c03003c
    ctx->pc = 0x238334u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x238338: 0x24631b90
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x23833c: 0x3c02003c
    ctx->pc = 0x23833cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x238340: 0x8c421bb0
    ctx->pc = 0x238340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7088)));
    // 0x238344: 0x2442ffff
    ctx->pc = 0x238344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x238348: 0x21080
    ctx->pc = 0x238348u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23834c: 0x431021
    ctx->pc = 0x23834cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238350: 0xac510000
    ctx->pc = 0x238350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x238354: 0x3a0202d
    ctx->pc = 0x238354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238358: 0x220282d
    ctx->pc = 0x238358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23835c: 0xc08e064
    ctx->pc = 0x23835Cu;
    SET_GPR_U32(ctx, 31, 0x238364u);
    ctx->pc = 0x238360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238190u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEnemyDir_0x238190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238364u; }
    }
    if (ctx->pc != 0x238364u) { return; }
    ctx->pc = 0x238364u;
    // 0x238364: 0x118080
    ctx->pc = 0x238364u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    // 0x238368: 0x3c050033
    ctx->pc = 0x238368u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x23836c: 0x24a53c08
    ctx->pc = 0x23836cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15368));
    // 0x238370: 0x3a0202d
    ctx->pc = 0x238370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238374: 0x2052821
    ctx->pc = 0x238374u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x238378: 0x302d
    ctx->pc = 0x238378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23837c: 0xc080d22
    ctx->pc = 0x23837Cu;
    SET_GPR_U32(ctx, 31, 0x238384u);
    ctx->pc = 0x238380u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238384u; }
    }
    if (ctx->pc != 0x238384u) { return; }
    ctx->pc = 0x238384u;
    // 0x238384: 0x3c030033
    ctx->pc = 0x238384u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x238388: 0x24633cc0
    ctx->pc = 0x238388u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15552));
    // 0x23838c: 0x2031821
    ctx->pc = 0x23838cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x238390: 0xac620000
    ctx->pc = 0x238390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x238394: 0x3c020033
    ctx->pc = 0x238394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238398: 0x24423d78
    ctx->pc = 0x238398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15736));
    // 0x23839c: 0x2028021
    ctx->pc = 0x23839cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2383a0: 0xae120000
    ctx->pc = 0x2383a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2383a4: 0xc0a3d76
    ctx->pc = 0x2383A4u;
    SET_GPR_U32(ctx, 31, 0x2383ACu);
    ctx->pc = 0x2383A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28F5D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEnemyMissiles_0x28f5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2383ACu; }
    }
    if (ctx->pc != 0x2383ACu) { return; }
    ctx->pc = 0x2383ACu;
    // 0x2383ac: 0xdfbf0070
    ctx->pc = 0x2383acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2383b0: 0xdfb20060
    ctx->pc = 0x2383b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2383b4: 0xdfb10050
    ctx->pc = 0x2383b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2383b8: 0xdfb00040
    ctx->pc = 0x2383b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2383bc: 0x3e00008
    ctx->pc = 0x2383BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2383C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238334u: goto label_238334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2383C4u;
}

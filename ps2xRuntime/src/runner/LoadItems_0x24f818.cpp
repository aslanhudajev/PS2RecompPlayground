#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadItems
// Address: 0x24f818 - 0x24f8f0
void LoadItems_0x24f818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24f818u;

    // 0x24f818: 0x27bdffd0
    ctx->pc = 0x24f818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f81c: 0xffbf0020
    ctx->pc = 0x24f81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24f820: 0xffb10010
    ctx->pc = 0x24f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24f824: 0xffb00000
    ctx->pc = 0x24f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24f828: 0x3c110034
    ctx->pc = 0x24f828u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x24f82c: 0x8e22cdb0
    ctx->pc = 0x24f82cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294954416)));
    // 0x24f830: 0x4430014
    ctx->pc = 0x24F830u;
    {
        const bool branch_taken_0x24f830 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24f830) {
            ctx->pc = 0x24F834u;
            SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
            ctx->pc = 0x24F884u;
            goto label_24f884;
        }
    }
    ctx->pc = 0x24F838u;
    // 0x24f838: 0x3c020036
    ctx->pc = 0x24f838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x24f83c: 0x8c42d934
    ctx->pc = 0x24f83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x24f840: 0x4430010
    ctx->pc = 0x24F840u;
    {
        const bool branch_taken_0x24f840 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24f840) {
            ctx->pc = 0x24F844u;
            SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
            ctx->pc = 0x24F884u;
            goto label_24f884;
        }
    }
    ctx->pc = 0x24F848u;
    // 0x24f848: 0xc09899a
    ctx->pc = 0x24F848u;
    SET_GPR_U32(ctx, 31, 0x24F850u);
    ctx->pc = 0x24F84Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x262668u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldItemDesc_0x262668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F850u; }
    }
    if (ctx->pc != 0x24F850u) { return; }
    ctx->pc = 0x24F850u;
    // 0x24f850: 0x26042ab0
    ctx->pc = 0x24f850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10928));
    // 0x24f854: 0x3c05003b
    ctx->pc = 0x24f854u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x24f858: 0x24a58470
    ctx->pc = 0x24f858u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935664));
    // 0x24f85c: 0xc0b6252
    ctx->pc = 0x24F85Cu;
    SET_GPR_U32(ctx, 31, 0x24F864u);
    ctx->pc = 0x24F860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F864u; }
    }
    if (ctx->pc != 0x24F864u) { return; }
    ctx->pc = 0x24F864u;
    // 0x24f864: 0x26042ab0
    ctx->pc = 0x24f864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10928));
    // 0x24f868: 0x3c050034
    ctx->pc = 0x24f868u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x24f86c: 0x24a5cda0
    ctx->pc = 0x24f86cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954400));
    // 0x24f870: 0x302d
    ctx->pc = 0x24f870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f874: 0xc080d22
    ctx->pc = 0x24F874u;
    SET_GPR_U32(ctx, 31, 0x24F87Cu);
    ctx->pc = 0x24F878u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F87Cu; }
    }
    if (ctx->pc != 0x24F87Cu) { return; }
    ctx->pc = 0x24F87Cu;
    // 0x24f87c: 0xae22cdb0
    ctx->pc = 0x24f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294954416), GPR_U32(ctx, 2));
    // 0x24f880: 0x3c110034
    ctx->pc = 0x24f880u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
label_24f884:
    // 0x24f884: 0x8e22cdb4
    ctx->pc = 0x24f884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
    // 0x24f888: 0x4410015
    ctx->pc = 0x24F888u;
    {
        const bool branch_taken_0x24f888 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x24F88Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x24f888) {
            ctx->pc = 0x24F8E0u;
            goto label_24f8e0;
        }
    }
    ctx->pc = 0x24F890u;
    // 0x24f890: 0xc09899e
    ctx->pc = 0x24F890u;
    SET_GPR_U32(ctx, 31, 0x24F898u);
    ctx->pc = 0x24F894u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x262678u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelItemDesc_0x262678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F898u; }
    }
    if (ctx->pc != 0x24F898u) { return; }
    ctx->pc = 0x24F898u;
    // 0x24f898: 0x26042ab0
    ctx->pc = 0x24f898u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10928));
    // 0x24f89c: 0x3c05003b
    ctx->pc = 0x24f89cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x24f8a0: 0x24a58480
    ctx->pc = 0x24f8a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935680));
    // 0x24f8a4: 0xc0b6252
    ctx->pc = 0x24F8A4u;
    SET_GPR_U32(ctx, 31, 0x24F8ACu);
    ctx->pc = 0x24F8A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F8ACu; }
    }
    if (ctx->pc != 0x24F8ACu) { return; }
    ctx->pc = 0x24F8ACu;
    // 0x24f8ac: 0x26042ab0
    ctx->pc = 0x24f8acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10928));
    // 0x24f8b0: 0x3c05003b
    ctx->pc = 0x24f8b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x24f8b4: 0xc0b4eca
    ctx->pc = 0x24F8B4u;
    SET_GPR_U32(ctx, 31, 0x24F8BCu);
    ctx->pc = 0x24F8B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935696));
    ctx->pc = 0x2D3B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileExists_0x2d3b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F8BCu; }
    }
    if (ctx->pc != 0x24F8BCu) { return; }
    ctx->pc = 0x24F8BCu;
    // 0x24f8bc: 0x10400007
    ctx->pc = 0x24F8BCu;
    {
        const bool branch_taken_0x24f8bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F8C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10928));
        if (branch_taken_0x24f8bc) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F8C4u;
    // 0x24f8c4: 0x3c050034
    ctx->pc = 0x24f8c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x24f8c8: 0x24a5cda4
    ctx->pc = 0x24f8c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954404));
    // 0x24f8cc: 0x302d
    ctx->pc = 0x24f8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8d0: 0xc080d22
    ctx->pc = 0x24F8D0u;
    SET_GPR_U32(ctx, 31, 0x24F8D8u);
    ctx->pc = 0x24F8D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F8D8u; }
    }
    if (ctx->pc != 0x24F8D8u) { return; }
    ctx->pc = 0x24F8D8u;
    // 0x24f8d8: 0xae22cdb4
    ctx->pc = 0x24f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294954420), GPR_U32(ctx, 2));
label_24f8dc:
    // 0x24f8dc: 0xdfbf0020
    ctx->pc = 0x24f8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24f8e0:
    // 0x24f8e0: 0xdfb10010
    ctx->pc = 0x24f8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f8e4: 0xdfb00000
    ctx->pc = 0x24f8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f8e8: 0x3e00008
    ctx->pc = 0x24F8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F8ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F884u: goto label_24f884;
            case 0x24F8DCu: goto label_24f8dc;
            case 0x24F8E0u: goto label_24f8e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24F8F0u;
}

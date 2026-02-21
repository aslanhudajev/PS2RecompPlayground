#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFXSub
// Address: 0x27d7e8 - 0x27d8b0
void StartFXSub_0x27d7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27d7e8u;

    // 0x27d7e8: 0x27bdffb0
    ctx->pc = 0x27d7e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27d7ec: 0xffbf0040
    ctx->pc = 0x27d7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27d7f0: 0xffb30030
    ctx->pc = 0x27d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27d7f4: 0xffb20020
    ctx->pc = 0x27d7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27d7f8: 0xffb10010
    ctx->pc = 0x27d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d7fc: 0xffb00000
    ctx->pc = 0x27d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d800: 0x80902d
    ctx->pc = 0x27d800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d804: 0x2e4200da
    ctx->pc = 0x27d804u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 218));
    // 0x27d808: 0x14400007
    ctx->pc = 0x27D808u;
    {
        const bool branch_taken_0x27d808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27D80Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27d808) {
            ctx->pc = 0x27D828u;
            goto label_27d828;
        }
    }
    ctx->pc = 0x27D810u;
    // 0x27d810: 0x3c04003b
    ctx->pc = 0x27d810u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27d814: 0x2484bf00
    ctx->pc = 0x27d814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950656));
    // 0x27d818: 0xc0b492e
    ctx->pc = 0x27D818u;
    SET_GPR_U32(ctx, 31, 0x27D820u);
    ctx->pc = 0x27D81Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D820u; }
    }
    if (ctx->pc != 0x27D820u) { return; }
    ctx->pc = 0x27D820u;
    // 0x27d820: 0x1000001c
    ctx->pc = 0x27D820u;
    {
        const bool branch_taken_0x27d820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D824u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27d820) {
            ctx->pc = 0x27D894u;
            goto label_27d894;
        }
    }
    ctx->pc = 0x27D828u;
label_27d828:
    // 0x27d828: 0x2403000c
    ctx->pc = 0x27d828u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27d82c: 0x2431818
    ctx->pc = 0x27d82cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27d830: 0x3c020034
    ctx->pc = 0x27d830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27d834: 0x24424ab8
    ctx->pc = 0x27d834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19128));
    // 0x27d838: 0x628821
    ctx->pc = 0x27d838u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d83c: 0x8e240000
    ctx->pc = 0x27d83cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d840: 0x10800014
    ctx->pc = 0x27D840u;
    {
        const bool branch_taken_0x27d840 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D844u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27d840) {
            ctx->pc = 0x27D894u;
            goto label_27d894;
        }
    }
    ctx->pc = 0x27D848u;
    // 0x27d848: 0xc09f580
    ctx->pc = 0x27D848u;
    SET_GPR_U32(ctx, 31, 0x27D850u);
    ctx->pc = 0x27D600u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXTree_0x27d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D850u; }
    }
    if (ctx->pc != 0x27D850u) { return; }
    ctx->pc = 0x27D850u;
    // 0x27d850: 0x40982d
    ctx->pc = 0x27d850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d854: 0x660000e
    ctx->pc = 0x27D854u;
    {
        const bool branch_taken_0x27d854 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x27D858u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27d854) {
            ctx->pc = 0x27D890u;
            goto label_27d890;
        }
    }
    ctx->pc = 0x27D85Cu;
    // 0x27d85c: 0x24420eb0
    ctx->pc = 0x27d85cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27d860: 0x241000f0
    ctx->pc = 0x27d860u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27d864: 0x2708018
    ctx->pc = 0x27d864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27d868: 0x2028021
    ctx->pc = 0x27d868u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27d86c: 0x8e040014
    ctx->pc = 0x27d86cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27d870: 0x8e250004
    ctx->pc = 0x27d870u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27d874: 0xc0b4096
    ctx->pc = 0x27D874u;
    SET_GPR_U32(ctx, 31, 0x27D87Cu);
    ctx->pc = 0x27D878u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0258u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetZMod_0x2d0258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D87Cu; }
    }
    if (ctx->pc != 0x27D87Cu) { return; }
    ctx->pc = 0x27D87Cu;
    // 0x27d87c: 0x8e040014
    ctx->pc = 0x27d87cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27d880: 0x8e250008
    ctx->pc = 0x27d880u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27d884: 0xc0b40c0
    ctx->pc = 0x27D884u;
    SET_GPR_U32(ctx, 31, 0x27D88Cu);
    ctx->pc = 0x27D888u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D88Cu; }
    }
    if (ctx->pc != 0x27D88Cu) { return; }
    ctx->pc = 0x27D88Cu;
    // 0x27d88c: 0xae120060
    ctx->pc = 0x27d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 18));
label_27d890:
    // 0x27d890: 0x260102d
    ctx->pc = 0x27d890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d894:
    // 0x27d894: 0xdfbf0040
    ctx->pc = 0x27d894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d898: 0xdfb30030
    ctx->pc = 0x27d898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d89c: 0xdfb20020
    ctx->pc = 0x27d89cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d8a0: 0xdfb10010
    ctx->pc = 0x27d8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d8a4: 0xdfb00000
    ctx->pc = 0x27d8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d8a8: 0x3e00008
    ctx->pc = 0x27D8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D8ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D828u: goto label_27d828;
            case 0x27D890u: goto label_27d890;
            case 0x27D894u: goto label_27d894;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D8B0u;
}

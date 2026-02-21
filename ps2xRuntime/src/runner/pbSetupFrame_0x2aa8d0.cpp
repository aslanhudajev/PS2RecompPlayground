#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetupFrame
// Address: 0x2aa8d0 - 0x2aa9dc
void pbSetupFrame_0x2aa8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aa8d0u;

    // 0x2aa8d0: 0x27bdffe0
    ctx->pc = 0x2aa8d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa8d4: 0xffbf0010
    ctx->pc = 0x2aa8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa8d8: 0xffb00000
    ctx->pc = 0x2aa8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aa8dc: 0x3c020036
    ctx->pc = 0x2aa8dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aa8e0: 0x8c50dee0
    ctx->pc = 0x2aa8e0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aa8e4: 0x3c030037
    ctx->pc = 0x2aa8e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2aa8e8: 0x3c020036
    ctx->pc = 0x2aa8e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aa8ec: 0x8c42df90
    ctx->pc = 0x2aa8ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958992)));
    // 0x2aa8f0: 0xac622658
    ctx->pc = 0x2aa8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9816), GPR_U32(ctx, 2));
    // 0x2aa8f4: 0x8e030010
    ctx->pc = 0x2aa8f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2aa8f8: 0x8c620010
    ctx->pc = 0x2aa8f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2aa8fc: 0x54400007
    ctx->pc = 0x2AA8FCu;
    {
        const bool branch_taken_0x2aa8fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2aa8fc) {
            ctx->pc = 0x2AA900u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2AA91Cu;
            goto label_2aa91c;
        }
    }
    ctx->pc = 0x2AA904u;
    // 0x2aa904: 0x8c620014
    ctx->pc = 0x2aa904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2aa908: 0x54400008
    ctx->pc = 0x2AA908u;
    {
        const bool branch_taken_0x2aa908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2aa908) {
            ctx->pc = 0x2AA90Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2AA92Cu;
            goto label_2aa92c;
        }
    }
    ctx->pc = 0x2AA910u;
    // 0x2aa910: 0x8c620018
    ctx->pc = 0x2aa910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2aa914: 0xac620014
    ctx->pc = 0x2aa914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2aa918: 0x8e020010
    ctx->pc = 0x2aa918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2aa91c:
    // 0x2aa91c: 0x8c420014
    ctx->pc = 0x2aa91cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2aa920: 0x5040001d
    ctx->pc = 0x2AA920u;
    {
        const bool branch_taken_0x2aa920 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2aa920) {
            ctx->pc = 0x2AA924u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2AA998u;
            goto label_2aa998;
        }
    }
    ctx->pc = 0x2AA928u;
    // 0x2aa928: 0x8e020010
    ctx->pc = 0x2aa928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2aa92c:
    // 0x2aa92c: 0x8c440014
    ctx->pc = 0x2aa92cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2aa930: 0xc0aa6de
    ctx->pc = 0x2AA930u;
    SET_GPR_U32(ctx, 31, 0x2AA938u);
    ctx->pc = 0x2AA934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2A9B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbFrameMode_0x2a9b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA938u; }
    }
    if (ctx->pc != 0x2AA938u) { return; }
    ctx->pc = 0x2AA938u;
    // 0x2aa938: 0x8e020010
    ctx->pc = 0x2aa938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2aa93c: 0xac400014
    ctx->pc = 0x2aa93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2aa940: 0x3c020037
    ctx->pc = 0x2aa940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aa944: 0x8c428330
    ctx->pc = 0x2aa944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2aa948: 0x8c420010
    ctx->pc = 0x2aa948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2aa94c: 0x10400004
    ctx->pc = 0x2AA94Cu;
    {
        const bool branch_taken_0x2aa94c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA950u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x2aa94c) {
            ctx->pc = 0x2AA960u;
            goto label_2aa960;
        }
    }
    ctx->pc = 0x2AA954u;
    // 0x2aa954: 0xc0aa440
    ctx->pc = 0x2AA954u;
    SET_GPR_U32(ctx, 31, 0x2AA95Cu);
    ctx->pc = 0x2A9100u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbFrameDebugGrab_0x2a9100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA95Cu; }
    }
    if (ctx->pc != 0x2AA95Cu) { return; }
    ctx->pc = 0x2AA95Cu;
    // 0x2aa95c: 0x3c030001
    ctx->pc = 0x2aa95cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_2aa960:
    // 0x2aa960: 0x42000039
    ctx->pc = 0x2aa960u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x2aa964: 0x40f
    ctx->pc = 0x2aa964u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2aa968: 0x40026000
    ctx->pc = 0x2aa968u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2aa96c: 0x431024
    ctx->pc = 0x2aa96cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aa970: 0x0
    ctx->pc = 0x2aa970u;
    // NOP
    // 0x2aa974: 0x1440fffa
    ctx->pc = 0x2AA974u;
    {
        const bool branch_taken_0x2aa974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2aa974) {
            ctx->pc = 0x2AA960u;
            goto label_2aa960;
        }
    }
    ctx->pc = 0x2AA97Cu;
    // 0x2aa97c: 0xc0aab98
    ctx->pc = 0x2AA97Cu;
    SET_GPR_U32(ctx, 31, 0x2AA984u);
    ctx->pc = 0x2AA980u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbSwapBuffer_0x2aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA984u; }
    }
    if (ctx->pc != 0x2AA984u) { return; }
    ctx->pc = 0x2AA984u;
    // 0x2aa984: 0xc0aab98
    ctx->pc = 0x2AA984u;
    SET_GPR_U32(ctx, 31, 0x2AA98Cu);
    ctx->pc = 0x2AA988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbSwapBuffer_0x2aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA98Cu; }
    }
    if (ctx->pc != 0x2AA98Cu) { return; }
    ctx->pc = 0x2AA98Cu;
    // 0x2aa98c: 0x42000038
    ctx->pc = 0x2aa98cu;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x2aa990: 0x10000008
    ctx->pc = 0x2AA990u;
    {
        const bool branch_taken_0x2aa990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA994u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2aa990) {
            ctx->pc = 0x2AA9B4u;
            goto label_2aa9b4;
        }
    }
    ctx->pc = 0x2AA998u;
label_2aa998:
    // 0x2aa998: 0x8c620048
    ctx->pc = 0x2aa998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2aa99c: 0x10400005
    ctx->pc = 0x2AA99Cu;
    {
        const bool branch_taken_0x2aa99c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA9A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2aa99c) {
            ctx->pc = 0x2AA9B4u;
            goto label_2aa9b4;
        }
    }
    ctx->pc = 0x2AA9A4u;
    // 0x2aa9a4: 0x8c640010
    ctx->pc = 0x2aa9a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2aa9a8: 0xc0aa6de
    ctx->pc = 0x2AA9A8u;
    SET_GPR_U32(ctx, 31, 0x2AA9B0u);
    ctx->pc = 0x2AA9ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A9B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbFrameMode_0x2a9b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA9B0u; }
    }
    if (ctx->pc != 0x2AA9B0u) { return; }
    ctx->pc = 0x2AA9B0u;
    // 0x2aa9b0: 0x3c020037
    ctx->pc = 0x2aa9b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2aa9b4:
    // 0x2aa9b4: 0x8c428330
    ctx->pc = 0x2aa9b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2aa9b8: 0x8c420000
    ctx->pc = 0x2aa9b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa9bc: 0x10400004
    ctx->pc = 0x2AA9BCu;
    {
        const bool branch_taken_0x2aa9bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AA9C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2aa9bc) {
            ctx->pc = 0x2AA9D0u;
            goto label_2aa9d0;
        }
    }
    ctx->pc = 0x2AA9C4u;
    // 0x2aa9c4: 0xdfb00000
    ctx->pc = 0x2aa9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa9c8: 0x80aa4de
    ctx->pc = 0x2AA9C8u;
    ctx->pc = 0x2AA9CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2A9378u;
    pbFrameDebugSet_0x2a9378(rdram, ctx, runtime); return;
    ctx->pc = 0x2AA9D0u;
label_2aa9d0:
    // 0x2aa9d0: 0xdfb00000
    ctx->pc = 0x2aa9d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa9d4: 0x3e00008
    ctx->pc = 0x2AA9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA9D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AA91Cu: goto label_2aa91c;
            case 0x2AA92Cu: goto label_2aa92c;
            case 0x2AA960u: goto label_2aa960;
            case 0x2AA998u: goto label_2aa998;
            case 0x2AA9B4u: goto label_2aa9b4;
            case 0x2AA9D0u: goto label_2aa9d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AA9DCu;
}

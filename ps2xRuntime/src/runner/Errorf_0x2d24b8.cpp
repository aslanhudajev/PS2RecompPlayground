#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Errorf
// Address: 0x2d24b8 - 0x2d2554
void Errorf_0x2d24b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d24b8u;

    // 0x2d24b8: 0x27bdff50
    ctx->pc = 0x2d24b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d24bc: 0xffbf0020
    ctx->pc = 0x2d24bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d24c0: 0xffb10010
    ctx->pc = 0x2d24c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d24c4: 0xffb00000
    ctx->pc = 0x2d24c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d24c8: 0xffa50078
    ctx->pc = 0x2d24c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
    // 0x2d24cc: 0xffa60080
    ctx->pc = 0x2d24ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x2d24d0: 0xffa70088
    ctx->pc = 0x2d24d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x2d24d4: 0xffa80090
    ctx->pc = 0x2d24d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x2d24d8: 0xffa90098
    ctx->pc = 0x2d24d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x2d24dc: 0xffaa00a0
    ctx->pc = 0x2d24dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x2d24e0: 0xffab00a8
    ctx->pc = 0x2d24e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x2d24e4: 0xc0b48a8
    ctx->pc = 0x2D24E4u;
    SET_GPR_U32(ctx, 31, 0x2D24ECu);
    ctx->pc = 0x2D24E8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D22A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        running_standalone_0x2d22a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D24ECu; }
    }
    if (ctx->pc != 0x2D24ECu) { return; }
    ctx->pc = 0x2D24ECu;
    // 0x2d24ec: 0x14400015
    ctx->pc = 0x2D24ECu;
    {
        const bool branch_taken_0x2d24ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D24F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2d24ec) {
            ctx->pc = 0x2D2544u;
            goto label_2d2544;
        }
    }
    ctx->pc = 0x2D24F4u;
    // 0x2d24f4: 0xc0b48c6
    ctx->pc = 0x2D24F4u;
    SET_GPR_U32(ctx, 31, 0x2D24FCu);
    ctx->pc = 0x2D2318u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextErrorStr_0x2d2318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D24FCu; }
    }
    if (ctx->pc != 0x2D24FCu) { return; }
    ctx->pc = 0x2D24FCu;
    // 0x2d24fc: 0x40802d
    ctx->pc = 0x2d24fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2500: 0x200202d
    ctx->pc = 0x2d2500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2504: 0x220282d
    ctx->pc = 0x2d2504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2508: 0xc0b5d5e
    ctx->pc = 0x2D2508u;
    SET_GPR_U32(ctx, 31, 0x2D2510u);
    ctx->pc = 0x2D250Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2510u; }
    }
    if (ctx->pc != 0x2D2510u) { return; }
    ctx->pc = 0x2D2510u;
    // 0x2d2510: 0xa200003f
    ctx->pc = 0x2d2510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2514: 0x3c04003b
    ctx->pc = 0x2d2514u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d2518: 0xc0b4a34
    ctx->pc = 0x2D2518u;
    SET_GPR_U32(ctx, 31, 0x2D2520u);
    ctx->pc = 0x2D251Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30664));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2520u; }
    }
    if (ctx->pc != 0x2D2520u) { return; }
    ctx->pc = 0x2D2520u;
    // 0x2d2520: 0xc0b4a34
    ctx->pc = 0x2D2520u;
    SET_GPR_U32(ctx, 31, 0x2D2528u);
    ctx->pc = 0x2D2524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2528u; }
    }
    if (ctx->pc != 0x2D2528u) { return; }
    ctx->pc = 0x2D2528u;
    // 0x2d2528: 0x3c04003b
    ctx->pc = 0x2d2528u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d252c: 0xc0b4a34
    ctx->pc = 0x2D252Cu;
    SET_GPR_U32(ctx, 31, 0x2D2534u);
    ctx->pc = 0x2D2530u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30680));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2534u; }
    }
    if (ctx->pc != 0x2D2534u) { return; }
    ctx->pc = 0x2D2534u;
    // 0x2d2534: 0x3c03003a
    ctx->pc = 0x2d2534u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d2538: 0x24020001
    ctx->pc = 0x2d2538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d253c: 0xac621d00
    ctx->pc = 0x2d253cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7424), GPR_U32(ctx, 2));
    // 0x2d2540: 0xdfbf0020
    ctx->pc = 0x2d2540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d2544:
    // 0x2d2544: 0xdfb10010
    ctx->pc = 0x2d2544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2548: 0xdfb00000
    ctx->pc = 0x2d2548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d254c: 0x3e00008
    ctx->pc = 0x2D254Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2550u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2544u: goto label_2d2544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2554u;
}

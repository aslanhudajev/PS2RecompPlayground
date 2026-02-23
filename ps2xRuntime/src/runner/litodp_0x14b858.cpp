#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: litodp - long/double int to double (Newlib soft-float)
// Address: 0x14b858 - 0x14b910
void litodp_0x14b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("litodp");

    ctx->pc = 0x14b858u;

    // 0x14b858: 0x27bdffd0
    ctx->pc = 0x14b858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14b85c: 0x24020003
    ctx->pc = 0x14b85cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x14b860: 0x41fc2
    ctx->pc = 0x14b860u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x14b864: 0xffbf0020
    ctx->pc = 0x14b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14b868: 0xafa20000
    ctx->pc = 0x14b868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x14b86c: 0x14800004
    ctx->pc = 0x14B86Cu;
    {
        const bool branch_taken_0x14b86c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B870u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x14b86c) {
            ctx->pc = 0x14B880u;
            goto label_14b880;
        }
    }
    ctx->pc = 0x14B874u;
    // 0x14b874: 0x24020002
    ctx->pc = 0x14b874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b878: 0x10000020
    ctx->pc = 0x14B878u;
    {
        const bool branch_taken_0x14b878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B87Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x14b878) {
            ctx->pc = 0x14B8FCu;
            goto label_14b8fc;
        }
    }
    ctx->pc = 0x14B880u;
label_14b880:
    // 0x14b880: 0x2402003c
    ctx->pc = 0x14b880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x14b884: 0x1060000a
    ctx->pc = 0x14B884u;
    {
        const bool branch_taken_0x14b884 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B888u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x14b884) {
            ctx->pc = 0x14B8B0u;
            goto label_14b8b0;
        }
    }
    ctx->pc = 0x14B88Cu;
    // 0x14b88c: 0x3c028000
    ctx->pc = 0x14b88cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x14b890: 0x14820005
    ctx->pc = 0x14B890u;
    {
        const bool branch_taken_0x14b890 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x14B894u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x14b890) {
            ctx->pc = 0x14B8A8u;
            goto label_14b8a8;
        }
    }
    ctx->pc = 0x14B898u;
    // 0x14b898: 0x3402c1e0
    ctx->pc = 0x14b898u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 49632));
    // 0x14b89c: 0x2143c
    ctx->pc = 0x14b89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14b8a0: 0x10000019
    ctx->pc = 0x14B8A0u;
    {
        const bool branch_taken_0x14b8a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B8A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x14b8a0) {
            ctx->pc = 0x14B908u;
            goto label_14b908;
        }
    }
    ctx->pc = 0x14B8A8u;
label_14b8a8:
    // 0x14b8a8: 0x10000002
    ctx->pc = 0x14B8A8u;
    {
        const bool branch_taken_0x14b8a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B8ACu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x14b8a8) {
            ctx->pc = 0x14B8B4u;
            goto label_14b8b4;
        }
    }
    ctx->pc = 0x14B8B0u;
label_14b8b0:
    // 0x14b8b0: 0xffa40010
    ctx->pc = 0x14b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_14b8b4:
    // 0x14b8b4: 0xdfa50010
    ctx->pc = 0x14b8b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b8b8: 0x2402ffff
    ctx->pc = 0x14b8b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b8bc: 0x2113a
    ctx->pc = 0x14b8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x14b8c0: 0x45102b
    ctx->pc = 0x14b8c0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14b8c4: 0x1440000d
    ctx->pc = 0x14B8C4u;
    {
        const bool branch_taken_0x14b8c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B8C8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x14b8c4) {
            ctx->pc = 0x14B8FCu;
            goto label_14b8fc;
        }
    }
    ctx->pc = 0x14B8CCu;
    // 0x14b8cc: 0x2406ffff
    ctx->pc = 0x14b8ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b8d0: 0x6313a
    ctx->pc = 0x14b8d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x14b8d4: 0x0
    ctx->pc = 0x14b8d4u;
    // NOP
label_14b8d8:
    // Fix: Original MIPS has no guard; when mantissa r5==0, r3=r5<<1 stays 0 and loop never
    // exits. Per Ghidra decomp, zero input exits at 14b86c; this path can still be reached
    // (e.g. from float conversion). Set type=2 (zero) and skip to pack_d.
    if (GPR_U64(ctx, 5) == 0) {
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), 2);
        ctx->pc = 0x14B8FCu;
        goto label_14b8fc;
    }
    // 0x14b8d8: 0x51878
    ctx->pc = 0x14b8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x14b8dc: 0x2484ffff
    ctx->pc = 0x14b8dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14b8e0: 0x60282d
    ctx->pc = 0x14b8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8e4: 0xc3102b
    ctx->pc = 0x14b8e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14b8e8: 0x0
    ctx->pc = 0x14b8e8u;
    // NOP
    // 0x14b8ec: 0x1040fffa
    ctx->pc = 0x14B8ECu;
    {
        const bool branch_taken_0x14b8ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14b8ec) {
            ctx->pc = 0x14B8D8u;
            goto label_14b8d8;
        }
    }
    ctx->pc = 0x14B8F4u;
    // 0x14b8f4: 0xafa40008
    ctx->pc = 0x14b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x14b8f8: 0xffa30010
    ctx->pc = 0x14b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_14b8fc:
    // 0x14b8fc: 0xc052b84
    ctx->pc = 0x14B8FCu;
    SET_GPR_U32(ctx, 31, 0x14B904u);
    ctx->pc = 0x14B900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x14ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B904u; }
        else if (ctx->pc != 0x14B904u) { ctx->pc = 0x14B904u; }
    }
    if (ctx->pc != 0x14B904u) { return; }
    ctx->pc = 0x14B904u;
    // 0x14b904: 0xdfbf0020
    ctx->pc = 0x14b904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14b908:
    // 0x14b908: 0x3e00008
    ctx->pc = 0x14B908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B90Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B880u: goto label_14b880;
            case 0x14B8A8u: goto label_14b8a8;
            case 0x14B8B0u: goto label_14b8b0;
            case 0x14B8B4u: goto label_14b8b4;
            case 0x14B8D8u: goto label_14b8d8;
            case 0x14B8FCu: goto label_14b8fc;
            case 0x14B908u: goto label_14b908;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B910u;
}

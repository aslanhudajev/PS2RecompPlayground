#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StringTextHeightSub
// Address: 0x202848 - 0x202984
void StringTextHeightSub_0x202848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202848u;

    // 0x202848: 0x27bdff90
    ctx->pc = 0x202848u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20284c: 0xffbf0060
    ctx->pc = 0x20284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x202850: 0xffb50050
    ctx->pc = 0x202850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x202854: 0xffb40040
    ctx->pc = 0x202854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x202858: 0xffb30030
    ctx->pc = 0x202858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20285c: 0xffb20020
    ctx->pc = 0x20285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x202860: 0xffb10010
    ctx->pc = 0x202860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x202864: 0xffb00000
    ctx->pc = 0x202864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202868: 0x80902d
    ctx->pc = 0x202868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20286c: 0xc0802d
    ctx->pc = 0x20286cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202870: 0xe0a02d
    ctx->pc = 0x202870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202874: 0x46006006
    ctx->pc = 0x202874u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x202878: 0x24040014
    ctx->pc = 0x202878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x20287c: 0xa42818
    ctx->pc = 0x20287cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202880: 0x8e420018
    ctx->pc = 0x202880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x202884: 0xa28821
    ctx->pc = 0x202884u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x202888: 0x8e220008
    ctx->pc = 0x202888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20288c: 0x8e43000c
    ctx->pc = 0x20288cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x202890: 0x441018
    ctx->pc = 0x202890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202894: 0x431021
    ctx->pc = 0x202894u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202898: 0x6810003
    ctx->pc = 0x202898u;
    {
        const bool branch_taken_0x202898 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x20289Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        if (branch_taken_0x202898) {
            ctx->pc = 0x2028A8u;
            goto label_2028a8;
        }
    }
    ctx->pc = 0x2028A0u;
    // 0x2028a0: 0x3c020031
    ctx->pc = 0x2028a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2028a4: 0x8c54f288
    ctx->pc = 0x2028a4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 4294963848)));
label_2028a8:
    // 0x2028a8: 0xc62c000c
    ctx->pc = 0x2028a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2028ac: 0xc080570
    ctx->pc = 0x2028ACu;
    SET_GPR_U32(ctx, 31, 0x2028B4u);
    ctx->pc = 0x2028B0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2028B4u; }
    }
    if (ctx->pc != 0x2028B4u) { return; }
    ctx->pc = 0x2028B4u;
    // 0x2028b4: 0x40a82d
    ctx->pc = 0x2028b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028b8: 0x6000013
    ctx->pc = 0x2028B8u;
    {
        const bool branch_taken_0x2028b8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2028BCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2028b8) {
            ctx->pc = 0x202908u;
            goto label_202908;
        }
    }
    ctx->pc = 0x2028C0u;
    // 0x2028c0: 0x8e220000
    ctx->pc = 0x2028c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2028c4: 0x202102a
    ctx->pc = 0x2028c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2028c8: 0x54400003
    ctx->pc = 0x2028C8u;
    {
        const bool branch_taken_0x2028c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2028c8) {
            ctx->pc = 0x2028CCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2028D8u;
            goto label_2028d8;
        }
    }
    ctx->pc = 0x2028D0u;
    // 0x2028d0: 0x10000023
    ctx->pc = 0x2028D0u;
    {
        const bool branch_taken_0x2028d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2028D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2028d0) {
            ctx->pc = 0x202960u;
            goto label_202960;
        }
    }
    ctx->pc = 0x2028D8u;
label_2028d8:
    // 0x2028d8: 0x2021021
    ctx->pc = 0x2028d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2028dc: 0x8e430014
    ctx->pc = 0x2028dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2028e0: 0x21080
    ctx->pc = 0x2028e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2028e4: 0x431021
    ctx->pc = 0x2028e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2028e8: 0x8c420000
    ctx->pc = 0x2028e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2028ec: 0x8e440010
    ctx->pc = 0x2028ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2028f0: 0xc080408
    ctx->pc = 0x2028F0u;
    SET_GPR_U32(ctx, 31, 0x2028F8u);
    ctx->pc = 0x2028F4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x201020u;
    {
        const uint32_t __entryPc = ctx->pc;
        TextMLines_0x201020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2028F8u; }
    }
    if (ctx->pc != 0x2028F8u) { return; }
    ctx->pc = 0x2028F8u;
    // 0x2028f8: 0x2b41821
    ctx->pc = 0x2028f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2028fc: 0x622018
    ctx->pc = 0x2028fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202900: 0x10000016
    ctx->pc = 0x202900u;
    {
        const bool branch_taken_0x202900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202904u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        if (branch_taken_0x202900) {
            ctx->pc = 0x20295Cu;
            goto label_20295c;
        }
    }
    ctx->pc = 0x202908u;
label_202908:
    // 0x202908: 0x8e220000
    ctx->pc = 0x202908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20290c: 0x18400013
    ctx->pc = 0x20290Cu;
    {
        const bool branch_taken_0x20290c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x202910u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20290c) {
            ctx->pc = 0x20295Cu;
            goto label_20295c;
        }
    }
    ctx->pc = 0x202914u;
    // 0x202914: 0x2b4a021
    ctx->pc = 0x202914u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x202918: 0x8e220004
    ctx->pc = 0x202918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20291c: 0x0
    ctx->pc = 0x20291cu;
    // NOP
label_202920:
    // 0x202920: 0x2021021
    ctx->pc = 0x202920u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x202924: 0x8e430014
    ctx->pc = 0x202924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x202928: 0x21080
    ctx->pc = 0x202928u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20292c: 0x431021
    ctx->pc = 0x20292cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202930: 0x8c420000
    ctx->pc = 0x202930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202934: 0x8e440010
    ctx->pc = 0x202934u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x202938: 0xc080408
    ctx->pc = 0x202938u;
    SET_GPR_U32(ctx, 31, 0x202940u);
    ctx->pc = 0x20293Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x201020u;
    {
        const uint32_t __entryPc = ctx->pc;
        TextMLines_0x201020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202940u; }
    }
    if (ctx->pc != 0x202940u) { return; }
    ctx->pc = 0x202940u;
    // 0x202940: 0x2821818
    ctx->pc = 0x202940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202944: 0x739821
    ctx->pc = 0x202944u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x202948: 0x26100001
    ctx->pc = 0x202948u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x20294c: 0x8e220000
    ctx->pc = 0x20294cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202950: 0x202102a
    ctx->pc = 0x202950u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x202954: 0x5440fff2
    ctx->pc = 0x202954u;
    {
        const bool branch_taken_0x202954 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x202954) {
            ctx->pc = 0x202958u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x202920u;
            goto label_202920;
        }
    }
    ctx->pc = 0x20295Cu;
label_20295c:
    // 0x20295c: 0x260102d
    ctx->pc = 0x20295cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_202960:
    // 0x202960: 0xdfbf0060
    ctx->pc = 0x202960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202964: 0xdfb50050
    ctx->pc = 0x202964u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202968: 0xdfb40040
    ctx->pc = 0x202968u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20296c: 0xdfb30030
    ctx->pc = 0x20296cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202970: 0xdfb20020
    ctx->pc = 0x202970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202974: 0xdfb10010
    ctx->pc = 0x202974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202978: 0xdfb00000
    ctx->pc = 0x202978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20297c: 0x3e00008
    ctx->pc = 0x20297Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202980u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2028A8u: goto label_2028a8;
            case 0x2028D8u: goto label_2028d8;
            case 0x202908u: goto label_202908;
            case 0x202920u: goto label_202920;
            case 0x20295Cu: goto label_20295c;
            case 0x202960u: goto label_202960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202984u;
}

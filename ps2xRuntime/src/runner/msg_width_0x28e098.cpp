#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: msg_width
// Address: 0x28e098 - 0x28e210
void msg_width_0x28e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28e098u;

    // 0x28e098: 0x27bdffc0
    ctx->pc = 0x28e098u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28e09c: 0xffbf0030
    ctx->pc = 0x28e09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28e0a0: 0xffb20020
    ctx->pc = 0x28e0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28e0a4: 0xffb10010
    ctx->pc = 0x28e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28e0a8: 0xffb00000
    ctx->pc = 0x28e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e0ac: 0xa0802d
    ctx->pc = 0x28e0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0b0: 0x2403001c
    ctx->pc = 0x28e0b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x28e0b4: 0x2031818
    ctx->pc = 0x28e0b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e0b8: 0x3c020035
    ctx->pc = 0x28e0b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e0bc: 0x2442c578
    ctx->pc = 0x28e0bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952312));
    // 0x28e0c0: 0x621821
    ctx->pc = 0x28e0c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e0c4: 0x8c640010
    ctx->pc = 0x28e0c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28e0c8: 0x3c013f80
    ctx->pc = 0x28e0c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e0cc: 0x44816000
    ctx->pc = 0x28e0ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e0d0: 0xc0809f2
    ctx->pc = 0x28E0D0u;
    SET_GPR_U32(ctx, 31, 0x28E0D8u);
    ctx->pc = 0x28E0D4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E0D8u; }
    }
    if (ctx->pc != 0x28E0D8u) { return; }
    ctx->pc = 0x28E0D8u;
    // 0x28e0d8: 0x40902d
    ctx->pc = 0x28e0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0dc: 0x24020032
    ctx->pc = 0x28e0dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
    // 0x28e0e0: 0x12020005
    ctx->pc = 0x28E0E0u;
    {
        const bool branch_taken_0x28e0e0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x28E0E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 89));
        if (branch_taken_0x28e0e0) {
            ctx->pc = 0x28E0F8u;
            goto label_28e0f8;
        }
    }
    ctx->pc = 0x28E0E8u;
    // 0x28e0e8: 0x12020003
    ctx->pc = 0x28E0E8u;
    {
        const bool branch_taken_0x28e0e8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x28E0ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 93));
        if (branch_taken_0x28e0e8) {
            ctx->pc = 0x28E0F8u;
            goto label_28e0f8;
        }
    }
    ctx->pc = 0x28E0F0u;
    // 0x28e0f0: 0x1602001b
    ctx->pc = 0x28E0F0u;
    {
        const bool branch_taken_0x28e0f0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x28E0F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
        if (branch_taken_0x28e0f0) {
            ctx->pc = 0x28E160u;
            goto label_28e160;
        }
    }
    ctx->pc = 0x28E0F8u;
label_28e0f8:
    // 0x28e0f8: 0x3c100035
    ctx->pc = 0x28e0f8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x28e0fc: 0x24040002
    ctx->pc = 0x28e0fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e100: 0x3c013f80
    ctx->pc = 0x28e100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e104: 0x44816000
    ctx->pc = 0x28e104u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e108: 0xc0809f2
    ctx->pc = 0x28E108u;
    SET_GPR_U32(ctx, 31, 0x28E110u);
    ctx->pc = 0x28E10Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294959512)));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E110u; }
    }
    if (ctx->pc != 0x28E110u) { return; }
    ctx->pc = 0x28E110u;
    // 0x28e110: 0x40882d
    ctx->pc = 0x28e110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e114: 0x3c040032
    ctx->pc = 0x28e114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x28e118: 0x24841bc0
    ctx->pc = 0x28e118u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x28e11c: 0x8e02e198
    ctx->pc = 0x28e11cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294959512)));
    // 0x28e120: 0x24032b00
    ctx->pc = 0x28e120u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28e124: 0x431018
    ctx->pc = 0x28e124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e128: 0x441021
    ctx->pc = 0x28e128u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28e12c: 0x24040003
    ctx->pc = 0x28e12cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x28e130: 0x3c013f80
    ctx->pc = 0x28e130u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e134: 0x44816000
    ctx->pc = 0x28e134u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e138: 0xc0809f2
    ctx->pc = 0x28E138u;
    SET_GPR_U32(ctx, 31, 0x28E140u);
    ctx->pc = 0x28E13Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E140u; }
    }
    if (ctx->pc != 0x28E140u) { return; }
    ctx->pc = 0x28E140u;
    // 0x28e140: 0x2228821
    ctx->pc = 0x28e140u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28e144: 0x2631000c
    ctx->pc = 0x28e144u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
    // 0x28e148: 0x3c020031
    ctx->pc = 0x28e148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28e14c: 0x8c42f2a4
    ctx->pc = 0x28e14cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963876)));
    // 0x28e150: 0x26230014
    ctx->pc = 0x28e150u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 20));
    // 0x28e154: 0x38420001
    ctx->pc = 0x28e154u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x28e158: 0x10000024
    ctx->pc = 0x28E158u;
    {
        const bool branch_taken_0x28e158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E15Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        if (branch_taken_0x28e158) {
            ctx->pc = 0x28E1ECu;
            goto label_28e1ec;
        }
    }
    ctx->pc = 0x28E160u;
label_28e160:
    // 0x28e160: 0x16020025
    ctx->pc = 0x28E160u;
    {
        const bool branch_taken_0x28e160 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x28E164u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e160) {
            ctx->pc = 0x28E1F8u;
            goto label_28e1f8;
        }
    }
    ctx->pc = 0x28E168u;
    // 0x28e168: 0x3c020031
    ctx->pc = 0x28e168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28e16c: 0x8c43f2a4
    ctx->pc = 0x28e16cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963876)));
    // 0x28e170: 0x24020001
    ctx->pc = 0x28e170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e174: 0x14620020
    ctx->pc = 0x28E174u;
    {
        const bool branch_taken_0x28e174 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28E178u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e174) {
            ctx->pc = 0x28E1F8u;
            goto label_28e1f8;
        }
    }
    ctx->pc = 0x28E17Cu;
    // 0x28e17c: 0x3c030032
    ctx->pc = 0x28e17cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x28e180: 0x24631bc0
    ctx->pc = 0x28e180u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x28e184: 0x3c020035
    ctx->pc = 0x28e184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e188: 0x8c45e198
    ctx->pc = 0x28e188u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294959512)));
    // 0x28e18c: 0x24022b00
    ctx->pc = 0x28e18cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28e190: 0xa21018
    ctx->pc = 0x28e190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e194: 0x431021
    ctx->pc = 0x28e194u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e198: 0x8c50000c
    ctx->pc = 0x28e198u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e19c: 0x3c013f80
    ctx->pc = 0x28e19cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e1a0: 0x44816000
    ctx->pc = 0x28e1a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e1a4: 0xc0809f2
    ctx->pc = 0x28E1A4u;
    SET_GPR_U32(ctx, 31, 0x28E1ACu);
    ctx->pc = 0x28E1A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1ACu; }
    }
    if (ctx->pc != 0x28E1ACu) { return; }
    ctx->pc = 0x28E1ACu;
    // 0x28e1ac: 0x40882d
    ctx->pc = 0x28e1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e1b0: 0x24040003
    ctx->pc = 0x28e1b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x28e1b4: 0x3c013f80
    ctx->pc = 0x28e1b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e1b8: 0x44816000
    ctx->pc = 0x28e1b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e1bc: 0xc0809f2
    ctx->pc = 0x28E1BCu;
    SET_GPR_U32(ctx, 31, 0x28E1C4u);
    ctx->pc = 0x28E1C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1C4u; }
    }
    if (ctx->pc != 0x28E1C4u) { return; }
    ctx->pc = 0x28E1C4u;
    // 0x28e1c4: 0x40802d
    ctx->pc = 0x28e1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e1c8: 0x24040018
    ctx->pc = 0x28e1c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e1cc: 0x3c013f80
    ctx->pc = 0x28e1ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e1d0: 0x44816000
    ctx->pc = 0x28e1d0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e1d4: 0xc0809f2
    ctx->pc = 0x28E1D4u;
    SET_GPR_U32(ctx, 31, 0x28E1DCu);
    ctx->pc = 0x28E1D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1DCu; }
    }
    if (ctx->pc != 0x28E1DCu) { return; }
    ctx->pc = 0x28E1DCu;
    // 0x28e1dc: 0x2610000a
    ctx->pc = 0x28e1dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 10));
    // 0x28e1e0: 0x2308821
    ctx->pc = 0x28e1e0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x28e1e4: 0x2442000a
    ctx->pc = 0x28e1e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10));
    // 0x28e1e8: 0x2228821
    ctx->pc = 0x28e1e8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28e1ec:
    // 0x28e1ec: 0x251102a
    ctx->pc = 0x28e1ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 17)));
    // 0x28e1f0: 0x222900b
    ctx->pc = 0x28e1f0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 17));
    // 0x28e1f4: 0x240102d
    ctx->pc = 0x28e1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28e1f8:
    // 0x28e1f8: 0xdfbf0030
    ctx->pc = 0x28e1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e1fc: 0xdfb20020
    ctx->pc = 0x28e1fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e200: 0xdfb10010
    ctx->pc = 0x28e200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e204: 0xdfb00000
    ctx->pc = 0x28e204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e208: 0x3e00008
    ctx->pc = 0x28E208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E20Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28E0F8u: goto label_28e0f8;
            case 0x28E160u: goto label_28e160;
            case 0x28E1ECu: goto label_28e1ec;
            case 0x28E1F8u: goto label_28e1f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28E210u;
}

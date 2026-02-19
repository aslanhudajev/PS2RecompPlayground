#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _motionVectors
// Address: 0x2f2078 - 0x2f21f4
void _motionVectors_0x2f2078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2078u;

    // 0x2f2078: 0x27bdff60
    ctx->pc = 0x2f2078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f207c: 0x24020001
    ctx->pc = 0x2f207cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2080: 0xffbe0080
    ctx->pc = 0x2f2080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2f2084: 0xffb70070
    ctx->pc = 0x2f2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f2088: 0xc0f02d
    ctx->pc = 0x2f2088u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f208c: 0xffb60060
    ctx->pc = 0x2f208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f2090: 0xffb50050
    ctx->pc = 0x2f2090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f2094: 0x80b02d
    ctx->pc = 0x2f2094u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2098: 0xffb40040
    ctx->pc = 0x2f2098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f209c: 0x160a82d
    ctx->pc = 0x2f209cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20a0: 0xffb30030
    ctx->pc = 0x2f20a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f20a4: 0xa0a02d
    ctx->pc = 0x2f20a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20a8: 0xffb20020
    ctx->pc = 0x2f20a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f20ac: 0x140982d
    ctx->pc = 0x2f20acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20b0: 0xffb00000
    ctx->pc = 0x2f20b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f20b4: 0xffbf0090
    ctx->pc = 0x2f20b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f20b8: 0xe0802d
    ctx->pc = 0x2f20b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20bc: 0xffb10010
    ctx->pc = 0x2f20bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f20c0: 0x8fb200a0
    ctx->pc = 0x2f20c0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f20c4: 0x1502000c
    ctx->pc = 0x2F20C4u;
    {
        const bool branch_taken_0x2f20c4 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F20C8u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 168)));
        if (branch_taken_0x2f20c4) {
            ctx->pc = 0x2F20F8u;
            goto label_2f20f8;
        }
    }
    ctx->pc = 0x2F20CCu;
    // 0x2f20cc: 0x55200030
    ctx->pc = 0x2F20CCu;
    {
        const bool branch_taken_0x2f20cc = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f20cc) {
            ctx->pc = 0x2F20D0u;
            SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
            ctx->pc = 0x2F2190u;
            goto label_2f2190;
        }
    }
    ctx->pc = 0x2F20D4u;
    // 0x2f20d4: 0x5640002e
    ctx->pc = 0x2F20D4u;
    {
        const bool branch_taken_0x2f20d4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f20d4) {
            ctx->pc = 0x2F20D8u;
            SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
            ctx->pc = 0x2F2190u;
            goto label_2f2190;
        }
    }
    ctx->pc = 0x2F20DCu;
    // 0x2f20dc: 0xc0bca32
    ctx->pc = 0x2F20DCu;
    SET_GPR_U32(ctx, 31, 0x2F20E4u);
    ctx->pc = 0x2F20E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20E4u; }
    }
    if (ctx->pc != 0x2F20E4u) { return; }
    ctx->pc = 0x2F20E4u;
    // 0x2f20e4: 0x101880
    ctx->pc = 0x2f20e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f20e8: 0x7e1821
    ctx->pc = 0x2f20e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2f20ec: 0xac620008
    ctx->pc = 0x2f20ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2f20f0: 0x10000026
    ctx->pc = 0x2F20F0u;
    {
        const bool branch_taken_0x2f20f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F20F4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2f20f0) {
            ctx->pc = 0x2F218Cu;
            goto label_2f218c;
        }
    }
    ctx->pc = 0x2F20F8u;
label_2f20f8:
    // 0x2f20f8: 0x24040001
    ctx->pc = 0x2f20f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f20fc: 0xc0bca32
    ctx->pc = 0x2F20FCu;
    SET_GPR_U32(ctx, 31, 0x2F2104u);
    ctx->pc = 0x2F2100u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 16), 3));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2104u; }
    }
    if (ctx->pc != 0x2F2104u) { return; }
    ctx->pc = 0x2F2104u;
    // 0x2f2104: 0x108080
    ctx->pc = 0x2f2104u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f2108: 0x2d12021
    ctx->pc = 0x2f2108u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2f210c: 0x21e8021
    ctx->pc = 0x2f210cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x2f2110: 0x280282d
    ctx->pc = 0x2f2110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2114: 0xae020000
    ctx->pc = 0x2f2114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2f2118: 0x260302d
    ctx->pc = 0x2f2118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f211c: 0x2a0382d
    ctx->pc = 0x2f211cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2120: 0x240402d
    ctx->pc = 0x2f2120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2124: 0x2e0482d
    ctx->pc = 0x2f2124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2128: 0xc0bc87e
    ctx->pc = 0x2F2128u;
    SET_GPR_U32(ctx, 31, 0x2F2130u);
    ctx->pc = 0x2F212Cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F21F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x2f21f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2130u; }
    }
    if (ctx->pc != 0x2F2130u) { return; }
    ctx->pc = 0x2F2130u;
    // 0x2f2130: 0xc0bca32
    ctx->pc = 0x2F2130u;
    SET_GPR_U32(ctx, 31, 0x2F2138u);
    ctx->pc = 0x2F2134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2138u; }
    }
    if (ctx->pc != 0x2F2138u) { return; }
    ctx->pc = 0x2F2138u;
    // 0x2f2138: 0x26310010
    ctx->pc = 0x2f2138u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x2f213c: 0xae020008
    ctx->pc = 0x2f213cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2f2140: 0x2d12021
    ctx->pc = 0x2f2140u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2f2144: 0x280282d
    ctx->pc = 0x2f2144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2148: 0x260302d
    ctx->pc = 0x2f2148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f214c: 0x2a0382d
    ctx->pc = 0x2f214cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2150: 0x240402d
    ctx->pc = 0x2f2150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2154: 0x2e0482d
    ctx->pc = 0x2f2154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2158: 0xdfbf0090
    ctx->pc = 0x2f2158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f215c: 0x502d
    ctx->pc = 0x2f215cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2160: 0xdfbe0080
    ctx->pc = 0x2f2160u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2164: 0xdfb70070
    ctx->pc = 0x2f2164u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2168: 0xdfb60060
    ctx->pc = 0x2f2168u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f216c: 0xdfb50050
    ctx->pc = 0x2f216cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2170: 0xdfb40040
    ctx->pc = 0x2f2170u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2174: 0xdfb30030
    ctx->pc = 0x2f2174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2178: 0xdfb20020
    ctx->pc = 0x2f2178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f217c: 0xdfb10010
    ctx->pc = 0x2f217cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2180: 0xdfb00000
    ctx->pc = 0x2f2180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2184: 0x80bc87e
    ctx->pc = 0x2F2184u;
    ctx->pc = 0x2F2188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2F21F8u;
    _motionVector_0x2f21f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2F218Cu;
label_2f218c:
    // 0x2f218c: 0x1080c0
    ctx->pc = 0x2f218cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
label_2f2190:
    // 0x2f2190: 0x280282d
    ctx->pc = 0x2f2190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2194: 0x2d08021
    ctx->pc = 0x2f2194u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2f2198: 0x260302d
    ctx->pc = 0x2f2198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f219c: 0x2a0382d
    ctx->pc = 0x2f219cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21a0: 0x240402d
    ctx->pc = 0x2f21a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21a4: 0x2e0482d
    ctx->pc = 0x2f21a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21a8: 0x200202d
    ctx->pc = 0x2f21a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21ac: 0xc0bc87e
    ctx->pc = 0x2F21ACu;
    SET_GPR_U32(ctx, 31, 0x2F21B4u);
    ctx->pc = 0x2F21B0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F21F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x2f21f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F21B4u; }
    }
    if (ctx->pc != 0x2F21B4u) { return; }
    ctx->pc = 0x2F21B4u;
    // 0x2f21b4: 0x8e020000
    ctx->pc = 0x2f21b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f21b8: 0x8e030004
    ctx->pc = 0x2f21b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f21bc: 0xae020010
    ctx->pc = 0x2f21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2f21c0: 0xae030014
    ctx->pc = 0x2f21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2f21c4: 0xdfbf0090
    ctx->pc = 0x2f21c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f21c8: 0xdfbe0080
    ctx->pc = 0x2f21c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f21cc: 0xdfb70070
    ctx->pc = 0x2f21ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f21d0: 0xdfb60060
    ctx->pc = 0x2f21d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f21d4: 0xdfb50050
    ctx->pc = 0x2f21d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f21d8: 0xdfb40040
    ctx->pc = 0x2f21d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f21dc: 0xdfb30030
    ctx->pc = 0x2f21dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f21e0: 0xdfb20020
    ctx->pc = 0x2f21e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f21e4: 0xdfb10010
    ctx->pc = 0x2f21e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f21e8: 0xdfb00000
    ctx->pc = 0x2f21e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f21ec: 0x3e00008
    ctx->pc = 0x2F21ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F21F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F20F8u: goto label_2f20f8;
            case 0x2F218Cu: goto label_2f218c;
            case 0x2F2190u: goto label_2f2190;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F21F4u;
}

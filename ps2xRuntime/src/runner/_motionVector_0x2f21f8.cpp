#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _motionVector
// Address: 0x2f21f8 - 0x2f2334
void _motionVector_0x2f21f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f21f8u;

    // 0x2f21f8: 0x27bdff70
    ctx->pc = 0x2f21f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f21fc: 0xffb20020
    ctx->pc = 0x2f21fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2200: 0xffb70070
    ctx->pc = 0x2f2200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f2204: 0x80902d
    ctx->pc = 0x2f2204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2208: 0xffb60060
    ctx->pc = 0x2f2208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f220c: 0xa0b82d
    ctx->pc = 0x2f220cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2210: 0xffb50050
    ctx->pc = 0x2f2210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f2214: 0x100b02d
    ctx->pc = 0x2f2214u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2218: 0xffb40040
    ctx->pc = 0x2f2218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f221c: 0x120a82d
    ctx->pc = 0x2f221cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2220: 0xffb30030
    ctx->pc = 0x2f2220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f2224: 0x140a02d
    ctx->pc = 0x2f2224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2228: 0xffb00000
    ctx->pc = 0x2f2228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f222c: 0xe0982d
    ctx->pc = 0x2f222cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2230: 0xffb10010
    ctx->pc = 0x2f2230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f2234: 0xc0802d
    ctx->pc = 0x2f2234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2238: 0xffbf0080
    ctx->pc = 0x2f2238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f223c: 0xc0bc930
    ctx->pc = 0x2F223Cu;
    SET_GPR_U32(ctx, 31, 0x2F2244u);
    ctx->pc = 0x2F2240u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2F24C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x2f24c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2244u; }
    }
    if (ctx->pc != 0x2F2244u) { return; }
    ctx->pc = 0x2F2244u;
    // 0x2f2244: 0x12000007
    ctx->pc = 0x2F2244u;
    {
        const bool branch_taken_0x2f2244 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2248u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f2244) {
            ctx->pc = 0x2F2264u;
            goto label_2f2264;
        }
    }
    ctx->pc = 0x2F224Cu;
    // 0x2f224c: 0x12200006
    ctx->pc = 0x2F224Cu;
    {
        const bool branch_taken_0x2f224c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2250u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f224c) {
            ctx->pc = 0x2F2268u;
            goto label_2f2268;
        }
    }
    ctx->pc = 0x2F2254u;
    // 0x2f2254: 0xc0bca32
    ctx->pc = 0x2F2254u;
    SET_GPR_U32(ctx, 31, 0x2F225Cu);
    ctx->pc = 0x2F2258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F225Cu; }
    }
    if (ctx->pc != 0x2F225Cu) { return; }
    ctx->pc = 0x2F225Cu;
    // 0x2f225c: 0x10000002
    ctx->pc = 0x2F225Cu;
    {
        const bool branch_taken_0x2f225c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2260u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f225c) {
            ctx->pc = 0x2F2268u;
            goto label_2f2268;
        }
    }
    ctx->pc = 0x2F2264u;
label_2f2264:
    // 0x2f2264: 0x382d
    ctx->pc = 0x2f2264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2268:
    // 0x2f2268: 0x200282d
    ctx->pc = 0x2f2268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f226c: 0x220302d
    ctx->pc = 0x2f226cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2270: 0x240202d
    ctx->pc = 0x2f2270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2274: 0xc0bc7fc
    ctx->pc = 0x2F2274u;
    SET_GPR_U32(ctx, 31, 0x2F227Cu);
    ctx->pc = 0x2F2278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F1FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_motion_vector_0x2f1ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F227Cu; }
    }
    if (ctx->pc != 0x2F227Cu) { return; }
    ctx->pc = 0x2F227Cu;
    // 0x2f227c: 0x12c00004
    ctx->pc = 0x2F227Cu;
    {
        const bool branch_taken_0x2f227c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f227c) {
            ctx->pc = 0x2F2290u;
            goto label_2f2290;
        }
    }
    ctx->pc = 0x2F2284u;
    // 0x2f2284: 0xc0bc4bc
    ctx->pc = 0x2F2284u;
    SET_GPR_U32(ctx, 31, 0x2F228Cu);
    ctx->pc = 0x2F12F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x2f12f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F228Cu; }
    }
    if (ctx->pc != 0x2F228Cu) { return; }
    ctx->pc = 0x2F228Cu;
    // 0x2f228c: 0xaee20000
    ctx->pc = 0x2f228cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_2f2290:
    // 0x2f2290: 0xc0bc930
    ctx->pc = 0x2F2290u;
    SET_GPR_U32(ctx, 31, 0x2F2298u);
    ctx->pc = 0x2F2294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2F24C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x2f24c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2298u; }
    }
    if (ctx->pc != 0x2F2298u) { return; }
    ctx->pc = 0x2F2298u;
    // 0x2f2298: 0x12600007
    ctx->pc = 0x2F2298u;
    {
        const bool branch_taken_0x2f2298 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F229Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f2298) {
            ctx->pc = 0x2F22B8u;
            goto label_2f22b8;
        }
    }
    ctx->pc = 0x2F22A0u;
    // 0x2f22a0: 0x12200006
    ctx->pc = 0x2F22A0u;
    {
        const bool branch_taken_0x2f22a0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F22A4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f22a0) {
            ctx->pc = 0x2F22BCu;
            goto label_2f22bc;
        }
    }
    ctx->pc = 0x2F22A8u;
    // 0x2f22a8: 0xc0bca32
    ctx->pc = 0x2F22A8u;
    SET_GPR_U32(ctx, 31, 0x2F22B0u);
    ctx->pc = 0x2F22ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F22B0u; }
    }
    if (ctx->pc != 0x2F22B0u) { return; }
    ctx->pc = 0x2F22B0u;
    // 0x2f22b0: 0x10000002
    ctx->pc = 0x2F22B0u;
    {
        const bool branch_taken_0x2f22b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F22B4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f22b0) {
            ctx->pc = 0x2F22BCu;
            goto label_2f22bc;
        }
    }
    ctx->pc = 0x2F22B8u;
label_2f22b8:
    // 0x2f22b8: 0x382d
    ctx->pc = 0x2f22b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f22bc:
    // 0x2f22bc: 0x12a00004
    ctx->pc = 0x2F22BCu;
    {
        const bool branch_taken_0x2f22bc = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F22C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f22bc) {
            ctx->pc = 0x2F22D0u;
            goto label_2f22d0;
        }
    }
    ctx->pc = 0x2F22C4u;
    // 0x2f22c4: 0x8e420004
    ctx->pc = 0x2f22c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f22c8: 0x21043
    ctx->pc = 0x2f22c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f22cc: 0xae420004
    ctx->pc = 0x2f22ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2f22d0:
    // 0x2f22d0: 0x220302d
    ctx->pc = 0x2f22d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22d4: 0x280402d
    ctx->pc = 0x2f22d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22d8: 0xc0bc7fc
    ctx->pc = 0x2F22D8u;
    SET_GPR_U32(ctx, 31, 0x2F22E0u);
    ctx->pc = 0x2F22DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x2F1FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_motion_vector_0x2f1ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F22E0u; }
    }
    if (ctx->pc != 0x2F22E0u) { return; }
    ctx->pc = 0x2F22E0u;
    // 0x2f22e0: 0x12a00004
    ctx->pc = 0x2F22E0u;
    {
        const bool branch_taken_0x2f22e0 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f22e0) {
            ctx->pc = 0x2F22F4u;
            goto label_2f22f4;
        }
    }
    ctx->pc = 0x2F22E8u;
    // 0x2f22e8: 0x8e420004
    ctx->pc = 0x2f22e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f22ec: 0x21040
    ctx->pc = 0x2f22ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f22f0: 0xae420004
    ctx->pc = 0x2f22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2f22f4:
    // 0x2f22f4: 0x12c00005
    ctx->pc = 0x2F22F4u;
    {
        const bool branch_taken_0x2f22f4 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F22F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2f22f4) {
            ctx->pc = 0x2F230Cu;
            goto label_2f230c;
        }
    }
    ctx->pc = 0x2F22FCu;
    // 0x2f22fc: 0xc0bc4bc
    ctx->pc = 0x2F22FCu;
    SET_GPR_U32(ctx, 31, 0x2F2304u);
    ctx->pc = 0x2F12F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x2f12f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2304u; }
    }
    if (ctx->pc != 0x2F2304u) { return; }
    ctx->pc = 0x2F2304u;
    // 0x2f2304: 0xaee20004
    ctx->pc = 0x2f2304u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x2f2308: 0xdfbf0080
    ctx->pc = 0x2f2308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2f230c:
    // 0x2f230c: 0xdfb70070
    ctx->pc = 0x2f230cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2310: 0xdfb60060
    ctx->pc = 0x2f2310u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2314: 0xdfb50050
    ctx->pc = 0x2f2314u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2318: 0xdfb40040
    ctx->pc = 0x2f2318u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f231c: 0xdfb30030
    ctx->pc = 0x2f231cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2320: 0xdfb20020
    ctx->pc = 0x2f2320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2324: 0xdfb10010
    ctx->pc = 0x2f2324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2328: 0xdfb00000
    ctx->pc = 0x2f2328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f232c: 0x3e00008
    ctx->pc = 0x2F232Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2330u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2264u: goto label_2f2264;
            case 0x2F2268u: goto label_2f2268;
            case 0x2F2290u: goto label_2f2290;
            case 0x2F22B8u: goto label_2f22b8;
            case 0x2F22BCu: goto label_2f22bc;
            case 0x2F22D0u: goto label_2f22d0;
            case 0x2F22F4u: goto label_2f22f4;
            case 0x2F230Cu: goto label_2f230c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2334u;
}

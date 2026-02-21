#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: print_n_of_m
// Address: 0x2292c0 - 0x22941c
void print_n_of_m_0x2292c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2292c0u;

    // 0x2292c0: 0x27bdff30
    ctx->pc = 0x2292c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2292c4: 0xffbf00b0
    ctx->pc = 0x2292c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2292c8: 0xffb600a0
    ctx->pc = 0x2292c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2292cc: 0xffb50090
    ctx->pc = 0x2292ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2292d0: 0xffb40080
    ctx->pc = 0x2292d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2292d4: 0xffb30070
    ctx->pc = 0x2292d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2292d8: 0xffb20060
    ctx->pc = 0x2292d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2292dc: 0xffb10050
    ctx->pc = 0x2292dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2292e0: 0xffb00040
    ctx->pc = 0x2292e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2292e4: 0xe7b400c0
    ctx->pc = 0x2292e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2292e8: 0xa0802d
    ctx->pc = 0x2292e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292ec: 0xc0982d
    ctx->pc = 0x2292ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292f0: 0x6000004
    ctx->pc = 0x2292F0u;
    {
        const bool branch_taken_0x2292f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2292F4u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2292f0) {
            ctx->pc = 0x229304u;
            goto label_229304;
        }
    }
    ctx->pc = 0x2292F8u;
    // 0x2292f8: 0x270102a
    ctx->pc = 0x2292f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 16)));
    // 0x2292fc: 0x10400003
    ctx->pc = 0x2292FCu;
    {
        const bool branch_taken_0x2292fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x229300u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x2292fc) {
            ctx->pc = 0x22930Cu;
            goto label_22930c;
        }
    }
    ctx->pc = 0x229304u;
label_229304:
    // 0x229304: 0x260802d
    ctx->pc = 0x229304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229308: 0x3c030032
    ctx->pc = 0x229308u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_22930c:
    // 0x22930c: 0x24630b00
    ctx->pc = 0x22930cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2816));
    // 0x229310: 0x24020024
    ctx->pc = 0x229310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x229314: 0x821018
    ctx->pc = 0x229314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229318: 0x622021
    ctx->pc = 0x229318u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22931c: 0x8c840004
    ctx->pc = 0x22931cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x229320: 0xe4a821
    ctx->pc = 0x229320u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x229324: 0x622021
    ctx->pc = 0x229324u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229328: 0x8c940008
    ctx->pc = 0x229328u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22932c: 0x8c910014
    ctx->pc = 0x22932cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x229330: 0x8c920018
    ctx->pc = 0x229330u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x229334: 0x80182d
    ctx->pc = 0x229334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229338: 0xc4740010
    ctx->pc = 0x229338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22933c: 0xc0be862
    ctx->pc = 0x22933Cu;
    SET_GPR_U32(ctx, 31, 0x229344u);
    ctx->pc = 0x229340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229344u; }
    }
    if (ctx->pc != 0x229344u) { return; }
    ctx->pc = 0x229344u;
    // 0x229344: 0x40202d
    ctx->pc = 0x229344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229348: 0xc0be4ba
    ctx->pc = 0x229348u;
    SET_GPR_U32(ctx, 31, 0x229350u);
    ctx->pc = 0x22934Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229350u; }
    }
    if (ctx->pc != 0x229350u) { return; }
    ctx->pc = 0x229350u;
    // 0x229350: 0x18400027
    ctx->pc = 0x229350u;
    {
        const bool branch_taken_0x229350 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x229354u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x229350) {
            ctx->pc = 0x2293F0u;
            goto label_2293f0;
        }
    }
    ctx->pc = 0x229358u;
    // 0x229358: 0x3c05003a
    ctx->pc = 0x229358u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22935c: 0x24a56de8
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28136));
    // 0x229360: 0xc0b6252
    ctx->pc = 0x229360u;
    SET_GPR_U32(ctx, 31, 0x229368u);
    ctx->pc = 0x229364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229368u; }
    }
    if (ctx->pc != 0x229368u) { return; }
    ctx->pc = 0x229368u;
    // 0x229368: 0x3c100032
    ctx->pc = 0x229368u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x22936c: 0x3a0202d
    ctx->pc = 0x22936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229370: 0x8e05103c
    ctx->pc = 0x229370u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4156)));
    // 0x229374: 0xc080552
    ctx->pc = 0x229374u;
    SET_GPR_U32(ctx, 31, 0x22937Cu);
    ctx->pc = 0x229378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22937Cu; }
    }
    if (ctx->pc != 0x22937Cu) { return; }
    ctx->pc = 0x22937Cu;
    // 0x22937c: 0x2b18821
    ctx->pc = 0x22937cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x229380: 0x2929021
    ctx->pc = 0x229380u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x229384: 0x2222023
    ctx->pc = 0x229384u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x229388: 0x240282d
    ctx->pc = 0x229388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22938c: 0x8e06103c
    ctx->pc = 0x22938cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4156)));
    // 0x229390: 0x3c0700ff
    ctx->pc = 0x229390u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x229394: 0x34e7ffff
    ctx->pc = 0x229394u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x229398: 0x4600a306
    ctx->pc = 0x229398u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22939c: 0xc080510
    ctx->pc = 0x22939Cu;
    SET_GPR_U32(ctx, 31, 0x2293A4u);
    ctx->pc = 0x2293A0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293A4u; }
    }
    if (ctx->pc != 0x2293A4u) { return; }
    ctx->pc = 0x2293A4u;
    // 0x2293a4: 0x40202d
    ctx->pc = 0x2293a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293a8: 0xc0b16c6
    ctx->pc = 0x2293A8u;
    SET_GPR_U32(ctx, 31, 0x2293B0u);
    ctx->pc = 0x2293ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontMsgSetAlpha_0x2c5b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293B0u; }
    }
    if (ctx->pc != 0x2293B0u) { return; }
    ctx->pc = 0x2293B0u;
    // 0x2293b0: 0x3a0202d
    ctx->pc = 0x2293b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293b4: 0x3c05003a
    ctx->pc = 0x2293b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2293b8: 0x24a56fe8
    ctx->pc = 0x2293b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28648));
    // 0x2293bc: 0xc0b6252
    ctx->pc = 0x2293BCu;
    SET_GPR_U32(ctx, 31, 0x2293C4u);
    ctx->pc = 0x2293C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293C4u; }
    }
    if (ctx->pc != 0x2293C4u) { return; }
    ctx->pc = 0x2293C4u;
    // 0x2293c4: 0x220202d
    ctx->pc = 0x2293c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293c8: 0x240282d
    ctx->pc = 0x2293c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293cc: 0x8e06103c
    ctx->pc = 0x2293ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4156)));
    // 0x2293d0: 0x3c0700ff
    ctx->pc = 0x2293d0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2293d4: 0x34e7ffff
    ctx->pc = 0x2293d4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2293d8: 0x4600a306
    ctx->pc = 0x2293d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2293dc: 0xc080510
    ctx->pc = 0x2293DCu;
    SET_GPR_U32(ctx, 31, 0x2293E4u);
    ctx->pc = 0x2293E0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293E4u; }
    }
    if (ctx->pc != 0x2293E4u) { return; }
    ctx->pc = 0x2293E4u;
    // 0x2293e4: 0x40202d
    ctx->pc = 0x2293e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293e8: 0xc0b16c6
    ctx->pc = 0x2293E8u;
    SET_GPR_U32(ctx, 31, 0x2293F0u);
    ctx->pc = 0x2293ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontMsgSetAlpha_0x2c5b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293F0u; }
    }
    if (ctx->pc != 0x2293F0u) { return; }
    ctx->pc = 0x2293F0u;
label_2293f0:
    // 0x2293f0: 0xdfbf00b0
    ctx->pc = 0x2293f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2293f4: 0xdfb600a0
    ctx->pc = 0x2293f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2293f8: 0xdfb50090
    ctx->pc = 0x2293f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2293fc: 0xdfb40080
    ctx->pc = 0x2293fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229400: 0xdfb30070
    ctx->pc = 0x229400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229404: 0xdfb20060
    ctx->pc = 0x229404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229408: 0xdfb10050
    ctx->pc = 0x229408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22940c: 0xdfb00040
    ctx->pc = 0x22940cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229410: 0xc7b400c0
    ctx->pc = 0x229410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229414: 0x3e00008
    ctx->pc = 0x229414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229304u: goto label_229304;
            case 0x22930Cu: goto label_22930c;
            case 0x2293F0u: goto label_2293f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22941Cu;
}

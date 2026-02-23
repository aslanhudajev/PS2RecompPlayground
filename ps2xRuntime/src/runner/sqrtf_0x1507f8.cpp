#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sqrtf
// Address: 0x1507f8 - 0x15090c
void sqrtf_0x1507f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sqrtf");


    ctx->pc = 0x1507f8u;

    // 0x1507f8: 0x27bdff90
    ctx->pc = 0x1507f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1507fc: 0xe7b40060
    ctx->pc = 0x1507fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x150800: 0x46006506
    ctx->pc = 0x150800u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x150804: 0xffb10040
    ctx->pc = 0x150804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x150808: 0xffb00030
    ctx->pc = 0x150808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x15080c: 0xe7b50068
    ctx->pc = 0x15080cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x150810: 0xffbf0050
    ctx->pc = 0x150810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x150814: 0xc053942
    ctx->pc = 0x150814u;
    SET_GPR_U32(ctx, 31, 0x15081Cu);
    ctx->pc = 0x150818u;
    SET_GPR_U32(ctx, 17, ((uint32_t)44 << 16));
    ctx->pc = 0x14E508u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_sqrtf_0x14e508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15081Cu; }
        else if (ctx->pc != 0x15081Cu) { ctx->pc = 0x15081Cu; }
    }
    if (ctx->pc != 0x15081Cu) { return; }
    ctx->pc = 0x15081Cu;
    // 0x15081c: 0x8e308238
    ctx->pc = 0x15081cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4294935096)));
    // 0x150820: 0x2402ffff
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150824: 0x12020031
    ctx->pc = 0x150824u;
    {
        const bool branch_taken_0x150824 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x150828u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x150824) {
            ctx->pc = 0x1508ECu;
            goto label_1508ec;
        }
    }
    ctx->pc = 0x15082Cu;
    // 0x15082c: 0xc05125a
    ctx->pc = 0x15082Cu;
    SET_GPR_U32(ctx, 31, 0x150834u);
    ctx->pc = 0x150830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x144968u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x144968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150834u; }
        else if (ctx->pc != 0x150834u) { ctx->pc = 0x150834u; }
    }
    if (ctx->pc != 0x150834u) { return; }
    ctx->pc = 0x150834u;
    // 0x150834: 0x1440002e
    ctx->pc = 0x150834u;
    {
        const bool branch_taken_0x150834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x150838u;
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x150834) {
            ctx->pc = 0x1508F0u;
            goto label_1508f0;
        }
    }
    ctx->pc = 0x15083Cu;
    // 0x15083c: 0x44800000
    ctx->pc = 0x15083cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x150840: 0x4600a034
    ctx->pc = 0x150840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150844: 0x0
    ctx->pc = 0x150844u;
    // NOP
    // 0x150848: 0x45000028
    ctx->pc = 0x150848u;
    {
        const bool branch_taken_0x150848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15084Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x150848) {
            ctx->pc = 0x1508ECu;
            goto label_1508ec;
        }
    }
    ctx->pc = 0x150850u;
    // 0x150850: 0x24030001
    ctx->pc = 0x150850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x150854: 0x24428250
    ctx->pc = 0x150854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935120));
    // 0x150858: 0xafa30000
    ctx->pc = 0x150858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x15085c: 0xafa20004
    ctx->pc = 0x15085cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x150860: 0x4600a306
    ctx->pc = 0x150860u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x150864: 0xc0531aa
    ctx->pc = 0x150864u;
    SET_GPR_U32(ctx, 31, 0x15086Cu);
    ctx->pc = 0x150868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15086Cu; }
        else if (ctx->pc != 0x15086Cu) { ctx->pc = 0x15086Cu; }
    }
    if (ctx->pc != 0x15086Cu) { return; }
    ctx->pc = 0x15086Cu;
    // 0x15086c: 0xffa20008
    ctx->pc = 0x15086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x150870: 0x16000004
    ctx->pc = 0x150870u;
    {
        const bool branch_taken_0x150870 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x150874u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x150870) {
            ctx->pc = 0x150884u;
            goto label_150884;
        }
    }
    ctx->pc = 0x150878u;
    // 0x150878: 0x102d
    ctx->pc = 0x150878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15087c: 0x10000004
    ctx->pc = 0x15087Cu;
    {
        const bool branch_taken_0x15087c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150880u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x15087c) {
            ctx->pc = 0x150890u;
            goto label_150890;
        }
    }
    ctx->pc = 0x150884u;
label_150884:
    // 0x150884: 0x3c02002c
    ctx->pc = 0x150884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x150888: 0xdc438258
    ctx->pc = 0x150888u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294935128)));
    // 0x15088c: 0xffa30018
    ctx->pc = 0x15088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_150890:
    // 0x150890: 0x8e238238
    ctx->pc = 0x150890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294935096)));
    // 0x150894: 0x24020002
    ctx->pc = 0x150894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x150898: 0x10620005
    ctx->pc = 0x150898u;
    {
        const bool branch_taken_0x150898 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x150898) {
            ctx->pc = 0x1508B0u;
            goto label_1508b0;
        }
    }
    ctx->pc = 0x1508A0u;
    // 0x1508a0: 0xc054126
    ctx->pc = 0x1508A0u;
    SET_GPR_U32(ctx, 31, 0x1508A8u);
    ctx->pc = 0x1508A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150498u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x150498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1508A8u; }
        else if (ctx->pc != 0x1508A8u) { ctx->pc = 0x1508A8u; }
    }
    if (ctx->pc != 0x1508A8u) { return; }
    ctx->pc = 0x1508A8u;
    // 0x1508a8: 0x14400006
    ctx->pc = 0x1508A8u;
    {
        const bool branch_taken_0x1508a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1508ACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1508a8) {
            ctx->pc = 0x1508C4u;
            goto label_1508c4;
        }
    }
    ctx->pc = 0x1508B0u;
label_1508b0:
    // 0x1508b0: 0xc05058a
    ctx->pc = 0x1508B0u;
    SET_GPR_U32(ctx, 31, 0x1508B8u);
    ctx->pc = 0x141628u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x141628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1508B8u; }
        else if (ctx->pc != 0x1508B8u) { ctx->pc = 0x1508B8u; }
    }
    if (ctx->pc != 0x1508B8u) { return; }
    ctx->pc = 0x1508B8u;
    // 0x1508b8: 0x24030021
    ctx->pc = 0x1508b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1508bc: 0xac430000
    ctx->pc = 0x1508bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1508c0: 0x8fa20020
    ctx->pc = 0x1508c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1508c4:
    // 0x1508c4: 0x10400005
    ctx->pc = 0x1508C4u;
    {
        const bool branch_taken_0x1508c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1508c4) {
            ctx->pc = 0x1508DCu;
            goto label_1508dc;
        }
    }
    ctx->pc = 0x1508CCu;
    // 0x1508cc: 0xc05058a
    ctx->pc = 0x1508CCu;
    SET_GPR_U32(ctx, 31, 0x1508D4u);
    ctx->pc = 0x141628u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x141628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1508D4u; }
        else if (ctx->pc != 0x1508D4u) { ctx->pc = 0x1508D4u; }
    }
    if (ctx->pc != 0x1508D4u) { return; }
    ctx->pc = 0x1508D4u;
    // 0x1508d4: 0x8fa30020
    ctx->pc = 0x1508d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1508d8: 0xac430000
    ctx->pc = 0x1508d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1508dc:
    // 0x1508dc: 0xc052eac
    ctx->pc = 0x1508DCu;
    SET_GPR_U32(ctx, 31, 0x1508E4u);
    ctx->pc = 0x1508E0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1508E4u; }
        else if (ctx->pc != 0x1508E4u) { ctx->pc = 0x1508E4u; }
    }
    if (ctx->pc != 0x1508E4u) { return; }
    ctx->pc = 0x1508E4u;
    // 0x1508e4: 0x10000003
    ctx->pc = 0x1508E4u;
    {
        const bool branch_taken_0x1508e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1508E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1508e4) {
            ctx->pc = 0x1508F4u;
            goto label_1508f4;
        }
    }
    ctx->pc = 0x1508ECu;
label_1508ec:
    // 0x1508ec: 0x4600a806
    ctx->pc = 0x1508ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_1508f0:
    // 0x1508f0: 0xdfbf0050
    ctx->pc = 0x1508f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1508f4:
    // 0x1508f4: 0xdfb10040
    ctx->pc = 0x1508f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1508f8: 0xdfb00030
    ctx->pc = 0x1508f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1508fc: 0xc7b50068
    ctx->pc = 0x1508fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x150900: 0xc7b40060
    ctx->pc = 0x150900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150904: 0x3e00008
    ctx->pc = 0x150904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150908u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150884u: goto label_150884;
            case 0x150890u: goto label_150890;
            case 0x1508B0u: goto label_1508b0;
            case 0x1508C4u: goto label_1508c4;
            case 0x1508DCu: goto label_1508dc;
            case 0x1508ECu: goto label_1508ec;
            case 0x1508F0u: goto label_1508f0;
            case 0x1508F4u: goto label_1508f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15090Cu;
}

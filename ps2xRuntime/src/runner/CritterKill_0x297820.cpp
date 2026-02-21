#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterKill
// Address: 0x297820 - 0x2978d8
void CritterKill_0x297820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x297820u;

    // 0x297820: 0x27bdffe0
    ctx->pc = 0x297820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297824: 0xffbf0010
    ctx->pc = 0x297824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297828: 0xffb00000
    ctx->pc = 0x297828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29782c: 0x80802d
    ctx->pc = 0x29782cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297830: 0x8e020008
    ctx->pc = 0x297830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297834: 0x24030001
    ctx->pc = 0x297834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x297838: 0x10430023
    ctx->pc = 0x297838u;
    {
        const bool branch_taken_0x297838 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x29783Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x297838) {
            ctx->pc = 0x2978C8u;
            goto label_2978c8;
        }
    }
    ctx->pc = 0x297840u;
    // 0x297840: 0xae030008
    ctx->pc = 0x297840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x297844: 0x8e020004
    ctx->pc = 0x297844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297848: 0xc44000e8
    ctx->pc = 0x297848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29784c: 0x3c013e4c
    ctx->pc = 0x29784cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x297850: 0x3421cccd
    ctx->pc = 0x297850u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x297854: 0x44816000
    ctx->pc = 0x297854u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x297858: 0xc0a6ee8
    ctx->pc = 0x297858u;
    SET_GPR_U32(ctx, 31, 0x297860u);
    ctx->pc = 0x29785Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x29BBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAwardExp_0x29bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297860u; }
    }
    if (ctx->pc != 0x297860u) { return; }
    ctx->pc = 0x297860u;
    // 0x297860: 0x8e020b64
    ctx->pc = 0x297860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2916)));
    // 0x297864: 0x5440000e
    ctx->pc = 0x297864u;
    {
        const bool branch_taken_0x297864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x297864) {
            ctx->pc = 0x297868u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x2978A0u;
            goto label_2978a0;
        }
    }
    ctx->pc = 0x29786Cu;
    // 0x29786c: 0x8e020b60
    ctx->pc = 0x29786cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
    // 0x297870: 0x5040000b
    ctx->pc = 0x297870u;
    {
        const bool branch_taken_0x297870 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x297870) {
            ctx->pc = 0x297874u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x2978A0u;
            goto label_2978a0;
        }
    }
    ctx->pc = 0x297878u;
    // 0x297878: 0x3c013f80
    ctx->pc = 0x297878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29787c: 0x44810000
    ctx->pc = 0x29787cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_297880:
    // 0x297880: 0xe44004f4
    ctx->pc = 0x297880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1268), bits); }
    // 0x297884: 0x8c420b60
    ctx->pc = 0x297884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2912)));
    // 0x297888: 0x0
    ctx->pc = 0x297888u;
    // NOP
    // 0x29788c: 0x0
    ctx->pc = 0x29788cu;
    // NOP
    // 0x297890: 0x0
    ctx->pc = 0x297890u;
    // NOP
    // 0x297894: 0x1440fffa
    ctx->pc = 0x297894u;
    {
        const bool branch_taken_0x297894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x297894) {
            ctx->pc = 0x297880u;
            goto label_297880;
        }
    }
    ctx->pc = 0x29789Cu;
    // 0x29789c: 0x8e020004
    ctx->pc = 0x29789cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2978a0:
    // 0x2978a0: 0x8c420120
    ctx->pc = 0x2978a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x2978a4: 0x84430020
    ctx->pc = 0x2978a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2978a8: 0x24020004
    ctx->pc = 0x2978a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2978ac: 0x14620007
    ctx->pc = 0x2978ACu;
    {
        const bool branch_taken_0x2978ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2978B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2978ac) {
            ctx->pc = 0x2978CCu;
            goto label_2978cc;
        }
    }
    ctx->pc = 0x2978B4u;
    // 0x2978b4: 0x8e020b64
    ctx->pc = 0x2978b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2916)));
    // 0x2978b8: 0x14400005
    ctx->pc = 0x2978B8u;
    {
        const bool branch_taken_0x2978b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2978BCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2978b8) {
            ctx->pc = 0x2978D0u;
            goto label_2978d0;
        }
    }
    ctx->pc = 0x2978C0u;
    // 0x2978c0: 0xc0a77be
    ctx->pc = 0x2978C0u;
    SET_GPR_U32(ctx, 31, 0x2978C8u);
    ctx->pc = 0x29DEF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossDying_0x29def8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2978C8u; }
    }
    if (ctx->pc != 0x2978C8u) { return; }
    ctx->pc = 0x2978C8u;
label_2978c8:
    // 0x2978c8: 0xdfbf0010
    ctx->pc = 0x2978c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2978cc:
    // 0x2978cc: 0xdfb00000
    ctx->pc = 0x2978ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2978d0:
    // 0x2978d0: 0x3e00008
    ctx->pc = 0x2978D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2978D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297880u: goto label_297880;
            case 0x2978A0u: goto label_2978a0;
            case 0x2978C8u: goto label_2978c8;
            case 0x2978CCu: goto label_2978cc;
            case 0x2978D0u: goto label_2978d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2978D8u;
}

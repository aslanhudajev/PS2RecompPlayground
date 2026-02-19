#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cosf
// Address: 0x2e7738 - 0x2e7820
void cosf_0x2e7738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e7738u;

    // 0x2e7738: 0x44026000
    ctx->pc = 0x2e7738u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x2e773c: 0x27bdffe0
    ctx->pc = 0x2e773cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7740: 0x40202d
    ctx->pc = 0x2e7740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7744: 0x3c037fff
    ctx->pc = 0x2e7744u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x2e7748: 0x3463ffff
    ctx->pc = 0x2e7748u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2e774c: 0x3c023f49
    ctx->pc = 0x2e774cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16201 << 16));
    // 0x2e7750: 0x832024
    ctx->pc = 0x2e7750u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e7754: 0x34420fd8
    ctx->pc = 0x2e7754u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4056));
    // 0x2e7758: 0x44102a
    ctx->pc = 0x2e7758u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2e775c: 0x14400006
    ctx->pc = 0x2E775Cu;
    {
        const bool branch_taken_0x2e775c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E7760u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x2e775c) {
            ctx->pc = 0x2E7778u;
            goto label_2e7778;
        }
    }
    ctx->pc = 0x2E7764u;
    // 0x2e7764: 0x44806800
    ctx->pc = 0x2e7764u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x2e7768: 0xc0bae48
    ctx->pc = 0x2E7768u;
    SET_GPR_U32(ctx, 31, 0x2E7770u);
    ctx->pc = 0x2EB920u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x2eb920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7770u; }
    }
    if (ctx->pc != 0x2E7770u) { return; }
    ctx->pc = 0x2E7770u;
    // 0x2e7770: 0x10000029
    ctx->pc = 0x2E7770u;
    {
        const bool branch_taken_0x2e7770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7774u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2e7770) {
            ctx->pc = 0x2E7818u;
            goto label_2e7818;
        }
    }
    ctx->pc = 0x2E7778u;
label_2e7778:
    // 0x2e7778: 0x3c027f7f
    ctx->pc = 0x2e7778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32639 << 16));
    // 0x2e777c: 0x3442ffff
    ctx->pc = 0x2e777cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e7780: 0x44102a
    ctx->pc = 0x2e7780u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2e7784: 0x10400003
    ctx->pc = 0x2E7784u;
    {
        const bool branch_taken_0x2e7784 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e7784) {
            ctx->pc = 0x2E7794u;
            goto label_2e7794;
        }
    }
    ctx->pc = 0x2E778Cu;
    // 0x2e778c: 0x10000021
    ctx->pc = 0x2E778Cu;
    {
        const bool branch_taken_0x2e778c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7790u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        if (branch_taken_0x2e778c) {
            ctx->pc = 0x2E7814u;
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E7794u;
label_2e7794:
    // 0x2e7794: 0xc0bad02
    ctx->pc = 0x2E7794u;
    SET_GPR_U32(ctx, 31, 0x2E779Cu);
    ctx->pc = 0x2E7798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EB408u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x2eb408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E779Cu; }
    }
    if (ctx->pc != 0x2E779Cu) { return; }
    ctx->pc = 0x2E779Cu;
    // 0x2e779c: 0x30430003
    ctx->pc = 0x2e779cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x2e77a0: 0x24020001
    ctx->pc = 0x2e77a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e77a4: 0x1062000f
    ctx->pc = 0x2E77A4u;
    {
        const bool branch_taken_0x2e77a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2E77A8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x2e77a4) {
            ctx->pc = 0x2E77E4u;
            goto label_2e77e4;
        }
    }
    ctx->pc = 0x2E77ACu;
    // 0x2e77ac: 0x10400005
    ctx->pc = 0x2E77ACu;
    {
        const bool branch_taken_0x2e77ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E77B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2e77ac) {
            ctx->pc = 0x2E77C4u;
            goto label_2e77c4;
        }
    }
    ctx->pc = 0x2E77B4u;
    // 0x2e77b4: 0x10600007
    ctx->pc = 0x2E77B4u;
    {
        const bool branch_taken_0x2e77b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E77B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2e77b4) {
            ctx->pc = 0x2E77D4u;
            goto label_2e77d4;
        }
    }
    ctx->pc = 0x2E77BCu;
    // 0x2e77bc: 0x10000013
    ctx->pc = 0x2E77BCu;
    {
        const bool branch_taken_0x2e77bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E77C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2e77bc) {
            ctx->pc = 0x2E780Cu;
            goto label_2e780c;
        }
    }
    ctx->pc = 0x2E77C4u;
label_2e77c4:
    // 0x2e77c4: 0x1062000d
    ctx->pc = 0x2E77C4u;
    {
        const bool branch_taken_0x2e77c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2E77C8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2e77c4) {
            ctx->pc = 0x2E77FCu;
            goto label_2e77fc;
        }
    }
    ctx->pc = 0x2E77CCu;
    // 0x2e77cc: 0x1000000f
    ctx->pc = 0x2E77CCu;
    {
        const bool branch_taken_0x2e77cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E77D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2e77cc) {
            ctx->pc = 0x2E780Cu;
            goto label_2e780c;
        }
    }
    ctx->pc = 0x2E77D4u;
label_2e77d4:
    // 0x2e77d4: 0xc0bae48
    ctx->pc = 0x2E77D4u;
    SET_GPR_U32(ctx, 31, 0x2E77DCu);
    ctx->pc = 0x2E77D8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2EB920u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x2eb920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E77DCu; }
    }
    if (ctx->pc != 0x2E77DCu) { return; }
    ctx->pc = 0x2E77DCu;
    // 0x2e77dc: 0x1000000e
    ctx->pc = 0x2E77DCu;
    {
        const bool branch_taken_0x2e77dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E77E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2e77dc) {
            ctx->pc = 0x2E7818u;
            goto label_2e7818;
        }
    }
    ctx->pc = 0x2E77E4u;
label_2e77e4:
    // 0x2e77e4: 0xc7ac0000
    ctx->pc = 0x2e77e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e77e8: 0x24040001
    ctx->pc = 0x2e77e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e77ec: 0xc0bb0f2
    ctx->pc = 0x2E77ECu;
    SET_GPR_U32(ctx, 31, 0x2E77F4u);
    ctx->pc = 0x2E77F0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2EC3C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x2ec3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E77F4u; }
    }
    if (ctx->pc != 0x2E77F4u) { return; }
    ctx->pc = 0x2E77F4u;
    // 0x2e77f4: 0x10000007
    ctx->pc = 0x2E77F4u;
    {
        const bool branch_taken_0x2e77f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E77F8u;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x2e77f4) {
            ctx->pc = 0x2E7814u;
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E77FCu;
label_2e77fc:
    // 0x2e77fc: 0xc0bae48
    ctx->pc = 0x2E77FCu;
    SET_GPR_U32(ctx, 31, 0x2E7804u);
    ctx->pc = 0x2E7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2EB920u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x2eb920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7804u; }
    }
    if (ctx->pc != 0x2E7804u) { return; }
    ctx->pc = 0x2E7804u;
    // 0x2e7804: 0x10000003
    ctx->pc = 0x2E7804u;
    {
        const bool branch_taken_0x2e7804 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7808u;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x2e7804) {
            ctx->pc = 0x2E7814u;
            goto label_2e7814;
        }
    }
    ctx->pc = 0x2E780Cu;
label_2e780c:
    // 0x2e780c: 0xc0bb0f2
    ctx->pc = 0x2E780Cu;
    SET_GPR_U32(ctx, 31, 0x2E7814u);
    ctx->pc = 0x2E7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2EC3C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x2ec3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7814u; }
    }
    if (ctx->pc != 0x2E7814u) { return; }
    ctx->pc = 0x2E7814u;
label_2e7814:
    // 0x2e7814: 0xdfbf0010
    ctx->pc = 0x2e7814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7818:
    // 0x2e7818: 0x3e00008
    ctx->pc = 0x2E7818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E781Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7778u: goto label_2e7778;
            case 0x2E7794u: goto label_2e7794;
            case 0x2E77C4u: goto label_2e77c4;
            case 0x2E77D4u: goto label_2e77d4;
            case 0x2E77E4u: goto label_2e77e4;
            case 0x2E77FCu: goto label_2e77fc;
            case 0x2E780Cu: goto label_2e780c;
            case 0x2E7814u: goto label_2e7814;
            case 0x2E7818u: goto label_2e7818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E7820u;
}

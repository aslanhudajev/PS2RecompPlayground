#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sinf
// Address: 0x2e7928 - 0x2e7a18
void sinf_0x2e7928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e7928u;

    // 0x2e7928: 0x44026000
    ctx->pc = 0x2e7928u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x2e792c: 0x27bdffe0
    ctx->pc = 0x2e792cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7930: 0x40202d
    ctx->pc = 0x2e7930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7934: 0x3c037fff
    ctx->pc = 0x2e7934u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x2e7938: 0x3463ffff
    ctx->pc = 0x2e7938u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2e793c: 0x3c023f49
    ctx->pc = 0x2e793cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16201 << 16));
    // 0x2e7940: 0x832024
    ctx->pc = 0x2e7940u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e7944: 0x34420fd8
    ctx->pc = 0x2e7944u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4056));
    // 0x2e7948: 0x44102a
    ctx->pc = 0x2e7948u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2e794c: 0x14400006
    ctx->pc = 0x2E794Cu;
    {
        const bool branch_taken_0x2e794c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E7950u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x2e794c) {
            ctx->pc = 0x2E7968u;
            goto label_2e7968;
        }
    }
    ctx->pc = 0x2E7954u;
    // 0x2e7954: 0x44806800
    ctx->pc = 0x2e7954u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x2e7958: 0xc0bb0f2
    ctx->pc = 0x2E7958u;
    SET_GPR_U32(ctx, 31, 0x2E7960u);
    ctx->pc = 0x2E795Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC3C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x2ec3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7960u; }
    }
    if (ctx->pc != 0x2E7960u) { return; }
    ctx->pc = 0x2E7960u;
    // 0x2e7960: 0x1000002b
    ctx->pc = 0x2E7960u;
    {
        const bool branch_taken_0x2e7960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7964u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2e7960) {
            ctx->pc = 0x2E7A10u;
            goto label_2e7a10;
        }
    }
    ctx->pc = 0x2E7968u;
label_2e7968:
    // 0x2e7968: 0x3c027f7f
    ctx->pc = 0x2e7968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32639 << 16));
    // 0x2e796c: 0x3442ffff
    ctx->pc = 0x2e796cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e7970: 0x44102a
    ctx->pc = 0x2e7970u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2e7974: 0x10400003
    ctx->pc = 0x2E7974u;
    {
        const bool branch_taken_0x2e7974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e7974) {
            ctx->pc = 0x2E7984u;
            goto label_2e7984;
        }
    }
    ctx->pc = 0x2E797Cu;
    // 0x2e797c: 0x10000023
    ctx->pc = 0x2E797Cu;
    {
        const bool branch_taken_0x2e797c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7980u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        if (branch_taken_0x2e797c) {
            ctx->pc = 0x2E7A0Cu;
            goto label_2e7a0c;
        }
    }
    ctx->pc = 0x2E7984u;
label_2e7984:
    // 0x2e7984: 0xc0bad02
    ctx->pc = 0x2E7984u;
    SET_GPR_U32(ctx, 31, 0x2E798Cu);
    ctx->pc = 0x2E7988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EB408u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x2eb408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E798Cu; }
    }
    if (ctx->pc != 0x2E798Cu) { return; }
    ctx->pc = 0x2E798Cu;
    // 0x2e798c: 0x30430003
    ctx->pc = 0x2e798cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x2e7990: 0x24020001
    ctx->pc = 0x2e7990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7994: 0x10620010
    ctx->pc = 0x2E7994u;
    {
        const bool branch_taken_0x2e7994 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2E7998u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x2e7994) {
            ctx->pc = 0x2E79D8u;
            goto label_2e79d8;
        }
    }
    ctx->pc = 0x2E799Cu;
    // 0x2e799c: 0x10400005
    ctx->pc = 0x2E799Cu;
    {
        const bool branch_taken_0x2e799c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E79A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2e799c) {
            ctx->pc = 0x2E79B4u;
            goto label_2e79b4;
        }
    }
    ctx->pc = 0x2E79A4u;
    // 0x2e79a4: 0x10600007
    ctx->pc = 0x2E79A4u;
    {
        const bool branch_taken_0x2e79a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E79A8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2e79a4) {
            ctx->pc = 0x2E79C4u;
            goto label_2e79c4;
        }
    }
    ctx->pc = 0x2E79ACu;
    // 0x2e79ac: 0x10000014
    ctx->pc = 0x2E79ACu;
    {
        const bool branch_taken_0x2e79ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e79ac) {
            ctx->pc = 0x2E7A00u;
            goto label_2e7a00;
        }
    }
    ctx->pc = 0x2E79B4u;
label_2e79b4:
    // 0x2e79b4: 0x1062000d
    ctx->pc = 0x2E79B4u;
    {
        const bool branch_taken_0x2e79b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2E79B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2e79b4) {
            ctx->pc = 0x2E79ECu;
            goto label_2e79ec;
        }
    }
    ctx->pc = 0x2E79BCu;
    // 0x2e79bc: 0x10000010
    ctx->pc = 0x2E79BCu;
    {
        const bool branch_taken_0x2e79bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e79bc) {
            ctx->pc = 0x2E7A00u;
            goto label_2e7a00;
        }
    }
    ctx->pc = 0x2E79C4u;
label_2e79c4:
    // 0x2e79c4: 0x24040001
    ctx->pc = 0x2e79c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e79c8: 0xc0bb0f2
    ctx->pc = 0x2E79C8u;
    SET_GPR_U32(ctx, 31, 0x2E79D0u);
    ctx->pc = 0x2E79CCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2EC3C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x2ec3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E79D0u; }
    }
    if (ctx->pc != 0x2E79D0u) { return; }
    ctx->pc = 0x2E79D0u;
    // 0x2e79d0: 0x1000000f
    ctx->pc = 0x2E79D0u;
    {
        const bool branch_taken_0x2e79d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E79D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2e79d0) {
            ctx->pc = 0x2E7A10u;
            goto label_2e7a10;
        }
    }
    ctx->pc = 0x2E79D8u;
label_2e79d8:
    // 0x2e79d8: 0xc7ac0000
    ctx->pc = 0x2e79d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e79dc: 0xc0bae48
    ctx->pc = 0x2E79DCu;
    SET_GPR_U32(ctx, 31, 0x2E79E4u);
    ctx->pc = 0x2E79E0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2EB920u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x2eb920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E79E4u; }
    }
    if (ctx->pc != 0x2E79E4u) { return; }
    ctx->pc = 0x2E79E4u;
    // 0x2e79e4: 0x1000000a
    ctx->pc = 0x2E79E4u;
    {
        const bool branch_taken_0x2e79e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E79E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2e79e4) {
            ctx->pc = 0x2E7A10u;
            goto label_2e7a10;
        }
    }
    ctx->pc = 0x2E79ECu;
label_2e79ec:
    // 0x2e79ec: 0x24040001
    ctx->pc = 0x2e79ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e79f0: 0xc0bb0f2
    ctx->pc = 0x2E79F0u;
    SET_GPR_U32(ctx, 31, 0x2E79F8u);
    ctx->pc = 0x2E79F4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2EC3C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x2ec3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E79F8u; }
    }
    if (ctx->pc != 0x2E79F8u) { return; }
    ctx->pc = 0x2E79F8u;
    // 0x2e79f8: 0x10000004
    ctx->pc = 0x2E79F8u;
    {
        const bool branch_taken_0x2e79f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E79FCu;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x2e79f8) {
            ctx->pc = 0x2E7A0Cu;
            goto label_2e7a0c;
        }
    }
    ctx->pc = 0x2E7A00u;
label_2e7a00:
    // 0x2e7a00: 0xc0bae48
    ctx->pc = 0x2E7A00u;
    SET_GPR_U32(ctx, 31, 0x2E7A08u);
    ctx->pc = 0x2E7A04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2EB920u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x2eb920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A08u; }
    }
    if (ctx->pc != 0x2E7A08u) { return; }
    ctx->pc = 0x2E7A08u;
    // 0x2e7a08: 0x46000007
    ctx->pc = 0x2e7a08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2e7a0c:
    // 0x2e7a0c: 0xdfbf0010
    ctx->pc = 0x2e7a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7a10:
    // 0x2e7a10: 0x3e00008
    ctx->pc = 0x2E7A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7A14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7968u: goto label_2e7968;
            case 0x2E7984u: goto label_2e7984;
            case 0x2E79B4u: goto label_2e79b4;
            case 0x2E79C4u: goto label_2e79c4;
            case 0x2E79D8u: goto label_2e79d8;
            case 0x2E79ECu: goto label_2e79ec;
            case 0x2E7A00u: goto label_2e7a00;
            case 0x2E7A0Cu: goto label_2e7a0c;
            case 0x2E7A10u: goto label_2e7a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E7A18u;
}

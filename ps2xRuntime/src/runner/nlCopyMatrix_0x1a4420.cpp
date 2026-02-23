#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlCopyMatrix
// Address: 0x1a4420 - 0x1a44bc
void nlCopyMatrix_0x1a4420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlCopyMatrix");


    ctx->pc = 0x1a4420u;

    // 0x1a4420: 0x27bdfff0
    ctx->pc = 0x1a4420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4424: 0x14800007
    ctx->pc = 0x1A4424u;
    {
        const bool branch_taken_0x1a4424 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4428u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1a4424) {
            ctx->pc = 0x1A4444u;
            goto label_1a4444;
        }
    }
    ctx->pc = 0x1A442Cu;
    // 0x1a442c: 0x10a00020
    ctx->pc = 0x1A442Cu;
    {
        const bool branch_taken_0x1a442c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4430u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a442c) {
            ctx->pc = 0x1A44B0u;
            goto label_1a44b0;
        }
    }
    ctx->pc = 0x1A4434u;
    // 0x1a4434: 0xc06c038
    ctx->pc = 0x1A4434u;
    SET_GPR_U32(ctx, 31, 0x1A443Cu);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A443Cu; }
        else if (ctx->pc != 0x1A443Cu) { ctx->pc = 0x1A443Cu; }
    }
    if (ctx->pc != 0x1A443Cu) { return; }
    ctx->pc = 0x1A443Cu;
    // 0x1a443c: 0x1000001d
    ctx->pc = 0x1A443Cu;
    {
        const bool branch_taken_0x1a443c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4440u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a443c) {
            ctx->pc = 0x1A44B4u;
            goto label_1a44b4;
        }
    }
    ctx->pc = 0x1A4444u;
label_1a4444:
    // 0x1a4444: 0x14a00005
    ctx->pc = 0x1A4444u;
    {
        const bool branch_taken_0x1a4444 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4448u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a4444) {
            ctx->pc = 0x1A445Cu;
            goto label_1a445c;
        }
    }
    ctx->pc = 0x1A444Cu;
    // 0x1a444c: 0xc06bf55
    ctx->pc = 0x1A444Cu;
    SET_GPR_U32(ctx, 31, 0x1A4454u);
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4454u; }
        else if (ctx->pc != 0x1A4454u) { ctx->pc = 0x1A4454u; }
    }
    if (ctx->pc != 0x1A4454u) { return; }
    ctx->pc = 0x1A4454u;
    // 0x1a4454: 0x10000016
    ctx->pc = 0x1A4454u;
    {
        const bool branch_taken_0x1a4454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a4454) {
            ctx->pc = 0x1A44B0u;
            goto label_1a44b0;
        }
    }
    ctx->pc = 0x1A445Cu;
label_1a445c:
    // 0x1a445c: 0xc4a00000
    ctx->pc = 0x1a445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4460: 0x24c60008
    ctx->pc = 0x1a4460u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1a4464: 0x28c30010
    ctx->pc = 0x1a4464u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 16));
    // 0x1a4468: 0xe4800000
    ctx->pc = 0x1a4468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1a446c: 0xc4a00004
    ctx->pc = 0x1a446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4470: 0xe4800004
    ctx->pc = 0x1a4470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1a4474: 0xc4a00008
    ctx->pc = 0x1a4474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4478: 0xe4800008
    ctx->pc = 0x1a4478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1a447c: 0xc4a0000c
    ctx->pc = 0x1a447cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4480: 0xe480000c
    ctx->pc = 0x1a4480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1a4484: 0xc4a00010
    ctx->pc = 0x1a4484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4488: 0xe4800010
    ctx->pc = 0x1a4488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1a448c: 0xc4a00014
    ctx->pc = 0x1a448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4490: 0xe4800014
    ctx->pc = 0x1a4490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1a4494: 0xc4a00018
    ctx->pc = 0x1a4494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4498: 0xe4800018
    ctx->pc = 0x1a4498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1a449c: 0xc4a0001c
    ctx->pc = 0x1a449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a44a0: 0xe480001c
    ctx->pc = 0x1a44a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1a44a4: 0x24a50020
    ctx->pc = 0x1a44a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x1a44a8: 0x1460ffec
    ctx->pc = 0x1A44A8u;
    {
        const bool branch_taken_0x1a44a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A44ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x1a44a8) {
            ctx->pc = 0x1A445Cu;
            goto label_1a445c;
        }
    }
    ctx->pc = 0x1A44B0u;
label_1a44b0:
    // 0x1a44b0: 0x7bbf0000
    ctx->pc = 0x1a44b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a44b4:
    // 0x1a44b4: 0x3e00008
    ctx->pc = 0x1A44B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A44B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4444u: goto label_1a4444;
            case 0x1A445Cu: goto label_1a445c;
            case 0x1A44B0u: goto label_1a44b0;
            case 0x1A44B4u: goto label_1a44b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A44BCu;
}

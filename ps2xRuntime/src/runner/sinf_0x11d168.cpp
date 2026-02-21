#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sinf
// Address: 0x11d168 - 0x11d258
void sinf_0x11d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11d168u;

    // 0x11d168: 0x44026000
    ctx->pc = 0x11d168u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x11d16c: 0x27bdffe0
    ctx->pc = 0x11d16cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d170: 0x40202d
    ctx->pc = 0x11d170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d174: 0x3c037fff
    ctx->pc = 0x11d174u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x11d178: 0x3463ffff
    ctx->pc = 0x11d178u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x11d17c: 0x3c023f49
    ctx->pc = 0x11d17cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16201 << 16));
    // 0x11d180: 0x832024
    ctx->pc = 0x11d180u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d184: 0x34420fd8
    ctx->pc = 0x11d184u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4056));
    // 0x11d188: 0x44102a
    ctx->pc = 0x11d188u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x11d18c: 0x14400006
    ctx->pc = 0x11D18Cu;
    {
        const bool branch_taken_0x11d18c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11D190u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x11d18c) {
            ctx->pc = 0x11D1A8u;
            goto label_11d1a8;
        }
    }
    ctx->pc = 0x11D194u;
    // 0x11d194: 0x44806800
    ctx->pc = 0x11d194u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x11d198: 0xc047838
    ctx->pc = 0x11D198u;
    SET_GPR_U32(ctx, 31, 0x11D1A0u);
    ctx->pc = 0x11D19Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1A0u; }
    }
    if (ctx->pc != 0x11D1A0u) { return; }
    ctx->pc = 0x11D1A0u;
    // 0x11d1a0: 0x1000002b
    ctx->pc = 0x11D1A0u;
    {
        const bool branch_taken_0x11d1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D1A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x11d1a0) {
            ctx->pc = 0x11D250u;
            goto label_11d250;
        }
    }
    ctx->pc = 0x11D1A8u;
label_11d1a8:
    // 0x11d1a8: 0x3c027f7f
    ctx->pc = 0x11d1a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32639 << 16));
    // 0x11d1ac: 0x3442ffff
    ctx->pc = 0x11d1acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11d1b0: 0x44102a
    ctx->pc = 0x11d1b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x11d1b4: 0x10400003
    ctx->pc = 0x11D1B4u;
    {
        const bool branch_taken_0x11d1b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11d1b4) {
            ctx->pc = 0x11D1C4u;
            goto label_11d1c4;
        }
    }
    ctx->pc = 0x11D1BCu;
    // 0x11d1bc: 0x10000023
    ctx->pc = 0x11D1BCu;
    {
        const bool branch_taken_0x11d1bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D1C0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        if (branch_taken_0x11d1bc) {
            ctx->pc = 0x11D24Cu;
            goto label_11d24c;
        }
    }
    ctx->pc = 0x11D1C4u;
label_11d1c4:
    // 0x11d1c4: 0xc047496
    ctx->pc = 0x11D1C4u;
    SET_GPR_U32(ctx, 31, 0x11D1CCu);
    ctx->pc = 0x11D1C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x11d258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1CCu; }
    }
    if (ctx->pc != 0x11D1CCu) { return; }
    ctx->pc = 0x11D1CCu;
    // 0x11d1cc: 0x30430003
    ctx->pc = 0x11d1ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x11d1d0: 0x24020001
    ctx->pc = 0x11d1d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d1d4: 0x10620010
    ctx->pc = 0x11D1D4u;
    {
        const bool branch_taken_0x11d1d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x11D1D8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x11d1d4) {
            ctx->pc = 0x11D218u;
            goto label_11d218;
        }
    }
    ctx->pc = 0x11D1DCu;
    // 0x11d1dc: 0x10400005
    ctx->pc = 0x11D1DCu;
    {
        const bool branch_taken_0x11d1dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D1E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x11d1dc) {
            ctx->pc = 0x11D1F4u;
            goto label_11d1f4;
        }
    }
    ctx->pc = 0x11D1E4u;
    // 0x11d1e4: 0x10600007
    ctx->pc = 0x11D1E4u;
    {
        const bool branch_taken_0x11d1e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D1E8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x11d1e4) {
            ctx->pc = 0x11D204u;
            goto label_11d204;
        }
    }
    ctx->pc = 0x11D1ECu;
    // 0x11d1ec: 0x10000014
    ctx->pc = 0x11D1ECu;
    {
        const bool branch_taken_0x11d1ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11d1ec) {
            ctx->pc = 0x11D240u;
            goto label_11d240;
        }
    }
    ctx->pc = 0x11D1F4u;
label_11d1f4:
    // 0x11d1f4: 0x1062000d
    ctx->pc = 0x11D1F4u;
    {
        const bool branch_taken_0x11d1f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x11D1F8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x11d1f4) {
            ctx->pc = 0x11D22Cu;
            goto label_11d22c;
        }
    }
    ctx->pc = 0x11D1FCu;
    // 0x11d1fc: 0x10000010
    ctx->pc = 0x11D1FCu;
    {
        const bool branch_taken_0x11d1fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11d1fc) {
            ctx->pc = 0x11D240u;
            goto label_11d240;
        }
    }
    ctx->pc = 0x11D204u;
label_11d204:
    // 0x11d204: 0x24040001
    ctx->pc = 0x11d204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d208: 0xc047838
    ctx->pc = 0x11D208u;
    SET_GPR_U32(ctx, 31, 0x11D210u);
    ctx->pc = 0x11D20Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x11E0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D210u; }
    }
    if (ctx->pc != 0x11D210u) { return; }
    ctx->pc = 0x11D210u;
    // 0x11d210: 0x1000000f
    ctx->pc = 0x11D210u;
    {
        const bool branch_taken_0x11d210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D214u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x11d210) {
            ctx->pc = 0x11D250u;
            goto label_11d250;
        }
    }
    ctx->pc = 0x11D218u;
label_11d218:
    // 0x11d218: 0xc7ac0000
    ctx->pc = 0x11d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d21c: 0xc04758e
    ctx->pc = 0x11D21Cu;
    SET_GPR_U32(ctx, 31, 0x11D224u);
    ctx->pc = 0x11D220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x11D638u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D224u; }
    }
    if (ctx->pc != 0x11D224u) { return; }
    ctx->pc = 0x11D224u;
    // 0x11d224: 0x1000000a
    ctx->pc = 0x11D224u;
    {
        const bool branch_taken_0x11d224 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D228u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x11d224) {
            ctx->pc = 0x11D250u;
            goto label_11d250;
        }
    }
    ctx->pc = 0x11D22Cu;
label_11d22c:
    // 0x11d22c: 0x24040001
    ctx->pc = 0x11d22cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d230: 0xc047838
    ctx->pc = 0x11D230u;
    SET_GPR_U32(ctx, 31, 0x11D238u);
    ctx->pc = 0x11D234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x11E0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D238u; }
    }
    if (ctx->pc != 0x11D238u) { return; }
    ctx->pc = 0x11D238u;
    // 0x11d238: 0x10000004
    ctx->pc = 0x11D238u;
    {
        const bool branch_taken_0x11d238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D23Cu;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x11d238) {
            ctx->pc = 0x11D24Cu;
            goto label_11d24c;
        }
    }
    ctx->pc = 0x11D240u;
label_11d240:
    // 0x11d240: 0xc04758e
    ctx->pc = 0x11D240u;
    SET_GPR_U32(ctx, 31, 0x11D248u);
    ctx->pc = 0x11D244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x11D638u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D248u; }
    }
    if (ctx->pc != 0x11D248u) { return; }
    ctx->pc = 0x11D248u;
    // 0x11d248: 0x46000007
    ctx->pc = 0x11d248u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11d24c:
    // 0x11d24c: 0xdfbf0010
    ctx->pc = 0x11d24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11d250:
    // 0x11d250: 0x3e00008
    ctx->pc = 0x11D250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D254u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D1A8u: goto label_11d1a8;
            case 0x11D1C4u: goto label_11d1c4;
            case 0x11D1F4u: goto label_11d1f4;
            case 0x11D204u: goto label_11d204;
            case 0x11D218u: goto label_11d218;
            case 0x11D22Cu: goto label_11d22c;
            case 0x11D240u: goto label_11d240;
            case 0x11D24Cu: goto label_11d24c;
            case 0x11D250u: goto label_11d250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D258u;
}

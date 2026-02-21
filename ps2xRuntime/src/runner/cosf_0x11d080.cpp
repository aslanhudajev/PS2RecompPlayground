#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cosf
// Address: 0x11d080 - 0x11d168
void cosf_0x11d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11d080u;

    // 0x11d080: 0x44026000
    ctx->pc = 0x11d080u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x11d084: 0x27bdffe0
    ctx->pc = 0x11d084u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d088: 0x40202d
    ctx->pc = 0x11d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d08c: 0x3c037fff
    ctx->pc = 0x11d08cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x11d090: 0x3463ffff
    ctx->pc = 0x11d090u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x11d094: 0x3c023f49
    ctx->pc = 0x11d094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16201 << 16));
    // 0x11d098: 0x832024
    ctx->pc = 0x11d098u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d09c: 0x34420fd8
    ctx->pc = 0x11d09cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4056));
    // 0x11d0a0: 0x44102a
    ctx->pc = 0x11d0a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x11d0a4: 0x14400006
    ctx->pc = 0x11D0A4u;
    {
        const bool branch_taken_0x11d0a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11D0A8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x11d0a4) {
            ctx->pc = 0x11D0C0u;
            goto label_11d0c0;
        }
    }
    ctx->pc = 0x11D0ACu;
    // 0x11d0ac: 0x44806800
    ctx->pc = 0x11d0acu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x11d0b0: 0xc04758e
    ctx->pc = 0x11D0B0u;
    SET_GPR_U32(ctx, 31, 0x11D0B8u);
    ctx->pc = 0x11D638u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0B8u; }
    }
    if (ctx->pc != 0x11D0B8u) { return; }
    ctx->pc = 0x11D0B8u;
    // 0x11d0b8: 0x10000029
    ctx->pc = 0x11D0B8u;
    {
        const bool branch_taken_0x11d0b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D0BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x11d0b8) {
            ctx->pc = 0x11D160u;
            goto label_11d160;
        }
    }
    ctx->pc = 0x11D0C0u;
label_11d0c0:
    // 0x11d0c0: 0x3c027f7f
    ctx->pc = 0x11d0c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32639 << 16));
    // 0x11d0c4: 0x3442ffff
    ctx->pc = 0x11d0c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11d0c8: 0x44102a
    ctx->pc = 0x11d0c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x11d0cc: 0x10400003
    ctx->pc = 0x11D0CCu;
    {
        const bool branch_taken_0x11d0cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11d0cc) {
            ctx->pc = 0x11D0DCu;
            goto label_11d0dc;
        }
    }
    ctx->pc = 0x11D0D4u;
    // 0x11d0d4: 0x10000021
    ctx->pc = 0x11D0D4u;
    {
        const bool branch_taken_0x11d0d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D0D8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        if (branch_taken_0x11d0d4) {
            ctx->pc = 0x11D15Cu;
            goto label_11d15c;
        }
    }
    ctx->pc = 0x11D0DCu;
label_11d0dc:
    // 0x11d0dc: 0xc047496
    ctx->pc = 0x11D0DCu;
    SET_GPR_U32(ctx, 31, 0x11D0E4u);
    ctx->pc = 0x11D0E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x11d258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0E4u; }
    }
    if (ctx->pc != 0x11D0E4u) { return; }
    ctx->pc = 0x11D0E4u;
    // 0x11d0e4: 0x30430003
    ctx->pc = 0x11d0e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x11d0e8: 0x24020001
    ctx->pc = 0x11d0e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d0ec: 0x1062000f
    ctx->pc = 0x11D0ECu;
    {
        const bool branch_taken_0x11d0ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x11D0F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x11d0ec) {
            ctx->pc = 0x11D12Cu;
            goto label_11d12c;
        }
    }
    ctx->pc = 0x11D0F4u;
    // 0x11d0f4: 0x10400005
    ctx->pc = 0x11D0F4u;
    {
        const bool branch_taken_0x11d0f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D0F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x11d0f4) {
            ctx->pc = 0x11D10Cu;
            goto label_11d10c;
        }
    }
    ctx->pc = 0x11D0FCu;
    // 0x11d0fc: 0x10600007
    ctx->pc = 0x11D0FCu;
    {
        const bool branch_taken_0x11d0fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D100u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x11d0fc) {
            ctx->pc = 0x11D11Cu;
            goto label_11d11c;
        }
    }
    ctx->pc = 0x11D104u;
    // 0x11d104: 0x10000013
    ctx->pc = 0x11D104u;
    {
        const bool branch_taken_0x11d104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D108u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11d104) {
            ctx->pc = 0x11D154u;
            goto label_11d154;
        }
    }
    ctx->pc = 0x11D10Cu;
label_11d10c:
    // 0x11d10c: 0x1062000d
    ctx->pc = 0x11D10Cu;
    {
        const bool branch_taken_0x11d10c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x11D110u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x11d10c) {
            ctx->pc = 0x11D144u;
            goto label_11d144;
        }
    }
    ctx->pc = 0x11D114u;
    // 0x11d114: 0x1000000f
    ctx->pc = 0x11D114u;
    {
        const bool branch_taken_0x11d114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D118u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11d114) {
            ctx->pc = 0x11D154u;
            goto label_11d154;
        }
    }
    ctx->pc = 0x11D11Cu;
label_11d11c:
    // 0x11d11c: 0xc04758e
    ctx->pc = 0x11D11Cu;
    SET_GPR_U32(ctx, 31, 0x11D124u);
    ctx->pc = 0x11D120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x11D638u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D124u; }
    }
    if (ctx->pc != 0x11D124u) { return; }
    ctx->pc = 0x11D124u;
    // 0x11d124: 0x1000000e
    ctx->pc = 0x11D124u;
    {
        const bool branch_taken_0x11d124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D128u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x11d124) {
            ctx->pc = 0x11D160u;
            goto label_11d160;
        }
    }
    ctx->pc = 0x11D12Cu;
label_11d12c:
    // 0x11d12c: 0xc7ac0000
    ctx->pc = 0x11d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d130: 0x24040001
    ctx->pc = 0x11d130u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d134: 0xc047838
    ctx->pc = 0x11D134u;
    SET_GPR_U32(ctx, 31, 0x11D13Cu);
    ctx->pc = 0x11D138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x11E0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D13Cu; }
    }
    if (ctx->pc != 0x11D13Cu) { return; }
    ctx->pc = 0x11D13Cu;
    // 0x11d13c: 0x10000007
    ctx->pc = 0x11D13Cu;
    {
        const bool branch_taken_0x11d13c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D140u;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x11d13c) {
            ctx->pc = 0x11D15Cu;
            goto label_11d15c;
        }
    }
    ctx->pc = 0x11D144u;
label_11d144:
    // 0x11d144: 0xc04758e
    ctx->pc = 0x11D144u;
    SET_GPR_U32(ctx, 31, 0x11D14Cu);
    ctx->pc = 0x11D148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x11D638u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D14Cu; }
    }
    if (ctx->pc != 0x11D14Cu) { return; }
    ctx->pc = 0x11D14Cu;
    // 0x11d14c: 0x10000003
    ctx->pc = 0x11D14Cu;
    {
        const bool branch_taken_0x11d14c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D150u;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x11d14c) {
            ctx->pc = 0x11D15Cu;
            goto label_11d15c;
        }
    }
    ctx->pc = 0x11D154u;
label_11d154:
    // 0x11d154: 0xc047838
    ctx->pc = 0x11D154u;
    SET_GPR_U32(ctx, 31, 0x11D15Cu);
    ctx->pc = 0x11D158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x11E0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D15Cu; }
    }
    if (ctx->pc != 0x11D15Cu) { return; }
    ctx->pc = 0x11D15Cu;
label_11d15c:
    // 0x11d15c: 0xdfbf0010
    ctx->pc = 0x11d15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11d160:
    // 0x11d160: 0x3e00008
    ctx->pc = 0x11D160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D164u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D0C0u: goto label_11d0c0;
            case 0x11D0DCu: goto label_11d0dc;
            case 0x11D10Cu: goto label_11d10c;
            case 0x11D11Cu: goto label_11d11c;
            case 0x11D12Cu: goto label_11d12c;
            case 0x11D144u: goto label_11d144;
            case 0x11D154u: goto label_11d154;
            case 0x11D15Cu: goto label_11d15c;
            case 0x11D160u: goto label_11d160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D168u;
}

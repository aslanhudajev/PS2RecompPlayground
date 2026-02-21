#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: adjust_position
// Address: 0x26aeb0 - 0x26af8c
void adjust_position_0x26aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26aeb0u;

    // 0x26aeb0: 0x3c020034
    ctx->pc = 0x26aeb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26aeb4: 0x8c42f90c
    ctx->pc = 0x26aeb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965516)));
    // 0x26aeb8: 0x18400032
    ctx->pc = 0x26AEB8u;
    {
        const bool branch_taken_0x26aeb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26AEBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x26aeb8) {
            ctx->pc = 0x26AF84u;
            goto label_26af84;
        }
    }
    ctx->pc = 0x26AEC0u;
    // 0x26aec0: 0xafa00000
    ctx->pc = 0x26aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26aec4: 0xafa00004
    ctx->pc = 0x26aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26aec8: 0xafa00008
    ctx->pc = 0x26aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26aecc: 0x18400019
    ctx->pc = 0x26AECCu;
    {
        const bool branch_taken_0x26aecc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26AED0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26aecc) {
            ctx->pc = 0x26AF34u;
            goto label_26af34;
        }
    }
    ctx->pc = 0x26AED4u;
    // 0x26aed4: 0x3c020034
    ctx->pc = 0x26aed4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26aed8: 0x2448f958
    ctx->pc = 0x26aed8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294965592));
    // 0x26aedc: 0x240a000c
    ctx->pc = 0x26aedcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 12));
    // 0x26aee0: 0x3c020034
    ctx->pc = 0x26aee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26aee4: 0x8c49f90c
    ctx->pc = 0x26aee4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 4294965516)));
    // 0x26aee8: 0x282d
    ctx->pc = 0x26aee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aeec: 0x0
    ctx->pc = 0x26aeecu;
    // NOP
label_26aef0:
    // 0x26aef0: 0xca3818
    ctx->pc = 0x26aef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26aef4: 0x0
    ctx->pc = 0x26aef4u;
    // NOP
label_26aef8:
    // 0x26aef8: 0x51080
    ctx->pc = 0x26aef8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x26aefc: 0x3a21821
    ctx->pc = 0x26aefcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x26af00: 0x471021
    ctx->pc = 0x26af00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26af04: 0x481021
    ctx->pc = 0x26af04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x26af08: 0xc4600000
    ctx->pc = 0x26af08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26af0c: 0xc4410000
    ctx->pc = 0x26af0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26af10: 0x46010000
    ctx->pc = 0x26af10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26af14: 0x24a50001
    ctx->pc = 0x26af14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x26af18: 0x28a20003
    ctx->pc = 0x26af18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x26af1c: 0x1440fff6
    ctx->pc = 0x26AF1Cu;
    {
        const bool branch_taken_0x26af1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26AF20u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x26af1c) {
            ctx->pc = 0x26AEF8u;
            goto label_26aef8;
        }
    }
    ctx->pc = 0x26AF24u;
    // 0x26af24: 0x24c60001
    ctx->pc = 0x26af24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x26af28: 0xc9102a
    ctx->pc = 0x26af28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 9)));
    // 0x26af2c: 0x5440fff0
    ctx->pc = 0x26AF2Cu;
    {
        const bool branch_taken_0x26af2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26af2c) {
            ctx->pc = 0x26AF30u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x26AEF0u;
            goto label_26aef0;
        }
    }
    ctx->pc = 0x26AF34u;
label_26af34:
    // 0x26af34: 0x3c020034
    ctx->pc = 0x26af34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26af38: 0xc441f90c
    ctx->pc = 0x26af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26af3c: 0x46800860
    ctx->pc = 0x26af3cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26af40: 0x3c013f80
    ctx->pc = 0x26af40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26af44: 0x44810000
    ctx->pc = 0x26af44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26af48: 0x0
    ctx->pc = 0x26af48u;
    // NOP
    // 0x26af4c: 0x0
    ctx->pc = 0x26af4cu;
    // NOP
    // 0x26af50: 0x46010003
    ctx->pc = 0x26af50u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x26af54: 0xc7a30000
    ctx->pc = 0x26af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26af58: 0x460300c2
    ctx->pc = 0x26af58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26af5c: 0xe7a30000
    ctx->pc = 0x26af5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26af60: 0xc7a20004
    ctx->pc = 0x26af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26af64: 0x46020082
    ctx->pc = 0x26af64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26af68: 0xe7a20004
    ctx->pc = 0x26af68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26af6c: 0xc7a10008
    ctx->pc = 0x26af6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26af70: 0x46010002
    ctx->pc = 0x26af70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26af74: 0xe7a00008
    ctx->pc = 0x26af74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26af78: 0xe4830000
    ctx->pc = 0x26af78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x26af7c: 0xe4820004
    ctx->pc = 0x26af7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x26af80: 0xe4800008
    ctx->pc = 0x26af80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_26af84:
    // 0x26af84: 0x3e00008
    ctx->pc = 0x26AF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AF88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AEF0u: goto label_26aef0;
            case 0x26AEF8u: goto label_26aef8;
            case 0x26AF34u: goto label_26af34;
            case 0x26AF84u: goto label_26af84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AF8Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dofCtrl__11DofCtrlTaskFv
// Address: 0x1d4be0 - 0x1d4c88
void dofCtrl__11DofCtrlTaskFv_0x1d4be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dofCtrl__11DofCtrlTaskFv");


    ctx->pc = 0x1d4be0u;

    // 0x1d4be0: 0x27bdfff0
    ctx->pc = 0x1d4be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4be4: 0x7fbf0000
    ctx->pc = 0x1d4be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d4be8: 0x8c830018
    ctx->pc = 0x1d4be8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d4bec: 0x1060000d
    ctx->pc = 0x1D4BECu;
    {
        const bool branch_taken_0x1d4bec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4BF0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d4bec) {
            ctx->pc = 0x1D4C24u;
            goto label_1d4c24;
        }
    }
    ctx->pc = 0x1D4BF4u;
    // 0x1d4bf4: 0xc4810020
    ctx->pc = 0x1d4bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4bf8: 0xc4800008
    ctx->pc = 0x1d4bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4bfc: 0x24050001
    ctx->pc = 0x1d4bfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4c00: 0x46010000
    ctx->pc = 0x1d4c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4c04: 0xe4800008
    ctx->pc = 0x1d4c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d4c08: 0xc4810024
    ctx->pc = 0x1d4c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4c0c: 0xc480000c
    ctx->pc = 0x1d4c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4c10: 0x46010000
    ctx->pc = 0x1d4c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4c14: 0xe480000c
    ctx->pc = 0x1d4c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1d4c18: 0x8c830018
    ctx->pc = 0x1d4c18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d4c1c: 0x2463ffff
    ctx->pc = 0x1d4c1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d4c20: 0xac830018
    ctx->pc = 0x1d4c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1d4c24:
    // 0x1d4c24: 0x8c83001c
    ctx->pc = 0x1d4c24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1d4c28: 0x1060000d
    ctx->pc = 0x1D4C28u;
    {
        const bool branch_taken_0x1d4c28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4c28) {
            ctx->pc = 0x1D4C60u;
            goto label_1d4c60;
        }
    }
    ctx->pc = 0x1D4C30u;
    // 0x1d4c30: 0xc4810028
    ctx->pc = 0x1d4c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4c34: 0xc4800010
    ctx->pc = 0x1d4c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4c38: 0x24050001
    ctx->pc = 0x1d4c38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4c3c: 0x46010000
    ctx->pc = 0x1d4c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4c40: 0xe4800010
    ctx->pc = 0x1d4c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1d4c44: 0xc481002c
    ctx->pc = 0x1d4c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4c48: 0xc4800014
    ctx->pc = 0x1d4c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4c4c: 0x46010000
    ctx->pc = 0x1d4c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4c50: 0xe4800014
    ctx->pc = 0x1d4c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1d4c54: 0x8c83001c
    ctx->pc = 0x1d4c54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1d4c58: 0x2463ffff
    ctx->pc = 0x1d4c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d4c5c: 0xac83001c
    ctx->pc = 0x1d4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_1d4c60:
    // 0x1d4c60: 0x10a00006
    ctx->pc = 0x1D4C60u;
    {
        const bool branch_taken_0x1d4c60 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4c60) {
            ctx->pc = 0x1D4C7Cu;
            goto label_1d4c7c;
        }
    }
    ctx->pc = 0x1D4C68u;
    // 0x1d4c68: 0xc48d000c
    ctx->pc = 0x1d4c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d4c6c: 0xc48e0010
    ctx->pc = 0x1d4c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d4c70: 0xc48f0014
    ctx->pc = 0x1d4c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d4c74: 0xc069634
    ctx->pc = 0x1D4C74u;
    SET_GPR_U32(ctx, 31, 0x1D4C7Cu);
    ctx->pc = 0x1D4C78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A58D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetRangeNF_0x1a58d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C7Cu; }
        else if (ctx->pc != 0x1D4C7Cu) { ctx->pc = 0x1D4C7Cu; }
    }
    if (ctx->pc != 0x1D4C7Cu) { return; }
    ctx->pc = 0x1D4C7Cu;
label_1d4c7c:
    // 0x1d4c7c: 0x7bbf0000
    ctx->pc = 0x1d4c7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4c80: 0x3e00008
    ctx->pc = 0x1D4C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4C84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4C24u: goto label_1d4c24;
            case 0x1D4C60u: goto label_1d4c60;
            case 0x1D4C7Cu: goto label_1d4c7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4C88u;
}

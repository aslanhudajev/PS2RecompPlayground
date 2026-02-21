#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartMagicFX
// Address: 0x27e9a0 - 0x27ead0
void StartMagicFX_0x27e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e9a0u;

    // 0x27e9a0: 0x27bdff90
    ctx->pc = 0x27e9a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27e9a4: 0xffbf0040
    ctx->pc = 0x27e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27e9a8: 0xffb30030
    ctx->pc = 0x27e9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27e9ac: 0xffb20020
    ctx->pc = 0x27e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27e9b0: 0xffb10010
    ctx->pc = 0x27e9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27e9b4: 0xffb00000
    ctx->pc = 0x27e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27e9b8: 0xe7b60060
    ctx->pc = 0x27e9b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27e9bc: 0xe7b50058
    ctx->pc = 0x27e9bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27e9c0: 0xe7b40050
    ctx->pc = 0x27e9c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27e9c4: 0x80382d
    ctx->pc = 0x27e9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9c8: 0x46006506
    ctx->pc = 0x27e9c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27e9cc: 0x46006d86
    ctx->pc = 0x27e9ccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x27e9d0: 0xa0802d
    ctx->pc = 0x27e9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9d4: 0xc0882d
    ctx->pc = 0x27e9d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9d8: 0x3c013d00
    ctx->pc = 0x27e9d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15616 << 16));
    // 0x27e9dc: 0x44810000
    ctx->pc = 0x27e9dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27e9e0: 0x4600b542
    ctx->pc = 0x27e9e0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x27e9e4: 0x3213000f
    ctx->pc = 0x27e9e4u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 16), 15));
    // 0x27e9e8: 0x3c030034
    ctx->pc = 0x27e9e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27e9ec: 0x24630e10
    ctx->pc = 0x27e9ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3600));
    // 0x27e9f0: 0x131080
    ctx->pc = 0x27e9f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x27e9f4: 0x431021
    ctx->pc = 0x27e9f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e9f8: 0x8c440000
    ctx->pc = 0x27e9f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e9fc: 0xe0282d
    ctx->pc = 0x27e9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea00: 0x302d
    ctx->pc = 0x27ea00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea04: 0x44806000
    ctx->pc = 0x27ea04u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27ea08: 0x2407012a
    ctx->pc = 0x27ea08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 298));
    // 0x27ea0c: 0x402d
    ctx->pc = 0x27ea0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea10: 0x482d
    ctx->pc = 0x27ea10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea14: 0xc09f832
    ctx->pc = 0x27EA14u;
    SET_GPR_U32(ctx, 31, 0x27EA1Cu);
    ctx->pc = 0x27EA18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMissile_0x27e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA1Cu; }
    }
    if (ctx->pc != 0x27EA1Cu) { return; }
    ctx->pc = 0x27EA1Cu;
    // 0x27ea1c: 0x40902d
    ctx->pc = 0x27ea1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea20: 0x240202d
    ctx->pc = 0x27ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea24: 0x4600a306
    ctx->pc = 0x27ea24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27ea28: 0x200282d
    ctx->pc = 0x27ea28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea2c: 0x4600b346
    ctx->pc = 0x27ea2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x27ea30: 0x44807000
    ctx->pc = 0x27ea30u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x27ea34: 0xc09f780
    ctx->pc = 0x27EA34u;
    SET_GPR_U32(ctx, 31, 0x27EA3Cu);
    ctx->pc = 0x27EA38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA3Cu; }
    }
    if (ctx->pc != 0x27EA3Cu) { return; }
    ctx->pc = 0x27EA3Cu;
    // 0x27ea3c: 0x3c013f80
    ctx->pc = 0x27ea3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27ea40: 0x44810000
    ctx->pc = 0x27ea40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ea44: 0x46150034
    ctx->pc = 0x27ea44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ea48: 0x0
    ctx->pc = 0x27ea48u;
    // NOP
    // 0x27ea4c: 0x45030001
    ctx->pc = 0x27EA4Cu;
    {
        const bool branch_taken_0x27ea4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ea4c) {
            ctx->pc = 0x27EA50u;
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x27EA54u;
            goto label_27ea54;
        }
    }
    ctx->pc = 0x27EA54u;
label_27ea54:
    // 0x27ea54: 0x240202d
    ctx->pc = 0x27ea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea58: 0x4600ab06
    ctx->pc = 0x27ea58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27ea5c: 0x4600ab46
    ctx->pc = 0x27ea5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27ea60: 0xc09f63e
    ctx->pc = 0x27EA60u;
    SET_GPR_U32(ctx, 31, 0x27EA68u);
    ctx->pc = 0x27EA64u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA68u; }
    }
    if (ctx->pc != 0x27EA68u) { return; }
    ctx->pc = 0x27EA68u;
    // 0x27ea68: 0x3c013fc0
    ctx->pc = 0x27ea68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x27ea6c: 0x44816000
    ctx->pc = 0x27ea6cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27ea70: 0x3c030034
    ctx->pc = 0x27ea70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27ea74: 0x246300d0
    ctx->pc = 0x27ea74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 208));
    // 0x27ea78: 0x131080
    ctx->pc = 0x27ea78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x27ea7c: 0x431021
    ctx->pc = 0x27ea7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ea80: 0x8c430000
    ctx->pc = 0x27ea80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ea84: 0x2402000c
    ctx->pc = 0x27ea84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27ea88: 0x621818
    ctx->pc = 0x27ea88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ea8c: 0x3c050034
    ctx->pc = 0x27ea8cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x27ea90: 0x24a50068
    ctx->pc = 0x27ea90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 104));
    // 0x27ea94: 0x240202d
    ctx->pc = 0x27ea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea98: 0x460cb302
    ctx->pc = 0x27ea98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x27ea9c: 0xc09fdc2
    ctx->pc = 0x27EA9Cu;
    SET_GPR_U32(ctx, 31, 0x27EAA4u);
    ctx->pc = 0x27EAA0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EAA4u; }
    }
    if (ctx->pc != 0x27EAA4u) { return; }
    ctx->pc = 0x27EAA4u;
    // 0x27eaa4: 0x240102d
    ctx->pc = 0x27eaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eaa8: 0xdfbf0040
    ctx->pc = 0x27eaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27eaac: 0xdfb30030
    ctx->pc = 0x27eaacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27eab0: 0xdfb20020
    ctx->pc = 0x27eab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27eab4: 0xdfb10010
    ctx->pc = 0x27eab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27eab8: 0xdfb00000
    ctx->pc = 0x27eab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27eabc: 0xc7b60060
    ctx->pc = 0x27eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27eac0: 0xc7b50058
    ctx->pc = 0x27eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27eac4: 0xc7b40050
    ctx->pc = 0x27eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27eac8: 0x3e00008
    ctx->pc = 0x27EAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EACCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27EA54u: goto label_27ea54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27EAD0u;
}

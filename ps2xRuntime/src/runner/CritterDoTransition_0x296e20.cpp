#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDoTransition
// Address: 0x296e20 - 0x296f1c
void CritterDoTransition_0x296e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x296e20u;

    // 0x296e20: 0x27bdffd0
    ctx->pc = 0x296e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296e24: 0xffbf0020
    ctx->pc = 0x296e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296e28: 0xffb10010
    ctx->pc = 0x296e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296e2c: 0xffb00000
    ctx->pc = 0x296e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296e30: 0x80802d
    ctx->pc = 0x296e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e34: 0xa0882d
    ctx->pc = 0x296e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e38: 0x86040124
    ctx->pc = 0x296e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x296e3c: 0x4800007
    ctx->pc = 0x296E3Cu;
    {
        const bool branch_taken_0x296e3c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x296E40u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296e3c) {
            ctx->pc = 0x296E5Cu;
            goto label_296e5c;
        }
    }
    ctx->pc = 0x296E44u;
    // 0x296e44: 0x8e030004
    ctx->pc = 0x296e44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296e48: 0x24020090
    ctx->pc = 0x296e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x296e4c: 0x821018
    ctx->pc = 0x296e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296e50: 0x8c630124
    ctx->pc = 0x296e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x296e54: 0x432821
    ctx->pc = 0x296e54u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296e58: 0x24a50060
    ctx->pc = 0x296e58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 96));
label_296e5c:
    // 0x296e5c: 0x86020130
    ctx->pc = 0x296e5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x296e60: 0x4420005
    ctx->pc = 0x296E60u;
    {
        const bool branch_taken_0x296e60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x296e60) {
            ctx->pc = 0x296E64u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2894)));
            ctx->pc = 0x296E78u;
            goto label_296e78;
        }
    }
    ctx->pc = 0x296E68u;
    // 0x296e68: 0x8602012e
    ctx->pc = 0x296e68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 302)));
    // 0x296e6c: 0x5040001e
    ctx->pc = 0x296E6Cu;
    {
        const bool branch_taken_0x296e6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296e6c) {
            ctx->pc = 0x296E70u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x296EE8u;
            goto label_296ee8;
        }
    }
    ctx->pc = 0x296E74u;
    // 0x296e74: 0x86020b4e
    ctx->pc = 0x296e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2894)));
label_296e78:
    // 0x296e78: 0x1c400009
    ctx->pc = 0x296E78u;
    {
        const bool branch_taken_0x296e78 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x296E7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x296e78) {
            ctx->pc = 0x296EA0u;
            goto label_296ea0;
        }
    }
    ctx->pc = 0x296E80u;
    // 0x296e80: 0x86020132
    ctx->pc = 0x296e80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x296e84: 0x4400003
    ctx->pc = 0x296E84u;
    {
        const bool branch_taken_0x296e84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x296E88u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
        if (branch_taken_0x296e84) {
            ctx->pc = 0x296E94u;
            goto label_296e94;
        }
    }
    ctx->pc = 0x296E8Cu;
    // 0x296e8c: 0x10000005
    ctx->pc = 0x296E8Cu;
    {
        const bool branch_taken_0x296e8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296E90u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x296e8c) {
            ctx->pc = 0x296EA4u;
            goto label_296ea4;
        }
    }
    ctx->pc = 0x296E94u;
label_296e94:
    // 0x296e94: 0x200202d
    ctx->pc = 0x296e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e98: 0xc0a6db6
    ctx->pc = 0x296E98u;
    SET_GPR_U32(ctx, 31, 0x296EA0u);
    ctx->pc = 0x296E9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29B6D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveGetTarget_0x29b6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EA0u; }
    }
    if (ctx->pc != 0x296EA0u) { return; }
    ctx->pc = 0x296EA0u;
label_296ea0:
    // 0x296ea0: 0xa6020130
    ctx->pc = 0x296ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
label_296ea4:
    // 0x296ea4: 0x8602012e
    ctx->pc = 0x296ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 302)));
    // 0x296ea8: 0x5040000f
    ctx->pc = 0x296EA8u;
    {
        const bool branch_taken_0x296ea8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296ea8) {
            ctx->pc = 0x296EACu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x296EE8u;
            goto label_296ee8;
        }
    }
    ctx->pc = 0x296EB0u;
    // 0x296eb0: 0xa6000250
    ctx->pc = 0x296eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 592), (uint16_t)GPR_U32(ctx, 0));
    // 0x296eb4: 0xa6000252
    ctx->pc = 0x296eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 594), (uint16_t)GPR_U32(ctx, 0));
    // 0x296eb8: 0x8e0400e0
    ctx->pc = 0x296eb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x296ebc: 0x50800005
    ctx->pc = 0x296EBCu;
    {
        const bool branch_taken_0x296ebc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x296ebc) {
            ctx->pc = 0x296EC0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x296ED4u;
            goto label_296ed4;
        }
    }
    ctx->pc = 0x296EC4u;
    // 0x296ec4: 0xc0b3f1a
    ctx->pc = 0x296EC4u;
    SET_GPR_U32(ctx, 31, 0x296ECCu);
    ctx->pc = 0x296EC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296ECCu; }
    }
    if (ctx->pc != 0x296ECCu) { return; }
    ctx->pc = 0x296ECCu;
    // 0x296ecc: 0xae0000e0
    ctx->pc = 0x296eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x296ed0: 0x200202d
    ctx->pc = 0x296ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_296ed4:
    // 0x296ed4: 0x8625000e
    ctx->pc = 0x296ed4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x296ed8: 0xc0a47e0
    ctx->pc = 0x296ED8u;
    SET_GPR_U32(ctx, 31, 0x296EE0u);
    ctx->pc = 0x296EDCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->pc = 0x291F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNode_0x291f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EE0u; }
    }
    if (ctx->pc != 0x296EE0u) { return; }
    ctx->pc = 0x296EE0u;
    // 0x296ee0: 0xae0200dc
    ctx->pc = 0x296ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x296ee4: 0xc6000410
    ctx->pc = 0x296ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_296ee8:
    // 0x296ee8: 0xe6000470
    ctx->pc = 0x296ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1136), bits); }
    // 0x296eec: 0xc6000414
    ctx->pc = 0x296eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296ef0: 0xe6000474
    ctx->pc = 0x296ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1140), bits); }
    // 0x296ef4: 0xc6000418
    ctx->pc = 0x296ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296ef8: 0xe6000478
    ctx->pc = 0x296ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1144), bits); }
    // 0x296efc: 0x8e0400dc
    ctx->pc = 0x296efcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x296f00: 0x260503e0
    ctx->pc = 0x296f00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 992));
    // 0x296f04: 0x302d
    ctx->pc = 0x296f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f08: 0xdfbf0020
    ctx->pc = 0x296f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296f0c: 0xdfb10010
    ctx->pc = 0x296f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296f10: 0xdfb00000
    ctx->pc = 0x296f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296f14: 0x80b4302
    ctx->pc = 0x296F14u;
    ctx->pc = 0x296F18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D0C08u;
    GetWorldMat_0x2d0c08(rdram, ctx, runtime); return;
    ctx->pc = 0x296F1Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterMoveTargetPos
// Address: 0x29b820 - 0x29b940
void CritterMoveTargetPos_0x29b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29b820u;

    // 0x29b820: 0x27bdffa0
    ctx->pc = 0x29b820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29b824: 0xffbf0040
    ctx->pc = 0x29b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29b828: 0xffb10030
    ctx->pc = 0x29b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x29b82c: 0xffb00020
    ctx->pc = 0x29b82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29b830: 0xe7b40050
    ctx->pc = 0x29b830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29b834: 0x80802d
    ctx->pc = 0x29b834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b838: 0x86020136
    ctx->pc = 0x29b838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x29b83c: 0x18400016
    ctx->pc = 0x29B83Cu;
    {
        const bool branch_taken_0x29b83c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29B840u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b83c) {
            ctx->pc = 0x29B898u;
            goto label_29b898;
        }
    }
    ctx->pc = 0x29B844u;
    // 0x29b844: 0x8e030140
    ctx->pc = 0x29b844u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x29b848: 0x24022b00
    ctx->pc = 0x29b848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29b84c: 0x621818
    ctx->pc = 0x29b84cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29b850: 0x3c020032
    ctx->pc = 0x29b850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29b854: 0x24421bc0
    ctx->pc = 0x29b854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29b858: 0x621821
    ctx->pc = 0x29b858u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b85c: 0xc4600070
    ctx->pc = 0x29b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b860: 0xe6200000
    ctx->pc = 0x29b860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29b864: 0xc4600074
    ctx->pc = 0x29b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b868: 0xe6200004
    ctx->pc = 0x29b868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x29b86c: 0x10000007
    ctx->pc = 0x29B86Cu;
    {
        const bool branch_taken_0x29b86c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B870u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29b86c) {
            ctx->pc = 0x29B88Cu;
            goto label_29b88c;
        }
    }
    ctx->pc = 0x29B874u;
label_29b874:
    // 0x29b874: 0xe6200000
    ctx->pc = 0x29b874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29b878: 0x8e020b5c
    ctx->pc = 0x29b878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    // 0x29b87c: 0xc4400034
    ctx->pc = 0x29b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b880: 0xe6200004
    ctx->pc = 0x29b880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x29b884: 0x8e020b5c
    ctx->pc = 0x29b884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    // 0x29b888: 0xc4400038
    ctx->pc = 0x29b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29b88c:
    // 0x29b88c: 0xe6200008
    ctx->pc = 0x29b88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x29b890: 0x10000025
    ctx->pc = 0x29B890u;
    {
        const bool branch_taken_0x29b890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B894u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29b890) {
            ctx->pc = 0x29B928u;
            goto label_29b928;
        }
    }
    ctx->pc = 0x29B898u;
label_29b898:
    // 0x29b898: 0x8e020b5c
    ctx->pc = 0x29b898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    // 0x29b89c: 0x5040001f
    ctx->pc = 0x29B89Cu;
    {
        const bool branch_taken_0x29b89c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29b89c) {
            ctx->pc = 0x29B8A0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x29B91Cu;
            goto label_29b91c;
        }
    }
    ctx->pc = 0x29B8A4u;
    // 0x29b8a4: 0x3c013f80
    ctx->pc = 0x29b8a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29b8a8: 0x4481a000
    ctx->pc = 0x29b8a8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29b8ac: 0x0
    ctx->pc = 0x29b8acu;
    // NOP
label_29b8b0:
    // 0x29b8b0: 0x8e020b5c
    ctx->pc = 0x29b8b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    // 0x29b8b4: 0xc4430030
    ctx->pc = 0x29b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29b8b8: 0xc6000040
    ctx->pc = 0x29b8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b8bc: 0x460018c1
    ctx->pc = 0x29b8bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x29b8c0: 0xe7a30010
    ctx->pc = 0x29b8c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29b8c4: 0xc4420034
    ctx->pc = 0x29b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b8c8: 0xc6000044
    ctx->pc = 0x29b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b8cc: 0x46001081
    ctx->pc = 0x29b8ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29b8d0: 0xe7a20014
    ctx->pc = 0x29b8d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29b8d4: 0xc4400038
    ctx->pc = 0x29b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b8d8: 0xc6010048
    ctx->pc = 0x29b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b8dc: 0x46010001
    ctx->pc = 0x29b8dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29b8e0: 0xe7a00018
    ctx->pc = 0x29b8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29b8e4: 0x460318c2
    ctx->pc = 0x29b8e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x29b8e8: 0x46021082
    ctx->pc = 0x29b8e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x29b8ec: 0x460218c0
    ctx->pc = 0x29b8ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29b8f0: 0x46000002
    ctx->pc = 0x29b8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x29b8f4: 0x460018c0
    ctx->pc = 0x29b8f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29b8f8: 0x46141834
    ctx->pc = 0x29b8f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b8fc: 0x0
    ctx->pc = 0x29b8fcu;
    // NOP
    // 0x29b900: 0x4502ffdc
    ctx->pc = 0x29B900u;
    {
        const bool branch_taken_0x29b900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b900) {
            ctx->pc = 0x29B904u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x29B874u;
            goto label_29b874;
        }
    }
    ctx->pc = 0x29B908u;
    // 0x29b908: 0xc093fc6
    ctx->pc = 0x29B908u;
    SET_GPR_U32(ctx, 31, 0x29B910u);
    ctx->pc = 0x29B90Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    ctx->pc = 0x24FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextWaypoint_0x24ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B910u; }
    }
    if (ctx->pc != 0x29B910u) { return; }
    ctx->pc = 0x29B910u;
    // 0x29b910: 0x1440ffe7
    ctx->pc = 0x29B910u;
    {
        const bool branch_taken_0x29b910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29B914u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2908), GPR_U32(ctx, 2));
        if (branch_taken_0x29b910) {
            ctx->pc = 0x29B8B0u;
            goto label_29b8b0;
        }
    }
    ctx->pc = 0x29B918u;
    // 0x29b918: 0xae200000
    ctx->pc = 0x29b918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_29b91c:
    // 0x29b91c: 0xae200004
    ctx->pc = 0x29b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x29b920: 0xae200008
    ctx->pc = 0x29b920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x29b924: 0x102d
    ctx->pc = 0x29b924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b928:
    // 0x29b928: 0xdfbf0040
    ctx->pc = 0x29b928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b92c: 0xdfb10030
    ctx->pc = 0x29b92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b930: 0xdfb00020
    ctx->pc = 0x29b930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b934: 0xc7b40050
    ctx->pc = 0x29b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b938: 0x3e00008
    ctx->pc = 0x29B938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B93Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B874u: goto label_29b874;
            case 0x29B88Cu: goto label_29b88c;
            case 0x29B898u: goto label_29b898;
            case 0x29B8B0u: goto label_29b8b0;
            case 0x29B91Cu: goto label_29b91c;
            case 0x29B928u: goto label_29b928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29B940u;
}

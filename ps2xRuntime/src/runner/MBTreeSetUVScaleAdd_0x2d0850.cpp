#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetUVScaleAdd
// Address: 0x2d0850 - 0x2d0998
void MBTreeSetUVScaleAdd_0x2d0850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0850u;

    // 0x2d0850: 0x27bdfff0
    ctx->pc = 0x2d0850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0854: 0xffbf0000
    ctx->pc = 0x2d0854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0858: 0x3c013f80
    ctx->pc = 0x2d0858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d085c: 0x44810800
    ctx->pc = 0x2d085cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d0860: 0x46016032
    ctx->pc = 0x2d0860u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0864: 0x0
    ctx->pc = 0x2d0864u;
    // NOP
    // 0x2d0868: 0x45000014
    ctx->pc = 0x2D0868u;
    {
        const bool branch_taken_0x2d0868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D086Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0868) {
            ctx->pc = 0x2D08BCu;
            goto label_2d08bc;
        }
    }
    ctx->pc = 0x2D0870u;
    // 0x2d0870: 0x44800000
    ctx->pc = 0x2d0870u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d0874: 0x46006832
    ctx->pc = 0x2d0874u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0878: 0x0
    ctx->pc = 0x2d0878u;
    // NOP
    // 0x2d087c: 0x45020010
    ctx->pc = 0x2D087Cu;
    {
        const bool branch_taken_0x2d087c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d087c) {
            ctx->pc = 0x2D0880u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->pc = 0x2D08C0u;
            goto label_2d08c0;
        }
    }
    ctx->pc = 0x2D0884u;
    // 0x2d0884: 0x46017032
    ctx->pc = 0x2d0884u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0888: 0x0
    ctx->pc = 0x2d0888u;
    // NOP
    // 0x2d088c: 0x4502000c
    ctx->pc = 0x2D088Cu;
    {
        const bool branch_taken_0x2d088c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d088c) {
            ctx->pc = 0x2D0890u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->pc = 0x2D08C0u;
            goto label_2d08c0;
        }
    }
    ctx->pc = 0x2D0894u;
    // 0x2d0894: 0x46007832
    ctx->pc = 0x2d0894u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0898: 0x0
    ctx->pc = 0x2d0898u;
    // NOP
    // 0x2d089c: 0x45000007
    ctx->pc = 0x2D089Cu;
    {
        const bool branch_taken_0x2d089c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D08A0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
        if (branch_taken_0x2d089c) {
            ctx->pc = 0x2D08BCu;
            goto label_2d08bc;
        }
    }
    ctx->pc = 0x2D08A4u;
    // 0x2d08a4: 0x8c820060
    ctx->pc = 0x2d08a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d08a8: 0x431024
    ctx->pc = 0x2d08a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d08ac: 0x10400038
    ctx->pc = 0x2D08ACu;
    {
        const bool branch_taken_0x2d08ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D08B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2d08ac) {
            ctx->pc = 0x2D0990u;
            goto label_2d0990;
        }
    }
    ctx->pc = 0x2D08B4u;
    // 0x2d08b4: 0x80b42a0
    ctx->pc = 0x2D08B4u;
    ctx->pc = 0x2D08B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D0A80u;
    MBTreeClearUVScaleAdd_0x2d0a80(rdram, ctx, runtime); return;
    ctx->pc = 0x2D08BCu;
label_2d08bc:
    // 0x2d08bc: 0x8c820060
    ctx->pc = 0x2d08bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2d08c0:
    // 0x2d08c0: 0x3c031000
    ctx->pc = 0x2d08c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2d08c4: 0x431024
    ctx->pc = 0x2d08c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d08c8: 0x10400009
    ctx->pc = 0x2D08C8u;
    {
        const bool branch_taken_0x2d08c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D08CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d08c8) {
            ctx->pc = 0x2D08F0u;
            goto label_2d08f0;
        }
    }
    ctx->pc = 0x2D08D0u;
    // 0x2d08d0: 0x244210b0
    ctx->pc = 0x2d08d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2d08d4: 0x9083005e
    ctx->pc = 0x2d08d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 94)));
    // 0x2d08d8: 0x31900
    ctx->pc = 0x2d08d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d08dc: 0x621821
    ctx->pc = 0x2d08dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d08e0: 0x3c017cf0
    ctx->pc = 0x2d08e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)31984 << 16));
    // 0x2d08e4: 0x3421bdc2
    ctx->pc = 0x2d08e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 48578));
    // 0x2d08e8: 0x44810000
    ctx->pc = 0x2d08e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d08ec: 0xe4600000
    ctx->pc = 0x2d08ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2d08f0:
    // 0x2d08f0: 0x3c02003a
    ctx->pc = 0x2d08f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d08f4: 0x244514b0
    ctx->pc = 0x2d08f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 5296));
    // 0x2d08f8: 0x24a5fff0
    ctx->pc = 0x2d08f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x2d08fc: 0x24a2fc00
    ctx->pc = 0x2d08fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x2d0900: 0x10a2001e
    ctx->pc = 0x2D0900u;
    {
        const bool branch_taken_0x2d0900 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D0904u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d0900) {
            ctx->pc = 0x2D097Cu;
            goto label_2d097c;
        }
    }
    ctx->pc = 0x2D0908u;
    // 0x2d0908: 0x3c017cf0
    ctx->pc = 0x2d0908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)31984 << 16));
    // 0x2d090c: 0x3421bdc2
    ctx->pc = 0x2d090cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 48578));
    // 0x2d0910: 0x44810800
    ctx->pc = 0x2d0910u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d0914: 0x3c017b40
    ctx->pc = 0x2d0914u;
    SET_GPR_U32(ctx, 1, ((uint32_t)31552 << 16));
    // 0x2d0918: 0x342197ce
    ctx->pc = 0x2d0918u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 38862));
    // 0x2d091c: 0x44811000
    ctx->pc = 0x2d091cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2d0920: 0x244310b0
    ctx->pc = 0x2d0920u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2d0924: 0x3c02003a
    ctx->pc = 0x2d0924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d0928: 0x244210a0
    ctx->pc = 0x2d0928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4256));
    // 0x2d092c: 0xc4a00000
    ctx->pc = 0x2d092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d0930:
    // 0x2d0930: 0x46010032
    ctx->pc = 0x2d0930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0934: 0x0
    ctx->pc = 0x2d0934u;
    // NOP
    // 0x2d0938: 0x4502000e
    ctx->pc = 0x2D0938u;
    {
        const bool branch_taken_0x2d0938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0938) {
            ctx->pc = 0x2D093Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967280));
            ctx->pc = 0x2D0974u;
            goto label_2d0974;
        }
    }
    ctx->pc = 0x2D0940u;
    // 0x2d0940: 0xe4ac0000
    ctx->pc = 0x2d0940u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2d0944: 0xe4ad0004
    ctx->pc = 0x2d0944u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2d0948: 0xe4ae0008
    ctx->pc = 0x2d0948u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2d094c: 0x46016032
    ctx->pc = 0x2d094cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0950: 0x0
    ctx->pc = 0x2d0950u;
    // NOP
    // 0x2d0954: 0x45000002
    ctx->pc = 0x2D0954u;
    {
        const bool branch_taken_0x2d0954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0958u;
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        if (branch_taken_0x2d0954) {
            ctx->pc = 0x2D0960u;
            goto label_2d0960;
        }
    }
    ctx->pc = 0x2D095Cu;
    // 0x2d095c: 0xe4a20000
    ctx->pc = 0x2d095cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2d0960:
    // 0x2d0960: 0xa32823
    ctx->pc = 0x2d0960u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d0964: 0xc0b4266
    ctx->pc = 0x2D0964u;
    SET_GPR_U32(ctx, 31, 0x2D096Cu);
    ctx->pc = 0x2D0968u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    ctx->pc = 0x2D0998u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetUVIndex_0x2d0998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D096Cu; }
    }
    if (ctx->pc != 0x2D096Cu) { return; }
    ctx->pc = 0x2D096Cu;
    // 0x2d096c: 0x10000008
    ctx->pc = 0x2D096Cu;
    {
        const bool branch_taken_0x2d096c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0970u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2d096c) {
            ctx->pc = 0x2D0990u;
            goto label_2d0990;
        }
    }
    ctx->pc = 0x2D0974u;
label_2d0974:
    // 0x2d0974: 0x54a2ffee
    ctx->pc = 0x2D0974u;
    {
        const bool branch_taken_0x2d0974 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2d0974) {
            ctx->pc = 0x2D0978u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2D0930u;
            goto label_2d0930;
        }
    }
    ctx->pc = 0x2D097Cu;
label_2d097c:
    // 0x2d097c: 0x3c04003b
    ctx->pc = 0x2d097cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d0980: 0x24847738
    ctx->pc = 0x2d0980u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30520));
    // 0x2d0984: 0xdfbf0000
    ctx->pc = 0x2d0984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0988: 0x80b492e
    ctx->pc = 0x2D0988u;
    ctx->pc = 0x2D098Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2D0990u;
label_2d0990:
    // 0x2d0990: 0x3e00008
    ctx->pc = 0x2D0990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D08BCu: goto label_2d08bc;
            case 0x2D08C0u: goto label_2d08c0;
            case 0x2D08F0u: goto label_2d08f0;
            case 0x2D0930u: goto label_2d0930;
            case 0x2D0960u: goto label_2d0960;
            case 0x2D0974u: goto label_2d0974;
            case 0x2D097Cu: goto label_2d097c;
            case 0x2D0990u: goto label_2d0990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0998u;
}

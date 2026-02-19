#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetPlayerViewDist
// Address: 0x29fe78 - 0x29ff58
void GetPlayerViewDist_0x29fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29fe78u;

    // 0x29fe78: 0x27bdff80
    ctx->pc = 0x29fe78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29fe7c: 0xffbf0060
    ctx->pc = 0x29fe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29fe80: 0xffb40050
    ctx->pc = 0x29fe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29fe84: 0xffb30040
    ctx->pc = 0x29fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29fe88: 0xffb20030
    ctx->pc = 0x29fe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29fe8c: 0xffb10020
    ctx->pc = 0x29fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29fe90: 0xffb00010
    ctx->pc = 0x29fe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29fe94: 0xe7b40070
    ctx->pc = 0x29fe94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29fe98: 0x80882d
    ctx->pc = 0x29fe98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe9c: 0x3c0160ad
    ctx->pc = 0x29fe9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)24749 << 16));
    // 0x29fea0: 0x342178ec
    ctx->pc = 0x29fea0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30956));
    // 0x29fea4: 0x4481a000
    ctx->pc = 0x29fea4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29fea8: 0x802d
    ctx->pc = 0x29fea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29feac: 0x24142b00
    ctx->pc = 0x29feacu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29feb0: 0x3c020032
    ctx->pc = 0x29feb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29feb4: 0x24531bc0
    ctx->pc = 0x29feb4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29feb8: 0x24120001
    ctx->pc = 0x29feb8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29febc: 0x2141018
    ctx->pc = 0x29febcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29fec0:
    // 0x29fec0: 0x531821
    ctx->pc = 0x29fec0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29fec4: 0x8c6200fc
    ctx->pc = 0x29fec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x29fec8: 0x54520016
    ctx->pc = 0x29FEC8u;
    {
        const bool branch_taken_0x29fec8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x29fec8) {
            ctx->pc = 0x29FECCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29FF24u;
            goto label_29ff24;
        }
    }
    ctx->pc = 0x29FED0u;
    // 0x29fed0: 0xc4600060
    ctx->pc = 0x29fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fed4: 0xc4610860
    ctx->pc = 0x29fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fed8: 0x46010000
    ctx->pc = 0x29fed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29fedc: 0xe7a00000
    ctx->pc = 0x29fedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29fee0: 0xc4600064
    ctx->pc = 0x29fee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fee4: 0xc4610864
    ctx->pc = 0x29fee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fee8: 0x46010000
    ctx->pc = 0x29fee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29feec: 0xe7a00004
    ctx->pc = 0x29feecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29fef0: 0xc4600068
    ctx->pc = 0x29fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fef4: 0xc4610868
    ctx->pc = 0x29fef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fef8: 0x46010000
    ctx->pc = 0x29fef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29fefc: 0xe7a00008
    ctx->pc = 0x29fefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29ff00: 0x3a0202d
    ctx->pc = 0x29ff00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff04: 0xc46c082c
    ctx->pc = 0x29ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29ff08: 0xc0a88aa
    ctx->pc = 0x29FF08u;
    SET_GPR_U32(ctx, 31, 0x29FF10u);
    ctx->pc = 0x29FF0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A22A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointInView_0x2a22a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF10u; }
    }
    if (ctx->pc != 0x29FF10u) { return; }
    ctx->pc = 0x29FF10u;
    // 0x29ff10: 0x46140034
    ctx->pc = 0x29ff10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ff14: 0x0
    ctx->pc = 0x29ff14u;
    // NOP
    // 0x29ff18: 0x45030001
    ctx->pc = 0x29FF18u;
    {
        const bool branch_taken_0x29ff18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ff18) {
            ctx->pc = 0x29FF1Cu;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x29FF20u;
            goto label_29ff20;
        }
    }
    ctx->pc = 0x29FF20u;
label_29ff20:
    // 0x29ff20: 0x26100001
    ctx->pc = 0x29ff20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_29ff24:
    // 0x29ff24: 0x2a020004
    ctx->pc = 0x29ff24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x29ff28: 0x5440ffe5
    ctx->pc = 0x29FF28u;
    {
        const bool branch_taken_0x29ff28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29ff28) {
            ctx->pc = 0x29FF2Cu;
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x29FEC0u;
            goto label_29fec0;
        }
    }
    ctx->pc = 0x29FF30u;
    // 0x29ff30: 0x4600a006
    ctx->pc = 0x29ff30u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x29ff34: 0xdfbf0060
    ctx->pc = 0x29ff34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ff38: 0xdfb40050
    ctx->pc = 0x29ff38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ff3c: 0xdfb30040
    ctx->pc = 0x29ff3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ff40: 0xdfb20030
    ctx->pc = 0x29ff40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ff44: 0xdfb10020
    ctx->pc = 0x29ff44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ff48: 0xdfb00010
    ctx->pc = 0x29ff48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ff4c: 0xc7b40070
    ctx->pc = 0x29ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ff50: 0x3e00008
    ctx->pc = 0x29FF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FF54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29FEC0u: goto label_29fec0;
            case 0x29FF20u: goto label_29ff20;
            case 0x29FF24u: goto label_29ff24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29FF58u;
}

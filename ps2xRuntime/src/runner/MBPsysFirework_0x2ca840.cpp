#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysFirework
// Address: 0x2ca840 - 0x2ca8fc
void MBPsysFirework_0x2ca840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ca840u;

    // 0x2ca840: 0x27bdffe0
    ctx->pc = 0x2ca840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca844: 0xffbf0000
    ctx->pc = 0x2ca844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca848: 0xe7b40010
    ctx->pc = 0x2ca848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ca84c: 0x46006d06
    ctx->pc = 0x2ca84cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2ca850: 0x3c02003a
    ctx->pc = 0x2ca850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ca854: 0x2443b670
    ctx->pc = 0x2ca854u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294948464));
    // 0x2ca858: 0xe46e00d8
    ctx->pc = 0x2ca858u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x2ca85c: 0xe46f00dc
    ctx->pc = 0x2ca85cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x2ca860: 0xe46f00e0
    ctx->pc = 0x2ca860u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x2ca864: 0xe47000e4
    ctx->pc = 0x2ca864u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x2ca868: 0xac6700c8
    ctx->pc = 0x2ca868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 7));
    // 0x2ca86c: 0xac6800cc
    ctx->pc = 0x2ca86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 8));
    // 0x2ca870: 0xac6800d0
    ctx->pc = 0x2ca870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 8));
    // 0x2ca874: 0xac6900d4
    ctx->pc = 0x2ca874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 9));
    // 0x2ca878: 0x3c013fa0
    ctx->pc = 0x2ca878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16288 << 16));
    // 0x2ca87c: 0x44810000
    ctx->pc = 0x2ca87cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca880: 0x0
    ctx->pc = 0x2ca880u;
    // NOP
    // 0x2ca884: 0x0
    ctx->pc = 0x2ca884u;
    // NOP
    // 0x2ca888: 0x46006303
    ctx->pc = 0x2ca888u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2ca88c: 0xe46c0090
    ctx->pc = 0x2ca88cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ca890: 0xa0600009
    ctx->pc = 0x2ca890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca894: 0x14c00004
    ctx->pc = 0x2CA894u;
    {
        const bool branch_taken_0x2ca894 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CA898u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2ca894) {
            ctx->pc = 0x2CA8A8u;
            goto label_2ca8a8;
        }
    }
    ctx->pc = 0x2CA89Cu;
    // 0x2ca89c: 0x24020064
    ctx->pc = 0x2ca89cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ca8a0: 0x10000003
    ctx->pc = 0x2CA8A0u;
    {
        const bool branch_taken_0x2ca8a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA8A4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x2ca8a0) {
            ctx->pc = 0x2CA8B0u;
            goto label_2ca8b0;
        }
    }
    ctx->pc = 0x2CA8A8u;
label_2ca8a8:
    // 0x2ca8a8: 0x3c02003a
    ctx->pc = 0x2ca8a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ca8ac: 0xac46b698
    ctx->pc = 0x2ca8acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948504), GPR_U32(ctx, 6));
label_2ca8b0:
    // 0x2ca8b0: 0x302d
    ctx->pc = 0x2ca8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca8b4: 0x3c07003a
    ctx->pc = 0x2ca8b4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2ca8b8: 0xc0b2814
    ctx->pc = 0x2CA8B8u;
    SET_GPR_U32(ctx, 31, 0x2CA8C0u);
    ctx->pc = 0x2CA8BCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294948464));
    ctx->pc = 0x2CA050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewPsysDescrip_0x2ca050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA8C0u; }
    }
    if (ctx->pc != 0x2CA8C0u) { return; }
    ctx->pc = 0x2CA8C0u;
    // 0x2ca8c0: 0x40202d
    ctx->pc = 0x2ca8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca8c4: 0x10800009
    ctx->pc = 0x2CA8C4u;
    {
        const bool branch_taken_0x2ca8c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA8C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8c4) {
            ctx->pc = 0x2CA8ECu;
            goto label_2ca8ec;
        }
    }
    ctx->pc = 0x2CA8CCu;
    // 0x2ca8cc: 0x8c820070
    ctx->pc = 0x2ca8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2ca8d0: 0x3c0141f0
    ctx->pc = 0x2ca8d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2ca8d4: 0x44810000
    ctx->pc = 0x2ca8d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ca8d8: 0x4600a002
    ctx->pc = 0x2ca8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2ca8dc: 0x46000064
    ctx->pc = 0x2ca8dcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2ca8e0: 0x44030800
    ctx->pc = 0x2ca8e0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x2ca8e4: 0xa4430038
    ctx->pc = 0x2ca8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca8e8: 0x80102d
    ctx->pc = 0x2ca8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ca8ec:
    // 0x2ca8ec: 0xdfbf0000
    ctx->pc = 0x2ca8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca8f0: 0xc7b40010
    ctx->pc = 0x2ca8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ca8f4: 0x3e00008
    ctx->pc = 0x2CA8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA8F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CA8A8u: goto label_2ca8a8;
            case 0x2CA8B0u: goto label_2ca8b0;
            case 0x2CA8ECu: goto label_2ca8ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CA8FCu;
}

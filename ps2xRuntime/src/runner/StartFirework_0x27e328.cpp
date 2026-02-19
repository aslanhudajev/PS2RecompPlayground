#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFirework
// Address: 0x27e328 - 0x27e3e0
void StartFirework_0x27e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e328u;

    // 0x27e328: 0x27bdffc0
    ctx->pc = 0x27e328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27e32c: 0xffbf0020
    ctx->pc = 0x27e32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27e330: 0xffb10010
    ctx->pc = 0x27e330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27e334: 0xffb00000
    ctx->pc = 0x27e334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27e338: 0xe7b50038
    ctx->pc = 0x27e338u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27e33c: 0xe7b40030
    ctx->pc = 0x27e33cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27e340: 0x80102d
    ctx->pc = 0x27e340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e344: 0xa0182d
    ctx->pc = 0x27e344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e348: 0x46006506
    ctx->pc = 0x27e348u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27e34c: 0x46006d46
    ctx->pc = 0x27e34cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x27e350: 0xc0882d
    ctx->pc = 0x27e350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e354: 0x202d
    ctx->pc = 0x27e354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e358: 0x40282d
    ctx->pc = 0x27e358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e35c: 0x60302d
    ctx->pc = 0x27e35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e360: 0x3c071002
    ctx->pc = 0x27e360u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4098 << 16));
    // 0x27e364: 0x2408ffff
    ctx->pc = 0x27e364u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e368: 0x2409ffff
    ctx->pc = 0x27e368u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e36c: 0xc09f832
    ctx->pc = 0x27E36Cu;
    SET_GPR_U32(ctx, 31, 0x27E374u);
    ctx->pc = 0x27E370u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x27E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMissile_0x27e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E374u; }
    }
    if (ctx->pc != 0x27E374u) { return; }
    ctx->pc = 0x27E374u;
    // 0x27e374: 0x40802d
    ctx->pc = 0x27e374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e378: 0x6000011
    ctx->pc = 0x27E378u;
    {
        const bool branch_taken_0x27e378 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x27E37Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27e378) {
            ctx->pc = 0x27E3C0u;
            goto label_27e3c0;
        }
    }
    ctx->pc = 0x27E380u;
    // 0x27e380: 0x24630eb0
    ctx->pc = 0x27e380u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27e384: 0x240200f0
    ctx->pc = 0x27e384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27e388: 0x2021018
    ctx->pc = 0x27e388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e38c: 0x431021
    ctx->pc = 0x27e38cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e390: 0xe45500b8
    ctx->pc = 0x27e390u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x27e394: 0xa45100c4
    ctx->pc = 0x27e394u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 196), (uint16_t)GPR_U32(ctx, 17));
    // 0x27e398: 0x202d
    ctx->pc = 0x27e398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e39c: 0x8c450014
    ctx->pc = 0x27e39cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27e3a0: 0x4600a306
    ctx->pc = 0x27e3a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27e3a4: 0x3c013f00
    ctx->pc = 0x27e3a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27e3a8: 0x44816800
    ctx->pc = 0x27e3a8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27e3ac: 0x3c014000
    ctx->pc = 0x27e3acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x27e3b0: 0x44817000
    ctx->pc = 0x27e3b0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x27e3b4: 0x3c06003a
    ctx->pc = 0x27e3b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x27e3b8: 0xc0b2a40
    ctx->pc = 0x27E3B8u;
    SET_GPR_U32(ctx, 31, 0x27E3C0u);
    ctx->pc = 0x27E3BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 9520));
    ctx->pc = 0x2CA900u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysFlame_0x2ca900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3C0u; }
    }
    if (ctx->pc != 0x27E3C0u) { return; }
    ctx->pc = 0x27E3C0u;
label_27e3c0:
    // 0x27e3c0: 0x200102d
    ctx->pc = 0x27e3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e3c4: 0xdfbf0020
    ctx->pc = 0x27e3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e3c8: 0xdfb10010
    ctx->pc = 0x27e3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e3cc: 0xdfb00000
    ctx->pc = 0x27e3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e3d0: 0xc7b50038
    ctx->pc = 0x27e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27e3d4: 0xc7b40030
    ctx->pc = 0x27e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e3d8: 0x3e00008
    ctx->pc = 0x27E3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E3DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E3C0u: goto label_27e3c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E3E0u;
}

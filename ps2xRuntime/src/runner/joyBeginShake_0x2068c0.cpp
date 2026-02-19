#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: joyBeginShake
// Address: 0x2068c0 - 0x206960
void joyBeginShake_0x2068c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2068c0u;

    // 0x2068c0: 0x27bdffc0
    ctx->pc = 0x2068c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2068c4: 0xffbf0020
    ctx->pc = 0x2068c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2068c8: 0xffb00010
    ctx->pc = 0x2068c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2068cc: 0xe7b40030
    ctx->pc = 0x2068ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2068d0: 0x80802d
    ctx->pc = 0x2068d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068d4: 0x3c02003c
    ctx->pc = 0x2068d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2068d8: 0x2442bdc0
    ctx->pc = 0x2068d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950336));
    // 0x2068dc: 0x101880
    ctx->pc = 0x2068dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2068e0: 0x621821
    ctx->pc = 0x2068e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2068e4: 0x8c620000
    ctx->pc = 0x2068e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2068e8: 0x10400018
    ctx->pc = 0x2068E8u;
    {
        const bool branch_taken_0x2068e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2068ECu;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x2068e8) {
            ctx->pc = 0x20694Cu;
            goto label_20694c;
        }
    }
    ctx->pc = 0x2068F0u;
    // 0x2068f0: 0x3c020031
    ctx->pc = 0x2068f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2068f4: 0x8c420f08
    ctx->pc = 0x2068f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2068f8: 0x14400015
    ctx->pc = 0x2068F8u;
    {
        const bool branch_taken_0x2068f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2068FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2068f8) {
            ctx->pc = 0x206950u;
            goto label_206950;
        }
    }
    ctx->pc = 0x206900u;
    // 0x206900: 0x3a0202d
    ctx->pc = 0x206900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206904: 0x282d
    ctx->pc = 0x206904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206908: 0xc0becc6
    ctx->pc = 0x206908u;
    SET_GPR_U32(ctx, 31, 0x206910u);
    ctx->pc = 0x20690Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206910u; }
    }
    if (ctx->pc != 0x206910u) { return; }
    ctx->pc = 0x206910u;
    // 0x206910: 0xa3a00000
    ctx->pc = 0x206910u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x206914: 0x3c01437f
    ctx->pc = 0x206914u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x206918: 0x44810000
    ctx->pc = 0x206918u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x20691c: 0x4600a002
    ctx->pc = 0x20691cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x206920: 0x46000064
    ctx->pc = 0x206920u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x206924: 0x44020800
    ctx->pc = 0x206924u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x206928: 0xa3a20001
    ctx->pc = 0x206928u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x20692c: 0x26040003
    ctx->pc = 0x20692cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 3));
    // 0x206930: 0x2402ffff
    ctx->pc = 0x206930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206934: 0x50102a
    ctx->pc = 0x206934u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x206938: 0x202200b
    ctx->pc = 0x206938u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 16));
    // 0x20693c: 0x42083
    ctx->pc = 0x20693cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x206940: 0x32050003
    ctx->pc = 0x206940u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 3));
    // 0x206944: 0xc0b9234
    ctx->pc = 0x206944u;
    SET_GPR_U32(ctx, 31, 0x20694Cu);
    ctx->pc = 0x206948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E48D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadSetActDirect_0x2e48d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20694Cu; }
    }
    if (ctx->pc != 0x20694Cu) { return; }
    ctx->pc = 0x20694Cu;
label_20694c:
    // 0x20694c: 0xdfbf0020
    ctx->pc = 0x20694cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_206950:
    // 0x206950: 0xdfb00010
    ctx->pc = 0x206950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206954: 0xc7b40030
    ctx->pc = 0x206954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206958: 0x3e00008
    ctx->pc = 0x206958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20695Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20694Cu: goto label_20694c;
            case 0x206950u: goto label_206950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206960u;
}

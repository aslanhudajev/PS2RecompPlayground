#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartEnemyGrid
// Address: 0x2802c0 - 0x2803a8
void StartEnemyGrid_0x2802c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2802c0u;

    // 0x2802c0: 0x27bdffb0
    ctx->pc = 0x2802c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2802c4: 0xffbf0030
    ctx->pc = 0x2802c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2802c8: 0xffb20020
    ctx->pc = 0x2802c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2802cc: 0xffb10010
    ctx->pc = 0x2802ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2802d0: 0xffb00000
    ctx->pc = 0x2802d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2802d4: 0xe7b40040
    ctx->pc = 0x2802d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2802d8: 0x44800000
    ctx->pc = 0x2802d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2802dc: 0x460c0034
    ctx->pc = 0x2802dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2802e0: 0x0
    ctx->pc = 0x2802e0u;
    // NOP
    // 0x2802e4: 0x45000005
    ctx->pc = 0x2802E4u;
    {
        const bool branch_taken_0x2802e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2802E8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2802e4) {
            ctx->pc = 0x2802FCu;
            goto label_2802fc;
        }
    }
    ctx->pc = 0x2802ECu;
    // 0x2802ec: 0x3c020035
    ctx->pc = 0x2802ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2802f0: 0xc44096b4
    ctx->pc = 0x2802f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2802f4: 0x10000002
    ctx->pc = 0x2802F4u;
    {
        const bool branch_taken_0x2802f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2802F8u;
        ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2802f4) {
            ctx->pc = 0x280300u;
            goto label_280300;
        }
    }
    ctx->pc = 0x2802FCu;
label_2802fc:
    // 0x2802fc: 0x46006507
    ctx->pc = 0x2802fcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[12]);
label_280300:
    // 0x280300: 0xc64c0000
    ctx->pc = 0x280300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280304: 0xc09fff6
    ctx->pc = 0x280304u;
    SET_GPR_U32(ctx, 31, 0x28030Cu);
    ctx->pc = 0x280308u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x27FFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridX_0x27ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28030Cu; }
    }
    if (ctx->pc != 0x28030Cu) { return; }
    ctx->pc = 0x28030Cu;
    // 0x28030c: 0x3c11003c
    ctx->pc = 0x28030cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x280310: 0xae223a78
    ctx->pc = 0x280310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14968), GPR_U32(ctx, 2));
    // 0x280314: 0xc64c0008
    ctx->pc = 0x280314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280318: 0xc0a0006
    ctx->pc = 0x280318u;
    SET_GPR_U32(ctx, 31, 0x280320u);
    ctx->pc = 0x28031Cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x280018u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridZ_0x280018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280320u; }
    }
    if (ctx->pc != 0x280320u) { return; }
    ctx->pc = 0x280320u;
    // 0x280320: 0x3c10003c
    ctx->pc = 0x280320u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x280324: 0xae023a7c
    ctx->pc = 0x280324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14972), GPR_U32(ctx, 2));
    // 0x280328: 0xc64c0000
    ctx->pc = 0x280328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28032c: 0xc09fff6
    ctx->pc = 0x28032Cu;
    SET_GPR_U32(ctx, 31, 0x280334u);
    ctx->pc = 0x280330u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x27FFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridX_0x27ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280334u; }
    }
    if (ctx->pc != 0x280334u) { return; }
    ctx->pc = 0x280334u;
    // 0x280334: 0x3c03003c
    ctx->pc = 0x280334u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x280338: 0xac623a80
    ctx->pc = 0x280338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14976), GPR_U32(ctx, 2));
    // 0x28033c: 0xc64c0008
    ctx->pc = 0x28033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280340: 0xc0a0006
    ctx->pc = 0x280340u;
    SET_GPR_U32(ctx, 31, 0x280348u);
    ctx->pc = 0x280344u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x280018u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridZ_0x280018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280348u; }
    }
    if (ctx->pc != 0x280348u) { return; }
    ctx->pc = 0x280348u;
    // 0x280348: 0x3c03003c
    ctx->pc = 0x280348u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28034c: 0xac623a84
    ctx->pc = 0x28034cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14980), GPR_U32(ctx, 2));
    // 0x280350: 0x3c03003c
    ctx->pc = 0x280350u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x280354: 0x8e223a78
    ctx->pc = 0x280354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 14968)));
    // 0x280358: 0xac623a70
    ctx->pc = 0x280358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14960), GPR_U32(ctx, 2));
    // 0x28035c: 0x3c03003c
    ctx->pc = 0x28035cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x280360: 0x8e043a7c
    ctx->pc = 0x280360u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 14972)));
    // 0x280364: 0xac643a74
    ctx->pc = 0x280364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14964), GPR_U32(ctx, 4));
    // 0x280368: 0x3c05003c
    ctx->pc = 0x280368u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x28036c: 0x3c030034
    ctx->pc = 0x28036cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x280370: 0x246356a8
    ctx->pc = 0x280370u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 22184));
    // 0x280374: 0x21080
    ctx->pc = 0x280374u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x280378: 0x42200
    ctx->pc = 0x280378u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x28037c: 0x441021
    ctx->pc = 0x28037cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x280380: 0x431021
    ctx->pc = 0x280380u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280384: 0x84420000
    ctx->pc = 0x280384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280388: 0xaca23a88
    ctx->pc = 0x280388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14984), GPR_U32(ctx, 2));
    // 0x28038c: 0xdfbf0030
    ctx->pc = 0x28038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280390: 0xdfb20020
    ctx->pc = 0x280390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280394: 0xdfb10010
    ctx->pc = 0x280394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280398: 0xdfb00000
    ctx->pc = 0x280398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28039c: 0xc7b40040
    ctx->pc = 0x28039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2803a0: 0x3e00008
    ctx->pc = 0x2803A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2803A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2802FCu: goto label_2802fc;
            case 0x280300u: goto label_280300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2803A8u;
}

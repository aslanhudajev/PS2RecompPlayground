#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartEnemyDeathFX
// Address: 0x27f490 - 0x27f570
void StartEnemyDeathFX_0x27f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f490u;

    // 0x27f490: 0x27bdffc0
    ctx->pc = 0x27f490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27f494: 0xffbf0030
    ctx->pc = 0x27f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27f498: 0xffb10020
    ctx->pc = 0x27f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27f49c: 0xffb00010
    ctx->pc = 0x27f49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27f4a0: 0x80802d
    ctx->pc = 0x27f4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4a4: 0x3c020034
    ctx->pc = 0x27f4a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27f4a8: 0x8c424ed8
    ctx->pc = 0x27f4a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20184)));
    // 0x27f4ac: 0x1040002a
    ctx->pc = 0x27F4ACu;
    {
        const bool branch_taken_0x27f4ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F4B0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27f4ac) {
            ctx->pc = 0x27F558u;
            goto label_27f558;
        }
    }
    ctx->pc = 0x27F4B4u;
    // 0x27f4b4: 0x24040058
    ctx->pc = 0x27f4b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 88));
    // 0x27f4b8: 0x26050030
    ctx->pc = 0x27f4b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
    // 0x27f4bc: 0x44806000
    ctx->pc = 0x27f4bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27f4c0: 0x34068c01
    ctx->pc = 0x27f4c0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 35841));
    // 0x27f4c4: 0x3c070002
    ctx->pc = 0x27f4c4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)2 << 16));
    // 0x27f4c8: 0xc09f5fa
    ctx->pc = 0x27F4C8u;
    SET_GPR_U32(ctx, 31, 0x27F4D0u);
    ctx->pc = 0x27F4CCu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4D0u; }
    }
    if (ctx->pc != 0x27F4D0u) { return; }
    ctx->pc = 0x27F4D0u;
    // 0x27f4d0: 0x40882d
    ctx->pc = 0x27f4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4d4: 0xc6000020
    ctx->pc = 0x27f4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f4d8: 0x3c0141a0
    ctx->pc = 0x27f4d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x27f4dc: 0x44810800
    ctx->pc = 0x27f4dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27f4e0: 0x46010002
    ctx->pc = 0x27f4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27f4e4: 0xe7a00000
    ctx->pc = 0x27f4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27f4e8: 0xc6000024
    ctx->pc = 0x27f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f4ec: 0x46010002
    ctx->pc = 0x27f4ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27f4f0: 0xe7a00004
    ctx->pc = 0x27f4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27f4f4: 0xc6000028
    ctx->pc = 0x27f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f4f8: 0x46010002
    ctx->pc = 0x27f4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27f4fc: 0xe7a00008
    ctx->pc = 0x27f4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27f500: 0x220202d
    ctx->pc = 0x27f500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f504: 0x3a0282d
    ctx->pc = 0x27f504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f508: 0x44806000
    ctx->pc = 0x27f508u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27f50c: 0x3c014040
    ctx->pc = 0x27f50cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x27f510: 0x44816800
    ctx->pc = 0x27f510u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27f514: 0xc09f794
    ctx->pc = 0x27F514u;
    SET_GPR_U32(ctx, 31, 0x27F51Cu);
    ctx->pc = 0x27F518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F51Cu; }
    }
    if (ctx->pc != 0x27F51Cu) { return; }
    ctx->pc = 0x27F51Cu;
    // 0x27f51c: 0x220202d
    ctx->pc = 0x27f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f520: 0x3c014248
    ctx->pc = 0x27f520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x27f524: 0x44816000
    ctx->pc = 0x27f524u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27f528: 0x3c050010
    ctx->pc = 0x27f528u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16 << 16));
    // 0x27f52c: 0x34a50020
    ctx->pc = 0x27f52cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 32));
    // 0x27f530: 0x44806800
    ctx->pc = 0x27f530u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x27f534: 0x46006b86
    ctx->pc = 0x27f534u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x27f538: 0xc09f780
    ctx->pc = 0x27F538u;
    SET_GPR_U32(ctx, 31, 0x27F540u);
    ctx->pc = 0x27F53Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F540u; }
    }
    if (ctx->pc != 0x27F540u) { return; }
    ctx->pc = 0x27F540u;
    // 0x27f540: 0x220202d
    ctx->pc = 0x27f540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f544: 0x24050059
    ctx->pc = 0x27f544u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 89));
    // 0x27f548: 0x3c014040
    ctx->pc = 0x27f548u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x27f54c: 0x44816000
    ctx->pc = 0x27f54cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27f550: 0xc09f802
    ctx->pc = 0x27F550u;
    SET_GPR_U32(ctx, 31, 0x27F558u);
    ctx->pc = 0x27F554u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x27E008u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMorph_0x27e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F558u; }
    }
    if (ctx->pc != 0x27F558u) { return; }
    ctx->pc = 0x27F558u;
label_27f558:
    // 0x27f558: 0x220102d
    ctx->pc = 0x27f558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f55c: 0xdfbf0030
    ctx->pc = 0x27f55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f560: 0xdfb10020
    ctx->pc = 0x27f560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f564: 0xdfb00010
    ctx->pc = 0x27f564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f568: 0x3e00008
    ctx->pc = 0x27F568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F56Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F558u: goto label_27f558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F570u;
}

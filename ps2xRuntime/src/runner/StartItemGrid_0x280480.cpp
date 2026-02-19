#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartItemGrid
// Address: 0x280480 - 0x280568
void StartItemGrid_0x280480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280480u;

    // 0x280480: 0x27bdffb0
    ctx->pc = 0x280480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x280484: 0xffbf0030
    ctx->pc = 0x280484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x280488: 0xffb20020
    ctx->pc = 0x280488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28048c: 0xffb10010
    ctx->pc = 0x28048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x280490: 0xffb00000
    ctx->pc = 0x280490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280494: 0xe7b40040
    ctx->pc = 0x280494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x280498: 0x44800000
    ctx->pc = 0x280498u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x28049c: 0x460c0034
    ctx->pc = 0x28049cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2804a0: 0x0
    ctx->pc = 0x2804a0u;
    // NOP
    // 0x2804a4: 0x45000005
    ctx->pc = 0x2804A4u;
    {
        const bool branch_taken_0x2804a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2804A8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2804a4) {
            ctx->pc = 0x2804BCu;
            goto label_2804bc;
        }
    }
    ctx->pc = 0x2804ACu;
    // 0x2804ac: 0x3c020035
    ctx->pc = 0x2804acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2804b0: 0xc44096b8
    ctx->pc = 0x2804b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2804b4: 0x10000002
    ctx->pc = 0x2804B4u;
    {
        const bool branch_taken_0x2804b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2804B8u;
        ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2804b4) {
            ctx->pc = 0x2804C0u;
            goto label_2804c0;
        }
    }
    ctx->pc = 0x2804BCu;
label_2804bc:
    // 0x2804bc: 0x46006507
    ctx->pc = 0x2804bcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[12]);
label_2804c0:
    // 0x2804c0: 0xc64c0000
    ctx->pc = 0x2804c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2804c4: 0xc09fff6
    ctx->pc = 0x2804C4u;
    SET_GPR_U32(ctx, 31, 0x2804CCu);
    ctx->pc = 0x2804C8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x27FFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridX_0x27ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804CCu; }
    }
    if (ctx->pc != 0x2804CCu) { return; }
    ctx->pc = 0x2804CCu;
    // 0x2804cc: 0x3c11003c
    ctx->pc = 0x2804ccu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x2804d0: 0xae223a94
    ctx->pc = 0x2804d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14996), GPR_U32(ctx, 2));
    // 0x2804d4: 0xc64c0008
    ctx->pc = 0x2804d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2804d8: 0xc0a0006
    ctx->pc = 0x2804D8u;
    SET_GPR_U32(ctx, 31, 0x2804E0u);
    ctx->pc = 0x2804DCu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x280018u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridZ_0x280018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804E0u; }
    }
    if (ctx->pc != 0x2804E0u) { return; }
    ctx->pc = 0x2804E0u;
    // 0x2804e0: 0x3c10003c
    ctx->pc = 0x2804e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2804e4: 0xae023a98
    ctx->pc = 0x2804e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15000), GPR_U32(ctx, 2));
    // 0x2804e8: 0xc64c0000
    ctx->pc = 0x2804e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2804ec: 0xc09fff6
    ctx->pc = 0x2804ECu;
    SET_GPR_U32(ctx, 31, 0x2804F4u);
    ctx->pc = 0x2804F0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x27FFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridX_0x27ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804F4u; }
    }
    if (ctx->pc != 0x2804F4u) { return; }
    ctx->pc = 0x2804F4u;
    // 0x2804f4: 0x3c03003c
    ctx->pc = 0x2804f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2804f8: 0xac623a9c
    ctx->pc = 0x2804f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15004), GPR_U32(ctx, 2));
    // 0x2804fc: 0xc64c0008
    ctx->pc = 0x2804fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280500: 0xc0a0006
    ctx->pc = 0x280500u;
    SET_GPR_U32(ctx, 31, 0x280508u);
    ctx->pc = 0x280504u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x280018u;
    {
        const uint32_t __entryPc = ctx->pc;
        DynGridZ_0x280018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280508u; }
    }
    if (ctx->pc != 0x280508u) { return; }
    ctx->pc = 0x280508u;
    // 0x280508: 0x3c03003c
    ctx->pc = 0x280508u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28050c: 0xac623aa0
    ctx->pc = 0x28050cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15008), GPR_U32(ctx, 2));
    // 0x280510: 0x3c02003c
    ctx->pc = 0x280510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x280514: 0x8e243a94
    ctx->pc = 0x280514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 14996)));
    // 0x280518: 0xac443a8c
    ctx->pc = 0x280518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14988), GPR_U32(ctx, 4));
    // 0x28051c: 0x3c02003c
    ctx->pc = 0x28051cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x280520: 0x8e033a98
    ctx->pc = 0x280520u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 15000)));
    // 0x280524: 0xac433a90
    ctx->pc = 0x280524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14992), GPR_U32(ctx, 3));
    // 0x280528: 0x3c05003c
    ctx->pc = 0x280528u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x28052c: 0x3c020034
    ctx->pc = 0x28052cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x280530: 0x244256a8
    ctx->pc = 0x280530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22184));
    // 0x280534: 0x42080
    ctx->pc = 0x280534u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x280538: 0x31a00
    ctx->pc = 0x280538u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x28053c: 0x832021
    ctx->pc = 0x28053cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x280540: 0x441021
    ctx->pc = 0x280540u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x280544: 0x84420002
    ctx->pc = 0x280544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x280548: 0xaca23aa4
    ctx->pc = 0x280548u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15012), GPR_U32(ctx, 2));
    // 0x28054c: 0xdfbf0030
    ctx->pc = 0x28054cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280550: 0xdfb20020
    ctx->pc = 0x280550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280554: 0xdfb10010
    ctx->pc = 0x280554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280558: 0xdfb00000
    ctx->pc = 0x280558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28055c: 0xc7b40040
    ctx->pc = 0x28055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280560: 0x3e00008
    ctx->pc = 0x280560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280564u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2804BCu: goto label_2804bc;
            case 0x2804C0u: goto label_2804c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280568u;
}

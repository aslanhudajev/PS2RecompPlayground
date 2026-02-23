#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_RankSprPutTask__Fiffi
// Address: 0x2259f0 - 0x225a8c
void new_RankSprPutTask__Fiffi_0x2259f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_RankSprPutTask__Fiffi");


    ctx->pc = 0x2259f0u;

    // 0x2259f0: 0x27bdffa0
    ctx->pc = 0x2259f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2259f4: 0x7fbf0050
    ctx->pc = 0x2259f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2259f8: 0x7fb30040
    ctx->pc = 0x2259f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2259fc: 0x7fb20030
    ctx->pc = 0x2259fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x225a00: 0x7fb10020
    ctx->pc = 0x225a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x225a04: 0x7fb00010
    ctx->pc = 0x225a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x225a08: 0xe7b50004
    ctx->pc = 0x225a08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x225a0c: 0xe7b40000
    ctx->pc = 0x225a0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x225a10: 0x70809e28
    ctx->pc = 0x225a10u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x225a14: 0x46006546
    ctx->pc = 0x225a14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x225a18: 0x46006d06
    ctx->pc = 0x225a18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x225a1c: 0xc06903c
    ctx->pc = 0x225A1Cu;
    SET_GPR_U32(ctx, 31, 0x225A24u);
    ctx->pc = 0x225A20u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A24u; }
        else if (ctx->pc != 0x225A24u) { ctx->pc = 0x225A24u; }
    }
    if (ctx->pc != 0x225A24u) { return; }
    ctx->pc = 0x225A24u;
    // 0x225a24: 0xc06903c
    ctx->pc = 0x225A24u;
    SET_GPR_U32(ctx, 31, 0x225A2Cu);
    ctx->pc = 0x225A28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A2Cu; }
        else if (ctx->pc != 0x225A2Cu) { ctx->pc = 0x225A2Cu; }
    }
    if (ctx->pc != 0x225A2Cu) { return; }
    ctx->pc = 0x225A2Cu;
    // 0x225a2c: 0xc06903c
    ctx->pc = 0x225A2Cu;
    SET_GPR_U32(ctx, 31, 0x225A34u);
    ctx->pc = 0x225A30u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A34u; }
        else if (ctx->pc != 0x225A34u) { ctx->pc = 0x225A34u; }
    }
    if (ctx->pc != 0x225A34u) { return; }
    ctx->pc = 0x225A34u;
    // 0x225a34: 0x8e260010
    ctx->pc = 0x225a34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x225a38: 0x8e070014
    ctx->pc = 0x225a38u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x225a3c: 0x24040098
    ctx->pc = 0x225a3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 152));
    // 0x225a40: 0x70002e28
    ctx->pc = 0x225a40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225a44: 0xc069040
    ctx->pc = 0x225A44u;
    SET_GPR_U32(ctx, 31, 0x225A4Cu);
    ctx->pc = 0x225A48u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A4Cu; }
        else if (ctx->pc != 0x225A4Cu) { ctx->pc = 0x225A4Cu; }
    }
    if (ctx->pc != 0x225A4Cu) { return; }
    ctx->pc = 0x225A4Cu;
    // 0x225a4c: 0x70402628
    ctx->pc = 0x225a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x225a50: 0x10800005
    ctx->pc = 0x225A50u;
    {
        const bool branch_taken_0x225a50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x225A54u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x225a50) {
            ctx->pc = 0x225A68u;
            goto label_225a68;
        }
    }
    ctx->pc = 0x225A58u;
    // 0x225a58: 0x4600ab06
    ctx->pc = 0x225a58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x225a5c: 0x4600a346
    ctx->pc = 0x225a5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x225a60: 0xc089634
    ctx->pc = 0x225A60u;
    SET_GPR_U32(ctx, 31, 0x225A68u);
    ctx->pc = 0x225A64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2258D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11TRankSprPutFiffi_0x2258d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A68u; }
        else if (ctx->pc != 0x225A68u) { ctx->pc = 0x225A68u; }
    }
    if (ctx->pc != 0x225A68u) { return; }
    ctx->pc = 0x225A68u;
label_225a68:
    // 0x225a68: 0x7bbf0050
    ctx->pc = 0x225a68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x225a6c: 0x7bb30040
    ctx->pc = 0x225a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225a70: 0x7bb20030
    ctx->pc = 0x225a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225a74: 0x7bb10020
    ctx->pc = 0x225a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225a78: 0x7bb00010
    ctx->pc = 0x225a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225a7c: 0xc7b50004
    ctx->pc = 0x225a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x225a80: 0xc7b40000
    ctx->pc = 0x225a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225a84: 0x3e00008
    ctx->pc = 0x225A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225A68u: goto label_225a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225A8Cu;
}

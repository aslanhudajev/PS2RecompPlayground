#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaMotDataImm__16FaceAnimMgrClassFi
// Address: 0x1e6410 - 0x1e64d8
void entryFaMotDataImm__16FaceAnimMgrClassFi_0x1e6410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaMotDataImm__16FaceAnimMgrClassFi");


    ctx->pc = 0x1e6410u;

    // 0x1e6410: 0x27bdffc0
    ctx->pc = 0x1e6410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e6414: 0x7fbf0030
    ctx->pc = 0x1e6414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e6418: 0x7fb20020
    ctx->pc = 0x1e6418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e641c: 0x7fb10010
    ctx->pc = 0x1e641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6420: 0x51040
    ctx->pc = 0x1e6420u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e6424: 0x7fb00000
    ctx->pc = 0x1e6424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6428: 0x451021
    ctx->pc = 0x1e6428u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e642c: 0x28080
    ctx->pc = 0x1e642cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6430: 0x3c020027
    ctx->pc = 0x1e6430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e6434: 0x2442b7a0
    ctx->pc = 0x1e6434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x1e6438: 0x3c010050
    ctx->pc = 0x1e6438u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e643c: 0x70a08e28
    ctx->pc = 0x1e643cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6440: 0x501021
    ctx->pc = 0x1e6440u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e6444: 0x8c450000
    ctx->pc = 0x1e6444u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6448: 0x8c240c7c
    ctx->pc = 0x1e6448u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    // 0x1e644c: 0xc05af94
    ctx->pc = 0x1E644Cu;
    SET_GPR_U32(ctx, 31, 0x1E6454u);
    ctx->pc = 0x1E6450u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6454u; }
        else if (ctx->pc != 0x1E6454u) { ctx->pc = 0x1E6454u; }
    }
    if (ctx->pc != 0x1E6454u) { return; }
    ctx->pc = 0x1E6454u;
    // 0x1e6454: 0x3c030050
    ctx->pc = 0x1e6454u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e6458: 0x112080
    ctx->pc = 0x1e6458u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e645c: 0x24630a80
    ctx->pc = 0x1e645cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2688));
    // 0x1e6460: 0x648821
    ctx->pc = 0x1e6460u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6464: 0x3c030027
    ctx->pc = 0x1e6464u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1e6468: 0x2405ffff
    ctx->pc = 0x1e6468u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e646c: 0x2463b7a4
    ctx->pc = 0x1e646cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948772));
    // 0x1e6470: 0xae250000
    ctx->pc = 0x1e6470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x1e6474: 0x701821
    ctx->pc = 0x1e6474u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e6478: 0x8c700000
    ctx->pc = 0x1e6478u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e647c: 0x12000010
    ctx->pc = 0x1E647Cu;
    {
        const bool branch_taken_0x1e647c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e647c) {
            ctx->pc = 0x1E64C0u;
            goto label_1e64c0;
        }
    }
    ctx->pc = 0x1E6484u;
    // 0x1e6484: 0x1012c0
    ctx->pc = 0x1e6484u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 11));
    // 0x1e6488: 0xc06878c
    ctx->pc = 0x1E6488u;
    SET_GPR_U32(ctx, 31, 0x1E6490u);
    ctx->pc = 0x1E648Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6490u; }
        else if (ctx->pc != 0x1E6490u) { ctx->pc = 0x1E6490u; }
    }
    if (ctx->pc != 0x1E6490u) { return; }
    ctx->pc = 0x1E6490u;
    // 0x1e6490: 0x3c010050
    ctx->pc = 0x1e6490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e6494: 0x8c240c7c
    ctx->pc = 0x1e6494u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    // 0x1e6498: 0x70409628
    ctx->pc = 0x1e6498u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e649c: 0x2643003f
    ctx->pc = 0x1e649cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 63));
    // 0x1e64a0: 0x2402ffc0
    ctx->pc = 0x1e64a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e64a4: 0x72002e28
    ctx->pc = 0x1e64a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e64a8: 0xc05aeba
    ctx->pc = 0x1E64A8u;
    SET_GPR_U32(ctx, 31, 0x1E64B0u);
    ctx->pc = 0x1E64ACu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64B0u; }
        else if (ctx->pc != 0x1E64B0u) { ctx->pc = 0x1E64B0u; }
    }
    if (ctx->pc != 0x1E64B0u) { return; }
    ctx->pc = 0x1E64B0u;
    // 0x1e64b0: 0x3c010050
    ctx->pc = 0x1e64b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e64b4: 0xc07a6a8
    ctx->pc = 0x1E64B4u;
    SET_GPR_U32(ctx, 31, 0x1E64BCu);
    ctx->pc = 0x1E64B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    ctx->pc = 0x1E9AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXF_WaitReadFinish__FP7_adx_fs_0x1e9aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64BCu; }
        else if (ctx->pc != 0x1E64BCu) { ctx->pc = 0x1E64BCu; }
    }
    if (ctx->pc != 0x1E64BCu) { return; }
    ctx->pc = 0x1E64BCu;
    // 0x1e64bc: 0xae320000
    ctx->pc = 0x1e64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_1e64c0:
    // 0x1e64c0: 0x7bbf0030
    ctx->pc = 0x1e64c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e64c4: 0x7bb20020
    ctx->pc = 0x1e64c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e64c8: 0x7bb10010
    ctx->pc = 0x1e64c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e64cc: 0x7bb00000
    ctx->pc = 0x1e64ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e64d0: 0x3e00008
    ctx->pc = 0x1E64D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E64D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E64C0u: goto label_1e64c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E64D8u;
}

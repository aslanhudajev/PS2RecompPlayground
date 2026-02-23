#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: data_set__16FaceAnimMgrClassFi
// Address: 0x1e5c20 - 0x1e5cf4
void data_set__16FaceAnimMgrClassFi_0x1e5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("data_set__16FaceAnimMgrClassFi");


    ctx->pc = 0x1e5c20u;

    // 0x1e5c20: 0x27bdffd0
    ctx->pc = 0x1e5c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5c24: 0x7fbf0020
    ctx->pc = 0x1e5c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e5c28: 0x7fb10010
    ctx->pc = 0x1e5c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5c2c: 0x3c030050
    ctx->pc = 0x1e5c2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e5c30: 0x7fb00000
    ctx->pc = 0x1e5c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5c34: 0x52080
    ctx->pc = 0x1e5c34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e5c38: 0x246308b0
    ctx->pc = 0x1e5c38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2224));
    // 0x1e5c3c: 0x648021
    ctx->pc = 0x1e5c3cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5c40: 0x8e030000
    ctx->pc = 0x1e5c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e5c44: 0x14600026
    ctx->pc = 0x1E5C44u;
    {
        const bool branch_taken_0x1e5c44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E5C48u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e5c44) {
            ctx->pc = 0x1E5CE0u;
            goto label_1e5ce0;
        }
    }
    ctx->pc = 0x1E5C4Cu;
    // 0x1e5c4c: 0x3c010050
    ctx->pc = 0x1e5c4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5c50: 0xc05b018
    ctx->pc = 0x1E5C50u;
    SET_GPR_U32(ctx, 31, 0x1E5C58u);
    ctx->pc = 0x1E5C54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3192)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C58u; }
        else if (ctx->pc != 0x1E5C58u) { ctx->pc = 0x1E5C58u; }
    }
    if (ctx->pc != 0x1E5C58u) { return; }
    ctx->pc = 0x1E5C58u;
    // 0x1e5c58: 0x24030003
    ctx->pc = 0x1e5c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5c5c: 0x14430020
    ctx->pc = 0x1E5C5Cu;
    {
        const bool branch_taken_0x1e5c5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e5c5c) {
            ctx->pc = 0x1E5CE0u;
            goto label_1e5ce0;
        }
    }
    ctx->pc = 0x1E5C64u;
    // 0x1e5c64: 0x111040
    ctx->pc = 0x1e5c64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e5c68: 0x511021
    ctx->pc = 0x1e5c68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e5c6c: 0x28880
    ctx->pc = 0x1e5c6cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5c70: 0x3c020027
    ctx->pc = 0x1e5c70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e5c74: 0x2442b240
    ctx->pc = 0x1e5c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x1e5c78: 0x511021
    ctx->pc = 0x1e5c78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e5c7c: 0x3c010050
    ctx->pc = 0x1e5c7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5c80: 0x8c450000
    ctx->pc = 0x1e5c80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5c84: 0x8c240c78
    ctx->pc = 0x1e5c84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3192)));
    // 0x1e5c88: 0xc05af94
    ctx->pc = 0x1E5C88u;
    SET_GPR_U32(ctx, 31, 0x1E5C90u);
    ctx->pc = 0x1E5C8Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C90u; }
        else if (ctx->pc != 0x1E5C90u) { ctx->pc = 0x1E5C90u; }
    }
    if (ctx->pc != 0x1E5C90u) { return; }
    ctx->pc = 0x1E5C90u;
    // 0x1e5c90: 0x3c030027
    ctx->pc = 0x1e5c90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1e5c94: 0x2463b244
    ctx->pc = 0x1e5c94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947396));
    // 0x1e5c98: 0x711821
    ctx->pc = 0x1e5c98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e5c9c: 0x8c710000
    ctx->pc = 0x1e5c9cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5ca0: 0x1220000f
    ctx->pc = 0x1E5CA0u;
    {
        const bool branch_taken_0x1e5ca0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5ca0) {
            ctx->pc = 0x1E5CE0u;
            goto label_1e5ce0;
        }
    }
    ctx->pc = 0x1E5CA8u;
    // 0x1e5ca8: 0x1112c0
    ctx->pc = 0x1e5ca8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 11));
    // 0x1e5cac: 0xc06878c
    ctx->pc = 0x1E5CACu;
    SET_GPR_U32(ctx, 31, 0x1E5CB4u);
    ctx->pc = 0x1E5CB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CB4u; }
        else if (ctx->pc != 0x1E5CB4u) { ctx->pc = 0x1E5CB4u; }
    }
    if (ctx->pc != 0x1E5CB4u) { return; }
    ctx->pc = 0x1E5CB4u;
    // 0x1e5cb4: 0xae020000
    ctx->pc = 0x1e5cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e5cb8: 0x3c010050
    ctx->pc = 0x1e5cb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5cbc: 0x8c240c78
    ctx->pc = 0x1e5cbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3192)));
    // 0x1e5cc0: 0x2443003f
    ctx->pc = 0x1e5cc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 63));
    // 0x1e5cc4: 0x2402ffc0
    ctx->pc = 0x1e5cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e5cc8: 0x72202e28
    ctx->pc = 0x1e5cc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e5ccc: 0xc05aeba
    ctx->pc = 0x1E5CCCu;
    SET_GPR_U32(ctx, 31, 0x1E5CD4u);
    ctx->pc = 0x1E5CD0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CD4u; }
        else if (ctx->pc != 0x1E5CD4u) { ctx->pc = 0x1E5CD4u; }
    }
    if (ctx->pc != 0x1E5CD4u) { return; }
    ctx->pc = 0x1E5CD4u;
    // 0x1e5cd4: 0x3c010050
    ctx->pc = 0x1e5cd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5cd8: 0xc07a6a8
    ctx->pc = 0x1E5CD8u;
    SET_GPR_U32(ctx, 31, 0x1E5CE0u);
    ctx->pc = 0x1E5CDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3192)));
    ctx->pc = 0x1E9AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXF_WaitReadFinish__FP7_adx_fs_0x1e9aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CE0u; }
        else if (ctx->pc != 0x1E5CE0u) { ctx->pc = 0x1E5CE0u; }
    }
    if (ctx->pc != 0x1E5CE0u) { return; }
    ctx->pc = 0x1E5CE0u;
label_1e5ce0:
    // 0x1e5ce0: 0x7bbf0020
    ctx->pc = 0x1e5ce0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5ce4: 0x7bb10010
    ctx->pc = 0x1e5ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5ce8: 0x7bb00000
    ctx->pc = 0x1e5ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5cec: 0x3e00008
    ctx->pc = 0x1E5CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5CE0u: goto label_1e5ce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5CF4u;
}

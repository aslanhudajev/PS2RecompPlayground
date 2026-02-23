#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mot_set__16FaceAnimMgrClassFi
// Address: 0x1e6020 - 0x1e60f4
void mot_set__16FaceAnimMgrClassFi_0x1e6020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mot_set__16FaceAnimMgrClassFi");


    ctx->pc = 0x1e6020u;

    // 0x1e6020: 0x27bdffd0
    ctx->pc = 0x1e6020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6024: 0x7fbf0020
    ctx->pc = 0x1e6024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e6028: 0x7fb10010
    ctx->pc = 0x1e6028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e602c: 0x3c030050
    ctx->pc = 0x1e602cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e6030: 0x7fb00000
    ctx->pc = 0x1e6030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6034: 0x52080
    ctx->pc = 0x1e6034u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e6038: 0x24630a80
    ctx->pc = 0x1e6038u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2688));
    // 0x1e603c: 0x648021
    ctx->pc = 0x1e603cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6040: 0x8e030000
    ctx->pc = 0x1e6040u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e6044: 0x14600026
    ctx->pc = 0x1E6044u;
    {
        const bool branch_taken_0x1e6044 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E6048u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e6044) {
            ctx->pc = 0x1E60E0u;
            goto label_1e60e0;
        }
    }
    ctx->pc = 0x1E604Cu;
    // 0x1e604c: 0x3c010050
    ctx->pc = 0x1e604cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e6050: 0xc05b018
    ctx->pc = 0x1E6050u;
    SET_GPR_U32(ctx, 31, 0x1E6058u);
    ctx->pc = 0x1E6054u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6058u; }
        else if (ctx->pc != 0x1E6058u) { ctx->pc = 0x1E6058u; }
    }
    if (ctx->pc != 0x1E6058u) { return; }
    ctx->pc = 0x1E6058u;
    // 0x1e6058: 0x24030003
    ctx->pc = 0x1e6058u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e605c: 0x14430020
    ctx->pc = 0x1E605Cu;
    {
        const bool branch_taken_0x1e605c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e605c) {
            ctx->pc = 0x1E60E0u;
            goto label_1e60e0;
        }
    }
    ctx->pc = 0x1E6064u;
    // 0x1e6064: 0x111040
    ctx->pc = 0x1e6064u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e6068: 0x511021
    ctx->pc = 0x1e6068u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e606c: 0x28880
    ctx->pc = 0x1e606cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6070: 0x3c020027
    ctx->pc = 0x1e6070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e6074: 0x2442b7a0
    ctx->pc = 0x1e6074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x1e6078: 0x511021
    ctx->pc = 0x1e6078u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e607c: 0x3c010050
    ctx->pc = 0x1e607cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e6080: 0x8c450000
    ctx->pc = 0x1e6080u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6084: 0x8c240c7c
    ctx->pc = 0x1e6084u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    // 0x1e6088: 0xc05af94
    ctx->pc = 0x1E6088u;
    SET_GPR_U32(ctx, 31, 0x1E6090u);
    ctx->pc = 0x1E608Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6090u; }
        else if (ctx->pc != 0x1E6090u) { ctx->pc = 0x1E6090u; }
    }
    if (ctx->pc != 0x1E6090u) { return; }
    ctx->pc = 0x1E6090u;
    // 0x1e6090: 0x3c030027
    ctx->pc = 0x1e6090u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1e6094: 0x2463b7a4
    ctx->pc = 0x1e6094u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948772));
    // 0x1e6098: 0x711821
    ctx->pc = 0x1e6098u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e609c: 0x8c710000
    ctx->pc = 0x1e609cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e60a0: 0x1220000f
    ctx->pc = 0x1E60A0u;
    {
        const bool branch_taken_0x1e60a0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e60a0) {
            ctx->pc = 0x1E60E0u;
            goto label_1e60e0;
        }
    }
    ctx->pc = 0x1E60A8u;
    // 0x1e60a8: 0x1112c0
    ctx->pc = 0x1e60a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 11));
    // 0x1e60ac: 0xc06878c
    ctx->pc = 0x1E60ACu;
    SET_GPR_U32(ctx, 31, 0x1E60B4u);
    ctx->pc = 0x1E60B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60B4u; }
        else if (ctx->pc != 0x1E60B4u) { ctx->pc = 0x1E60B4u; }
    }
    if (ctx->pc != 0x1E60B4u) { return; }
    ctx->pc = 0x1E60B4u;
    // 0x1e60b4: 0xae020000
    ctx->pc = 0x1e60b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e60b8: 0x3c010050
    ctx->pc = 0x1e60b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e60bc: 0x8c240c7c
    ctx->pc = 0x1e60bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    // 0x1e60c0: 0x2443003f
    ctx->pc = 0x1e60c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 63));
    // 0x1e60c4: 0x2402ffc0
    ctx->pc = 0x1e60c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e60c8: 0x72202e28
    ctx->pc = 0x1e60c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e60cc: 0xc05aeba
    ctx->pc = 0x1E60CCu;
    SET_GPR_U32(ctx, 31, 0x1E60D4u);
    ctx->pc = 0x1E60D0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60D4u; }
        else if (ctx->pc != 0x1E60D4u) { ctx->pc = 0x1E60D4u; }
    }
    if (ctx->pc != 0x1E60D4u) { return; }
    ctx->pc = 0x1E60D4u;
    // 0x1e60d4: 0x3c010050
    ctx->pc = 0x1e60d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e60d8: 0xc07a6a8
    ctx->pc = 0x1E60D8u;
    SET_GPR_U32(ctx, 31, 0x1E60E0u);
    ctx->pc = 0x1E60DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    ctx->pc = 0x1E9AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXF_WaitReadFinish__FP7_adx_fs_0x1e9aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60E0u; }
        else if (ctx->pc != 0x1E60E0u) { ctx->pc = 0x1E60E0u; }
    }
    if (ctx->pc != 0x1E60E0u) { return; }
    ctx->pc = 0x1E60E0u;
label_1e60e0:
    // 0x1e60e0: 0x7bbf0020
    ctx->pc = 0x1e60e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e60e4: 0x7bb10010
    ctx->pc = 0x1e60e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e60e8: 0x7bb00000
    ctx->pc = 0x1e60e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e60ec: 0x3e00008
    ctx->pc = 0x1E60ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E60F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E60E0u: goto label_1e60e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E60F4u;
}

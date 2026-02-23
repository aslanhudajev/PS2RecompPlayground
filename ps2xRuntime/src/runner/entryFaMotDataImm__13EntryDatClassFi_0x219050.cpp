#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaMotDataImm__13EntryDatClassFi
// Address: 0x219050 - 0x2190e8
void entryFaMotDataImm__13EntryDatClassFi_0x219050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaMotDataImm__13EntryDatClassFi");


    ctx->pc = 0x219050u;

    // 0x219050: 0x27bdffe0
    ctx->pc = 0x219050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219054: 0x7fbf0010
    ctx->pc = 0x219054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x219058: 0x7fb00000
    ctx->pc = 0x219058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21905c: 0x70a08628
    ctx->pc = 0x21905cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x219060: 0x84851000
    ctx->pc = 0x219060u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x219064: 0x84861002
    ctx->pc = 0x219064u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x219068: 0xc5082a
    ctx->pc = 0x219068u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x21906c: 0x14200002
    ctx->pc = 0x21906Cu;
    {
        const bool branch_taken_0x21906c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x219070u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x21906c) {
            ctx->pc = 0x219078u;
            goto label_219078;
        }
    }
    ctx->pc = 0x219074u;
    // 0x219074: 0x70001e28
    ctx->pc = 0x219074u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_219078:
    // 0x219078: 0xc31821
    ctx->pc = 0x219078u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21907c: 0x10a3000d
    ctx->pc = 0x21907Cu;
    {
        const bool branch_taken_0x21907c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21907c) {
            ctx->pc = 0x2190B4u;
            goto label_2190b4;
        }
    }
    ctx->pc = 0x219084u;
    // 0x219084: 0x51900
    ctx->pc = 0x219084u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x219088: 0x831821
    ctx->pc = 0x219088u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21908c: 0x8c650000
    ctx->pc = 0x21908cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219090: 0x24030018
    ctx->pc = 0x219090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x219094: 0x10a30005
    ctx->pc = 0x219094u;
    {
        const bool branch_taken_0x219094 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x219098u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x219094) {
            ctx->pc = 0x2190ACu;
            goto label_2190ac;
        }
    }
    ctx->pc = 0x21909Cu;
    // 0x21909c: 0x10a30003
    ctx->pc = 0x21909Cu;
    {
        const bool branch_taken_0x21909c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x21909c) {
            ctx->pc = 0x2190ACu;
            goto label_2190ac;
        }
    }
    ctx->pc = 0x2190A4u;
    // 0x2190a4: 0x10000003
    ctx->pc = 0x2190A4u;
    {
        const bool branch_taken_0x2190a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2190a4) {
            ctx->pc = 0x2190B4u;
            goto label_2190b4;
        }
    }
    ctx->pc = 0x2190ACu;
label_2190ac:
    // 0x2190ac: 0xc0863a8
    ctx->pc = 0x2190ACu;
    SET_GPR_U32(ctx, 31, 0x2190B4u);
    ctx->pc = 0x218EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flushCur__13EntryDatClassFv_0x218ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190B4u; }
        else if (ctx->pc != 0x2190B4u) { ctx->pc = 0x2190B4u; }
    }
    if (ctx->pc != 0x2190B4u) { return; }
    ctx->pc = 0x2190B4u;
label_2190b4:
    // 0x2190b4: 0x3c030050
    ctx->pc = 0x2190b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x2190b8: 0x102080
    ctx->pc = 0x2190b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2190bc: 0x24630a80
    ctx->pc = 0x2190bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2688));
    // 0x2190c0: 0x641821
    ctx->pc = 0x2190c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2190c4: 0x8c630000
    ctx->pc = 0x2190c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2190c8: 0x1c600003
    ctx->pc = 0x2190C8u;
    {
        const bool branch_taken_0x2190c8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2190CCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2190c8) {
            ctx->pc = 0x2190D8u;
            goto label_2190d8;
        }
    }
    ctx->pc = 0x2190D0u;
    // 0x2190d0: 0xc079904
    ctx->pc = 0x2190D0u;
    SET_GPR_U32(ctx, 31, 0x2190D8u);
    ctx->pc = 0x2190D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
    ctx->pc = 0x1E6410u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaMotDataImm__16FaceAnimMgrClassFi_0x1e6410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190D8u; }
        else if (ctx->pc != 0x2190D8u) { ctx->pc = 0x2190D8u; }
    }
    if (ctx->pc != 0x2190D8u) { return; }
    ctx->pc = 0x2190D8u;
label_2190d8:
    // 0x2190d8: 0x7bbf0010
    ctx->pc = 0x2190d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2190dc: 0x7bb00000
    ctx->pc = 0x2190dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2190e0: 0x3e00008
    ctx->pc = 0x2190E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2190E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219078u: goto label_219078;
            case 0x2190ACu: goto label_2190ac;
            case 0x2190B4u: goto label_2190b4;
            case 0x2190D8u: goto label_2190d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2190E8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutForEntry_sub__11BGCtrlClassFv
// Address: 0x1c88e0 - 0x1c89d0
void PutForEntry_sub__11BGCtrlClassFv_0x1c88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutForEntry_sub__11BGCtrlClassFv");


    ctx->pc = 0x1c88e0u;

    // 0x1c88e0: 0x27bdff90
    ctx->pc = 0x1c88e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c88e4: 0x7fbf0050
    ctx->pc = 0x1c88e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1c88e8: 0x7fb40040
    ctx->pc = 0x1c88e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c88ec: 0x7fb30030
    ctx->pc = 0x1c88ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c88f0: 0x7fb20020
    ctx->pc = 0x1c88f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c88f4: 0x7fb10010
    ctx->pc = 0x1c88f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c88f8: 0x7fb00000
    ctx->pc = 0x1c88f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c88fc: 0x84850008
    ctx->pc = 0x1c88fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c8900: 0x8c83000c
    ctx->pc = 0x1c8900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c8904: 0x7080a628
    ctx->pc = 0x1c8904u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c8908: 0x52040
    ctx->pc = 0x1c8908u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1c890c: 0x852021
    ctx->pc = 0x1c890cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c8910: 0x42080
    ctx->pc = 0x1c8910u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c8914: 0x852021
    ctx->pc = 0x1c8914u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c8918: 0x42080
    ctx->pc = 0x1c8918u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c891c: 0x10000020
    ctx->pc = 0x1C891Cu;
    {
        const bool branch_taken_0x1c891c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8920u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x1c891c) {
            ctx->pc = 0x1C89A0u;
            goto label_1c89a0;
        }
    }
    ctx->pc = 0x1C8924u;
label_1c8924:
    // 0x1c8924: 0x418c0
    ctx->pc = 0x1c8924u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1c8928: 0x641823
    ctx->pc = 0x1c8928u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c892c: 0x32080
    ctx->pc = 0x1c892cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8930: 0x8e830010
    ctx->pc = 0x1c8930u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1c8934: 0x648821
    ctx->pc = 0x1c8934u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c8938: 0x10000015
    ctx->pc = 0x1C8938u;
    {
        const bool branch_taken_0x1c8938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C893Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1c8938) {
            ctx->pc = 0x1C8990u;
            goto label_1c8990;
        }
    }
    ctx->pc = 0x1C8940u;
    // 0x1c8940: 0x72402628
    ctx->pc = 0x1c8940u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1c8944:
    // 0x1c8944: 0x27a50060
    ctx->pc = 0x1c8944u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8948: 0xc085438
    ctx->pc = 0x1C8948u;
    SET_GPR_U32(ctx, 31, 0x1C8950u);
    ctx->pc = 0x1C894Cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2150E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjCulling__FiP10OBJCULLING_0x2150e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8950u; }
        else if (ctx->pc != 0x1C8950u) { ctx->pc = 0x1C8950u; }
    }
    if (ctx->pc != 0x1C8950u) { return; }
    ctx->pc = 0x1C8950u;
    // 0x1c8950: 0xc085528
    ctx->pc = 0x1C8950u;
    SET_GPR_U32(ctx, 31, 0x1C8958u);
    ctx->pc = 0x1C8954u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2154A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckCulling__FP10OBJCULLING_0x2154a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8958u; }
        else if (ctx->pc != 0x1C8958u) { ctx->pc = 0x1C8958u; }
    }
    if (ctx->pc != 0x1C8958u) { return; }
    ctx->pc = 0x1C8958u;
    // 0x1c8958: 0x14400003
    ctx->pc = 0x1C8958u;
    {
        const bool branch_taken_0x1c8958 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C895Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)208 << 16));
        if (branch_taken_0x1c8958) {
            ctx->pc = 0x1C8968u;
            goto label_1c8968;
        }
    }
    ctx->pc = 0x1C8960u;
    // 0x1c8960: 0x70009e28
    ctx->pc = 0x1c8960u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8964: 0x0
    ctx->pc = 0x1c8964u;
    // NOP
label_1c8968:
    // 0x1c8968: 0x34630012
    ctx->pc = 0x1c8968u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 18));
    // 0x1c896c: 0x16430002
    ctx->pc = 0x1C896Cu;
    {
        const bool branch_taken_0x1c896c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c896c) {
            ctx->pc = 0x1C8978u;
            goto label_1c8978;
        }
    }
    ctx->pc = 0x1C8974u;
    // 0x1c8974: 0x70009e28
    ctx->pc = 0x1c8974u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8978:
    // 0x1c8978: 0x52600004
    ctx->pc = 0x1C8978u;
    {
        const bool branch_taken_0x1c8978 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8978) {
            ctx->pc = 0x1C897Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x1C898Cu;
            goto label_1c898c;
        }
    }
    ctx->pc = 0x1C8980u;
    // 0x1c8980: 0xc0853c8
    ctx->pc = 0x1C8980u;
    SET_GPR_U32(ctx, 31, 0x1C8988u);
    ctx->pc = 0x1C8984u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8988u; }
        else if (ctx->pc != 0x1C8988u) { ctx->pc = 0x1C8988u; }
    }
    if (ctx->pc != 0x1C8988u) { return; }
    ctx->pc = 0x1C8988u;
    // 0x1c8988: 0x26520001
    ctx->pc = 0x1c8988u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1c898c:
    // 0x1c898c: 0x0
    ctx->pc = 0x1c898cu;
    // NOP
label_1c8990:
    // 0x1c8990: 0x8e230004
    ctx->pc = 0x1c8990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c8994: 0x72082a
    ctx->pc = 0x1c8994u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x1c8998: 0x1020ffea
    ctx->pc = 0x1C8998u;
    {
        const bool branch_taken_0x1c8998 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C899Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c8998) {
            ctx->pc = 0x1C8944u;
            goto label_1c8944;
        }
    }
    ctx->pc = 0x1C89A0u;
label_1c89a0:
    // 0x1c89a0: 0x86040000
    ctx->pc = 0x1c89a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c89a4: 0x2403ffff
    ctx->pc = 0x1c89a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c89a8: 0x1483ffde
    ctx->pc = 0x1C89A8u;
    {
        const bool branch_taken_0x1c89a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C89ACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x1c89a8) {
            ctx->pc = 0x1C8924u;
            goto label_1c8924;
        }
    }
    ctx->pc = 0x1C89B0u;
    // 0x1c89b0: 0x7bbf0050
    ctx->pc = 0x1c89b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c89b4: 0x7bb40040
    ctx->pc = 0x1c89b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c89b8: 0x7bb30030
    ctx->pc = 0x1c89b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c89bc: 0x7bb20020
    ctx->pc = 0x1c89bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c89c0: 0x7bb10010
    ctx->pc = 0x1c89c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c89c4: 0x7bb00000
    ctx->pc = 0x1c89c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c89c8: 0x3e00008
    ctx->pc = 0x1C89C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C89CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8924u: goto label_1c8924;
            case 0x1C8944u: goto label_1c8944;
            case 0x1C8968u: goto label_1c8968;
            case 0x1C8978u: goto label_1c8978;
            case 0x1C898Cu: goto label_1c898c;
            case 0x1C8990u: goto label_1c8990;
            case 0x1C89A0u: goto label_1c89a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C89D0u;
}

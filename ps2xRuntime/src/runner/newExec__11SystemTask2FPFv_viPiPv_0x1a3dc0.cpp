#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: newExec__11SystemTask2FPFv_viPiPv
// Address: 0x1a3dc0 - 0x1a3f1c
void newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("newExec__11SystemTask2FPFv_viPiPv");


    ctx->pc = 0x1a3dc0u;

    // 0x1a3dc0: 0x27bdff80
    ctx->pc = 0x1a3dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a3dc4: 0x7fbf0070
    ctx->pc = 0x1a3dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1a3dc8: 0x7fb60060
    ctx->pc = 0x1a3dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a3dcc: 0x7fb50050
    ctx->pc = 0x1a3dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a3dd0: 0x7fb40040
    ctx->pc = 0x1a3dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a3dd4: 0x7fb30030
    ctx->pc = 0x1a3dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a3dd8: 0x7fb20020
    ctx->pc = 0x1a3dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a3ddc: 0x7fb10010
    ctx->pc = 0x1a3ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3de0: 0x7fb00000
    ctx->pc = 0x1a3de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3de4: 0x8c910034
    ctx->pc = 0x1a3de4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1a3de8: 0x70e09e28
    ctx->pc = 0x1a3de8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a3dec: 0x70a0ae28
    ctx->pc = 0x1a3decu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a3df0: 0x70c0a628
    ctx->pc = 0x1a3df0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a3df4: 0x71009628
    ctx->pc = 0x1a3df4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1a3df8: 0x7080b628
    ctx->pc = 0x1a3df8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a3dfc: 0x12600020
    ctx->pc = 0x1A3DFCu;
    {
        const bool branch_taken_0x1a3dfc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3E00u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a3dfc) {
            ctx->pc = 0x1A3E80u;
            goto label_1a3e80;
        }
    }
    ctx->pc = 0x1A3E04u;
    // 0x1a3e04: 0x1220001f
    ctx->pc = 0x1A3E04u;
    {
        const bool branch_taken_0x1a3e04 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3E08u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a3e04) {
            ctx->pc = 0x1A3E84u;
            goto label_1a3e84;
        }
    }
    ctx->pc = 0x1A3E0Cu;
label_1a3e0c:
    // 0x1a3e0c: 0x8e24000c
    ctx->pc = 0x1a3e0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a3e10: 0x50800017
    ctx->pc = 0x1A3E10u;
    {
        const bool branch_taken_0x1a3e10 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3e10) {
            ctx->pc = 0x1A3E14u;
            SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1A3E70u;
            goto label_1a3e70;
        }
    }
    ctx->pc = 0x1A3E18u;
    // 0x1a3e18: 0xc068fc8
    ctx->pc = 0x1A3E18u;
    SET_GPR_U32(ctx, 31, 0x1A3E20u);
    ctx->pc = 0x1A3E1Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        cmp_vrID__FPiPi_0x1a3f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E20u; }
        else if (ctx->pc != 0x1A3E20u) { ctx->pc = 0x1A3E20u; }
    }
    if (ctx->pc != 0x1A3E20u) { return; }
    ctx->pc = 0x1A3E20u;
    // 0x1a3e20: 0x24030001
    ctx->pc = 0x1a3e20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3e24: 0x14430011
    ctx->pc = 0x1A3E24u;
    {
        const bool branch_taken_0x1a3e24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a3e24) {
            ctx->pc = 0x1A3E6Cu;
            goto label_1a3e6c;
        }
    }
    ctx->pc = 0x1A3E2Cu;
    // 0x1a3e2c: 0x8e230008
    ctx->pc = 0x1a3e2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a3e30: 0x14740004
    ctx->pc = 0x1A3E30u;
    {
        const bool branch_taken_0x1a3e30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 20));
        if (branch_taken_0x1a3e30) {
            ctx->pc = 0x1A3E44u;
            goto label_1a3e44;
        }
    }
    ctx->pc = 0x1A3E38u;
    // 0x1a3e38: 0xae350000
    ctx->pc = 0x1a3e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x1a3e3c: 0x1000002d
    ctx->pc = 0x1A3E3Cu;
    {
        const bool branch_taken_0x1a3e3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3E40u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        if (branch_taken_0x1a3e3c) {
            ctx->pc = 0x1A3EF4u;
            goto label_1a3ef4;
        }
    }
    ctx->pc = 0x1A3E44u;
label_1a3e44:
    // 0x1a3e44: 0x8ec30034
    ctx->pc = 0x1a3e44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x1a3e48: 0x16230004
    ctx->pc = 0x1A3E48u;
    {
        const bool branch_taken_0x1a3e48 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a3e48) {
            ctx->pc = 0x1A3E5Cu;
            goto label_1a3e5c;
        }
    }
    ctx->pc = 0x1A3E50u;
    // 0x1a3e50: 0x8e230010
    ctx->pc = 0x1a3e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a3e54: 0x10000003
    ctx->pc = 0x1A3E54u;
    {
        const bool branch_taken_0x1a3e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3E58u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 3));
        if (branch_taken_0x1a3e54) {
            ctx->pc = 0x1A3E64u;
            goto label_1a3e64;
        }
    }
    ctx->pc = 0x1A3E5Cu;
label_1a3e5c:
    // 0x1a3e5c: 0x8e230010
    ctx->pc = 0x1a3e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a3e60: 0xae030010
    ctx->pc = 0x1a3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1a3e64:
    // 0x1a3e64: 0x1000000b
    ctx->pc = 0x1A3E64u;
    {
        const bool branch_taken_0x1a3e64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3E68u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
        if (branch_taken_0x1a3e64) {
            ctx->pc = 0x1A3E94u;
            goto label_1a3e94;
        }
    }
    ctx->pc = 0x1A3E6Cu;
label_1a3e6c:
    // 0x1a3e6c: 0x72208628
    ctx->pc = 0x1a3e6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1a3e70:
    // 0x1a3e70: 0x8e310010
    ctx->pc = 0x1a3e70u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a3e74: 0x1620ffe5
    ctx->pc = 0x1A3E74u;
    {
        const bool branch_taken_0x1a3e74 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3e74) {
            ctx->pc = 0x1A3E0Cu;
            goto label_1a3e0c;
        }
    }
    ctx->pc = 0x1A3E7Cu;
    // 0x1a3e7c: 0x0
    ctx->pc = 0x1a3e7cu;
    // NOP
label_1a3e80:
    // 0x1a3e80: 0x72c02628
    ctx->pc = 0x1a3e80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_1a3e84:
    // 0x1a3e84: 0xc068f10
    ctx->pc = 0x1A3E84u;
    SET_GPR_U32(ctx, 31, 0x1A3E8Cu);
    ctx->pc = 0x1A3E88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1A3C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc2__11SystemTask2Fi_0x1a3c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E8Cu; }
        else if (ctx->pc != 0x1A3E8Cu) { ctx->pc = 0x1A3E8Cu; }
    }
    if (ctx->pc != 0x1A3E8Cu) { return; }
    ctx->pc = 0x1A3E8Cu;
    // 0x1a3e8c: 0x70408e28
    ctx->pc = 0x1a3e8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a3e90: 0xae350000
    ctx->pc = 0x1a3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_1a3e94:
    // 0x1a3e94: 0xae320004
    ctx->pc = 0x1a3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1a3e98: 0xae340008
    ctx->pc = 0x1a3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x1a3e9c: 0xae33000c
    ctx->pc = 0x1a3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x1a3ea0: 0x8ec40034
    ctx->pc = 0x1a3ea0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x1a3ea4: 0x10800005
    ctx->pc = 0x1A3EA4u;
    {
        const bool branch_taken_0x1a3ea4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3ea4) {
            ctx->pc = 0x1A3EBCu;
            goto label_1a3ebc;
        }
    }
    ctx->pc = 0x1A3EACu;
    // 0x1a3eac: 0x8c830008
    ctx->pc = 0x1a3eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a3eb0: 0x283082a
    ctx->pc = 0x1a3eb0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1a3eb4: 0x10200005
    ctx->pc = 0x1A3EB4u;
    {
        const bool branch_taken_0x1a3eb4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3EB8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a3eb4) {
            ctx->pc = 0x1A3ECCu;
            goto label_1a3ecc;
        }
    }
    ctx->pc = 0x1A3EBCu;
label_1a3ebc:
    // 0x1a3ebc: 0xae240010
    ctx->pc = 0x1a3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x1a3ec0: 0x1000000c
    ctx->pc = 0x1A3EC0u;
    {
        const bool branch_taken_0x1a3ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3EC4u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 17));
        if (branch_taken_0x1a3ec0) {
            ctx->pc = 0x1A3EF4u;
            goto label_1a3ef4;
        }
    }
    ctx->pc = 0x1A3EC8u;
label_1a3ec8:
    // 0x1a3ec8: 0x70802e28
    ctx->pc = 0x1a3ec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a3ecc:
    // 0x1a3ecc: 0x8c840010
    ctx->pc = 0x1a3eccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a3ed0: 0x10800005
    ctx->pc = 0x1A3ED0u;
    {
        const bool branch_taken_0x1a3ed0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3ed0) {
            ctx->pc = 0x1A3EE8u;
            goto label_1a3ee8;
        }
    }
    ctx->pc = 0x1A3ED8u;
    // 0x1a3ed8: 0x8c830008
    ctx->pc = 0x1a3ed8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a3edc: 0x283082a
    ctx->pc = 0x1a3edcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1a3ee0: 0x1020fff9
    ctx->pc = 0x1A3EE0u;
    {
        const bool branch_taken_0x1a3ee0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3ee0) {
            ctx->pc = 0x1A3EC8u;
            goto label_1a3ec8;
        }
    }
    ctx->pc = 0x1A3EE8u;
label_1a3ee8:
    // 0x1a3ee8: 0x8ca30010
    ctx->pc = 0x1a3ee8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a3eec: 0xae230010
    ctx->pc = 0x1a3eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1a3ef0: 0xacb10010
    ctx->pc = 0x1a3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 17));
label_1a3ef4:
    // 0x1a3ef4: 0x7bbf0070
    ctx->pc = 0x1a3ef4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a3ef8: 0x7bb60060
    ctx->pc = 0x1a3ef8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3efc: 0x7bb50050
    ctx->pc = 0x1a3efcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3f00: 0x7bb40040
    ctx->pc = 0x1a3f00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3f04: 0x7bb30030
    ctx->pc = 0x1a3f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3f08: 0x7bb20020
    ctx->pc = 0x1a3f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3f0c: 0x7bb10010
    ctx->pc = 0x1a3f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3f10: 0x7bb00000
    ctx->pc = 0x1a3f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3f14: 0x3e00008
    ctx->pc = 0x1A3F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3E0Cu: goto label_1a3e0c;
            case 0x1A3E44u: goto label_1a3e44;
            case 0x1A3E5Cu: goto label_1a3e5c;
            case 0x1A3E64u: goto label_1a3e64;
            case 0x1A3E6Cu: goto label_1a3e6c;
            case 0x1A3E70u: goto label_1a3e70;
            case 0x1A3E80u: goto label_1a3e80;
            case 0x1A3E84u: goto label_1a3e84;
            case 0x1A3E94u: goto label_1a3e94;
            case 0x1A3EBCu: goto label_1a3ebc;
            case 0x1A3EC8u: goto label_1a3ec8;
            case 0x1A3ECCu: goto label_1a3ecc;
            case 0x1A3EE8u: goto label_1a3ee8;
            case 0x1A3EF4u: goto label_1a3ef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3F1Cu;
}

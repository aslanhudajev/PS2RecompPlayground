#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_Init__13EnVtxMgrClassFP11DATAENT_REQ
// Address: 0x1e1e70 - 0x1e1fe4
void entryExec_Init__13EnVtxMgrClassFP11DATAENT_REQ_0x1e1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_Init__13EnVtxMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e1e70u;

    // 0x1e1e70: 0x27bdff90
    ctx->pc = 0x1e1e70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1e74: 0x7fbf0060
    ctx->pc = 0x1e1e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1e1e78: 0x7fb50050
    ctx->pc = 0x1e1e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e1e7c: 0x7fb40040
    ctx->pc = 0x1e1e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e1e80: 0x7fb30030
    ctx->pc = 0x1e1e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e1e84: 0x7fb20020
    ctx->pc = 0x1e1e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e1e88: 0x7fb10010
    ctx->pc = 0x1e1e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1e8c: 0x7fb00000
    ctx->pc = 0x1e1e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1e90: 0x8ca30008
    ctx->pc = 0x1e1e90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e1e94: 0x3c020050
    ctx->pc = 0x1e1e94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e1e98: 0x244202e8
    ctx->pc = 0x1e1e98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 744));
    // 0x1e1e9c: 0x39880
    ctx->pc = 0x1e1e9cu;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1ea0: 0x2631821
    ctx->pc = 0x1e1ea0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e1ea4: 0x39080
    ctx->pc = 0x1e1ea4u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1ea8: 0x528821
    ctx->pc = 0x1e1ea8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e1eac: 0x8e230000
    ctx->pc = 0x1e1eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e1eb0: 0x10600008
    ctx->pc = 0x1E1EB0u;
    {
        const bool branch_taken_0x1e1eb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1EB4u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1eb0) {
            ctx->pc = 0x1E1ED4u;
            goto label_1e1ed4;
        }
    }
    ctx->pc = 0x1E1EB8u;
    // 0x1e1eb8: 0x24020002
    ctx->pc = 0x1e1eb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1ebc: 0x10620003
    ctx->pc = 0x1E1EBCu;
    {
        const bool branch_taken_0x1e1ebc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1E1EC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1e1ebc) {
            ctx->pc = 0x1E1ECCu;
            goto label_1e1ecc;
        }
    }
    ctx->pc = 0x1E1EC4u;
    // 0x1e1ec4: 0x24020001
    ctx->pc = 0x1e1ec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1ec8: 0x2402ffff
    ctx->pc = 0x1e1ec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e1ecc:
    // 0x1e1ecc: 0x1000003d
    ctx->pc = 0x1E1ECCu;
    {
        const bool branch_taken_0x1e1ecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1ED0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1e1ecc) {
            ctx->pc = 0x1E1FC4u;
            goto label_1e1fc4;
        }
    }
    ctx->pc = 0x1E1ED4u;
label_1e1ed4:
    // 0x1e1ed4: 0x3c02009a
    ctx->pc = 0x1e1ed4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)154 << 16));
    // 0x1e1ed8: 0x24420510
    ctx->pc = 0x1e1ed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1296));
    // 0x1e1edc: 0x53a021
    ctx->pc = 0x1e1edcu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e1ee0: 0x8e830000
    ctx->pc = 0x1e1ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e1ee4: 0x24020002
    ctx->pc = 0x1e1ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1ee8: 0x84700000
    ctx->pc = 0x1e1ee8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1eec: 0xae220000
    ctx->pc = 0x1e1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e1ef0: 0xc06878c
    ctx->pc = 0x1E1EF0u;
    SET_GPR_U32(ctx, 31, 0x1E1EF8u);
    ctx->pc = 0x1E1EF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EF8u; }
        else if (ctx->pc != 0x1E1EF8u) { ctx->pc = 0x1E1EF8u; }
    }
    if (ctx->pc != 0x1E1EF8u) { return; }
    ctx->pc = 0x1E1EF8u;
    // 0x1e1ef8: 0x3c030050
    ctx->pc = 0x1e1ef8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e1efc: 0x246302e0
    ctx->pc = 0x1e1efcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 736));
    // 0x1e1f00: 0x721821
    ctx->pc = 0x1e1f00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e1f04: 0xac620000
    ctx->pc = 0x1e1f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e1f08: 0x8c640000
    ctx->pc = 0x1e1f08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1f0c: 0x3c020050
    ctx->pc = 0x1e1f0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e1f10: 0x244202e4
    ctx->pc = 0x1e1f10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 740));
    // 0x1e1f14: 0x523021
    ctx->pc = 0x1e1f14u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e1f18: 0x3c020050
    ctx->pc = 0x1e1f18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e1f1c: 0x244202ec
    ctx->pc = 0x1e1f1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 748));
    // 0x1e1f20: 0x2403ffc0
    ctx->pc = 0x1e1f20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e1f24: 0x2484003f
    ctx->pc = 0x1e1f24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 63));
    // 0x1e1f28: 0x831824
    ctx->pc = 0x1e1f28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e1f2c: 0xacc30000
    ctx->pc = 0x1e1f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1e1f30: 0x8cc50000
    ctx->pc = 0x1e1f30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e1f34: 0x523821
    ctx->pc = 0x1e1f34u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e1f38: 0x3c020050
    ctx->pc = 0x1e1f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e1f3c: 0x244202f0
    ctx->pc = 0x1e1f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 752));
    // 0x1e1f40: 0x522021
    ctx->pc = 0x1e1f40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e1f44: 0x3c02009b
    ctx->pc = 0x1e1f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)155 << 16));
    // 0x1e1f48: 0xace50000
    ctx->pc = 0x1e1f48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1e1f4c: 0x8cc50000
    ctx->pc = 0x1e1f4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e1f50: 0x24424f40
    ctx->pc = 0x1e1f50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20288));
    // 0x1e1f54: 0x531821
    ctx->pc = 0x1e1f54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e1f58: 0x3c010030
    ctx->pc = 0x1e1f58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1e1f5c: 0x24020002
    ctx->pc = 0x1e1f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1f60: 0x2052821
    ctx->pc = 0x1e1f60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1e1f64: 0xac850000
    ctx->pc = 0x1e1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e1f68: 0x8ce40000
    ctx->pc = 0x1e1f68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e1f6c: 0xac247c98
    ctx->pc = 0x1e1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31896), GPR_U32(ctx, 4));
    // 0x1e1f70: 0x8c630000
    ctx->pc = 0x1e1f70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1f74: 0x3c010030
    ctx->pc = 0x1e1f74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1e1f78: 0xac237c9c
    ctx->pc = 0x1e1f78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31900), GPR_U32(ctx, 3));
    // 0x1e1f7c: 0x8e830000
    ctx->pc = 0x1e1f7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e1f80: 0x3c010030
    ctx->pc = 0x1e1f80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1e1f84: 0x84630000
    ctx->pc = 0x1e1f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1f88: 0xac237ca0
    ctx->pc = 0x1e1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31904), GPR_U32(ctx, 3));
    // 0x1e1f8c: 0xae220000
    ctx->pc = 0x1e1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e1f90: 0x3c010030
    ctx->pc = 0x1e1f90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1e1f94: 0x8c227c9c
    ctx->pc = 0x1e1f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31900)));
    // 0x1e1f98: 0x4410003
    ctx->pc = 0x1E1F98u;
    {
        const bool branch_taken_0x1e1f98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E1F9Cu;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        if (branch_taken_0x1e1f98) {
            ctx->pc = 0x1E1FA8u;
            goto label_1e1fa8;
        }
    }
    ctx->pc = 0x1E1FA0u;
    // 0x1e1fa0: 0x244207ff
    ctx->pc = 0x1e1fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1e1fa4: 0x22ac3
    ctx->pc = 0x1e1fa4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_1e1fa8:
    // 0x1e1fa8: 0x3c010050
    ctx->pc = 0x1e1fa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e1fac: 0x8c240c84
    ctx->pc = 0x1e1facu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3204)));
    // 0x1e1fb0: 0xc05af94
    ctx->pc = 0x1E1FB0u;
    SET_GPR_U32(ctx, 31, 0x1E1FB8u);
    ctx->pc = 0x1E1FB4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1FB8u; }
        else if (ctx->pc != 0x1E1FB8u) { ctx->pc = 0x1E1FB8u; }
    }
    if (ctx->pc != 0x1E1FB8u) { return; }
    ctx->pc = 0x1E1FB8u;
    // 0x1e1fb8: 0x24020001
    ctx->pc = 0x1e1fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1fbc: 0xaea2000c
    ctx->pc = 0x1e1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1e1fc0: 0x7bbf0060
    ctx->pc = 0x1e1fc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e1fc4:
    // 0x1e1fc4: 0x7bb50050
    ctx->pc = 0x1e1fc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1fc8: 0x7bb40040
    ctx->pc = 0x1e1fc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1fcc: 0x7bb30030
    ctx->pc = 0x1e1fccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1fd0: 0x7bb20020
    ctx->pc = 0x1e1fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1fd4: 0x7bb10010
    ctx->pc = 0x1e1fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1fd8: 0x7bb00000
    ctx->pc = 0x1e1fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1fdc: 0x3e00008
    ctx->pc = 0x1E1FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1FE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1ECCu: goto label_1e1ecc;
            case 0x1E1ED4u: goto label_1e1ed4;
            case 0x1E1FA8u: goto label_1e1fa8;
            case 0x1E1FC4u: goto label_1e1fc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1FE4u;
}

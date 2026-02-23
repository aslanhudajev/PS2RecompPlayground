#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: clearLoopPoint
// Address: 0x1a2b80 - 0x1a2c68
void clearLoopPoint_0x1a2b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("clearLoopPoint");


    ctx->pc = 0x1a2b80u;

    // 0x1a2b80: 0x27bdff90
    ctx->pc = 0x1a2b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a2b84: 0x7fbf0060
    ctx->pc = 0x1a2b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1a2b88: 0x7fb50050
    ctx->pc = 0x1a2b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a2b8c: 0x7fb40040
    ctx->pc = 0x1a2b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a2b90: 0x7fb30030
    ctx->pc = 0x1a2b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a2b94: 0x7fb20020
    ctx->pc = 0x1a2b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a2b98: 0x7fb10010
    ctx->pc = 0x1a2b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2b9c: 0x70a09628
    ctx->pc = 0x1a2b9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a2ba0: 0x7fb00000
    ctx->pc = 0x1a2ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2ba4: 0x12400027
    ctx->pc = 0x1A2BA4u;
    {
        const bool branch_taken_0x1a2ba4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2BA8u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2ba4) {
            ctx->pc = 0x1A2C44u;
            goto label_1a2c44;
        }
    }
    ctx->pc = 0x1A2BACu;
    // 0x1a2bac: 0x61080
    ctx->pc = 0x1a2bacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2bb0: 0x529821
    ctx->pc = 0x1a2bb0u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a2bb4: 0x8e710000
    ctx->pc = 0x1a2bb4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a2bb8: 0x8e700004
    ctx->pc = 0x1a2bb8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1a2bbc: 0x24020001
    ctx->pc = 0x1a2bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2bc0: 0x16220009
    ctx->pc = 0x1A2BC0u;
    {
        const bool branch_taken_0x1a2bc0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A2BC4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x1a2bc0) {
            ctx->pc = 0x1A2BE8u;
            goto label_1a2be8;
        }
    }
    ctx->pc = 0x1A2BC8u;
    // 0x1a2bc8: 0xc0687c0
    ctx->pc = 0x1A2BC8u;
    SET_GPR_U32(ctx, 31, 0x1A2BD0u);
    ctx->pc = 0x1A2BCCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BD0u; }
        else if (ctx->pc != 0x1A2BD0u) { ctx->pc = 0x1A2BD0u; }
    }
    if (ctx->pc != 0x1A2BD0u) { return; }
    ctx->pc = 0x1A2BD0u;
    // 0x1a2bd0: 0xae600000
    ctx->pc = 0x1a2bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1a2bd4: 0x72402628
    ctx->pc = 0x1a2bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a2bd8: 0xc0687c0
    ctx->pc = 0x1A2BD8u;
    SET_GPR_U32(ctx, 31, 0x1A2BE0u);
    ctx->pc = 0x1A2BDCu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BE0u; }
        else if (ctx->pc != 0x1A2BE0u) { ctx->pc = 0x1A2BE0u; }
    }
    if (ctx->pc != 0x1A2BE0u) { return; }
    ctx->pc = 0x1A2BE0u;
    // 0x1a2be0: 0x10000019
    ctx->pc = 0x1A2BE0u;
    {
        const bool branch_taken_0x1a2be0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2BE4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1a2be0) {
            ctx->pc = 0x1A2C48u;
            goto label_1a2c48;
        }
    }
    ctx->pc = 0x1A2BE8u;
label_1a2be8:
    // 0x1a2be8: 0x2622ffff
    ctx->pc = 0x1a2be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a2bec: 0xc06878c
    ctx->pc = 0x1A2BECu;
    SET_GPR_U32(ctx, 31, 0x1A2BF4u);
    ctx->pc = 0x1A2BF0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BF4u; }
        else if (ctx->pc != 0x1A2BF4u) { ctx->pc = 0x1A2BF4u; }
    }
    if (ctx->pc != 0x1A2BF4u) { return; }
    ctx->pc = 0x1A2BF4u;
    // 0x1a2bf4: 0x11082a
    ctx->pc = 0x1a2bf4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x1a2bf8: 0x70409628
    ctx->pc = 0x1a2bf8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a2bfc: 0x1020000c
    ctx->pc = 0x1A2BFCu;
    {
        const bool branch_taken_0x1a2bfc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2C00u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2bfc) {
            ctx->pc = 0x1A2C30u;
            goto label_1a2c30;
        }
    }
    ctx->pc = 0x1A2C04u;
    // 0x1a2c04: 0x72002628
    ctx->pc = 0x1a2c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a2c08: 0x72402e28
    ctx->pc = 0x1a2c08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1a2c0c:
    // 0x1a2c0c: 0x8c820000
    ctx->pc = 0x1a2c0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2c10: 0x52a20004
    ctx->pc = 0x1A2C10u;
    {
        const bool branch_taken_0x1a2c10 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a2c10) {
            ctx->pc = 0x1A2C14u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x1A2C24u;
            goto label_1a2c24;
        }
    }
    ctx->pc = 0x1A2C18u;
    // 0x1a2c18: 0xaca20000
    ctx->pc = 0x1a2c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a2c1c: 0x24a50004
    ctx->pc = 0x1a2c1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a2c20: 0x24630001
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1a2c24:
    // 0x1a2c24: 0x71102a
    ctx->pc = 0x1a2c24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x1a2c28: 0x1440fff8
    ctx->pc = 0x1A2C28u;
    {
        const bool branch_taken_0x1a2c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2C2Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1a2c28) {
            ctx->pc = 0x1A2C0Cu;
            goto label_1a2c0c;
        }
    }
    ctx->pc = 0x1A2C30u;
label_1a2c30:
    // 0x1a2c30: 0xc0687c0
    ctx->pc = 0x1A2C30u;
    SET_GPR_U32(ctx, 31, 0x1A2C38u);
    ctx->pc = 0x1A2C34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2C38u; }
        else if (ctx->pc != 0x1A2C38u) { ctx->pc = 0x1A2C38u; }
    }
    if (ctx->pc != 0x1A2C38u) { return; }
    ctx->pc = 0x1A2C38u;
    // 0x1a2c38: 0x2623ffff
    ctx->pc = 0x1a2c38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a2c3c: 0xae630000
    ctx->pc = 0x1a2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1a2c40: 0xae920000
    ctx->pc = 0x1a2c40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_1a2c44:
    // 0x1a2c44: 0x7bbf0060
    ctx->pc = 0x1a2c44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a2c48:
    // 0x1a2c48: 0x7bb50050
    ctx->pc = 0x1a2c48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2c4c: 0x7bb40040
    ctx->pc = 0x1a2c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2c50: 0x7bb30030
    ctx->pc = 0x1a2c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2c54: 0x7bb20020
    ctx->pc = 0x1a2c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2c58: 0x7bb10010
    ctx->pc = 0x1a2c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2c5c: 0x7bb00000
    ctx->pc = 0x1a2c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2c60: 0x3e00008
    ctx->pc = 0x1A2C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2BE8u: goto label_1a2be8;
            case 0x1A2C0Cu: goto label_1a2c0c;
            case 0x1A2C24u: goto label_1a2c24;
            case 0x1A2C30u: goto label_1a2c30;
            case 0x1A2C44u: goto label_1a2c44;
            case 0x1A2C48u: goto label_1a2c48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2C68u;
}

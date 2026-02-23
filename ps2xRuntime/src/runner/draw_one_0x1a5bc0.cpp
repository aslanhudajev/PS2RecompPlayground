#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: draw_one
// Address: 0x1a5bc0 - 0x1a5d00
void draw_one_0x1a5bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("draw_one");


    ctx->pc = 0x1a5bc0u;

    // 0x1a5bc0: 0x27bdff70
    ctx->pc = 0x1a5bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a5bc4: 0x7fbf0080
    ctx->pc = 0x1a5bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x1a5bc8: 0x7fb70070
    ctx->pc = 0x1a5bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a5bcc: 0x7fb60060
    ctx->pc = 0x1a5bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a5bd0: 0x7fb50050
    ctx->pc = 0x1a5bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a5bd4: 0x7fb40040
    ctx->pc = 0x1a5bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a5bd8: 0x7fb30030
    ctx->pc = 0x1a5bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a5bdc: 0x7fb20020
    ctx->pc = 0x1a5bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5be0: 0x7fb10010
    ctx->pc = 0x1a5be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5be4: 0x7fb00000
    ctx->pc = 0x1a5be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5be8: 0x8c970090
    ctx->pc = 0x1a5be8u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1a5bec: 0x7080b628
    ctx->pc = 0x1a5becu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a5bf0: 0x241100e0
    ctx->pc = 0x1a5bf0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a5bf4: 0xac800074
    ctx->pc = 0x1a5bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
label_1a5bf8:
    // 0x1a5bf8: 0x2a210021
    ctx->pc = 0x1a5bf8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 33));
    // 0x1a5bfc: 0x14200004
    ctx->pc = 0x1A5BFCu;
    {
        const bool branch_taken_0x1a5bfc = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5C00u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a5bfc) {
            ctx->pc = 0x1A5C10u;
            goto label_1a5c10;
        }
    }
    ctx->pc = 0x1A5C04u;
    // 0x1a5c04: 0x10000002
    ctx->pc = 0x1A5C04u;
    {
        const bool branch_taken_0x1a5c04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5C08u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1a5c04) {
            ctx->pc = 0x1A5C10u;
            goto label_1a5c10;
        }
    }
    ctx->pc = 0x1A5C0Cu;
    // 0x1a5c0c: 0x72209628
    ctx->pc = 0x1a5c0cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1a5c10:
    // 0x1a5c10: 0x8ec20094
    ctx->pc = 0x1a5c10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x1a5c14: 0x12a100
    ctx->pc = 0x1a5c14u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 18), 4));
    // 0x1a5c18: 0x24100280
    ctx->pc = 0x1a5c18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a5c1c: 0x541021
    ctx->pc = 0x1a5c1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1a5c20: 0xaec200b4
    ctx->pc = 0x1a5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 2));
    // 0x1a5c24: 0x8ec20074
    ctx->pc = 0x1a5c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x1a5c28: 0x541021
    ctx->pc = 0x1a5c28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1a5c2c: 0xaec200a4
    ctx->pc = 0x1a5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 164), GPR_U32(ctx, 2));
    // 0x1a5c30: 0xaed70090
    ctx->pc = 0x1a5c30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 23));
    // 0x1a5c34: 0xaec00070
    ctx->pc = 0x1a5c34u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 112), GPR_U32(ctx, 0));
label_1a5c38:
    // 0x1a5c38: 0x2a010041
    ctx->pc = 0x1a5c38u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 65));
    // 0x1a5c3c: 0x14200004
    ctx->pc = 0x1A5C3Cu;
    {
        const bool branch_taken_0x1a5c3c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5C40u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a5c3c) {
            ctx->pc = 0x1A5C50u;
            goto label_1a5c50;
        }
    }
    ctx->pc = 0x1A5C44u;
    // 0x1a5c44: 0x10000002
    ctx->pc = 0x1A5C44u;
    {
        const bool branch_taken_0x1a5c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5C48u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x1a5c44) {
            ctx->pc = 0x1A5C50u;
            goto label_1a5c50;
        }
    }
    ctx->pc = 0x1A5C4Cu;
    // 0x1a5c4c: 0x72009e28
    ctx->pc = 0x1a5c4cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1a5c50:
    // 0x1a5c50: 0x8ec20090
    ctx->pc = 0x1a5c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 144)));
    // 0x1a5c54: 0x13a900
    ctx->pc = 0x1a5c54u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 19), 4));
    // 0x1a5c58: 0x2404000c
    ctx->pc = 0x1a5c58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a5c5c: 0x551021
    ctx->pc = 0x1a5c5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a5c60: 0xaec200b0
    ctx->pc = 0x1a5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 176), GPR_U32(ctx, 2));
    // 0x1a5c64: 0x8ec20070
    ctx->pc = 0x1a5c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x1a5c68: 0x551021
    ctx->pc = 0x1a5c68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a5c6c: 0xc06952c
    ctx->pc = 0x1A5C6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5C74u);
    ctx->pc = 0x1A5C70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 160), GPR_U32(ctx, 2));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C74u; }
        else if (ctx->pc != 0x1A5C74u) { ctx->pc = 0x1A5C74u; }
    }
    if (ctx->pc != 0x1A5C74u) { return; }
    ctx->pc = 0x1A5C74u;
    // 0x1a5c74: 0x0
    ctx->pc = 0x1a5c74u;
    // NOP
label_1a5c78:
    // 0x1a5c78: 0x3c011001
    ctx->pc = 0x1a5c78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a5c7c: 0x8c23d000
    ctx->pc = 0x1a5c7cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a5c80: 0x30630100
    ctx->pc = 0x1a5c80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1a5c84: 0x0
    ctx->pc = 0x1a5c84u;
    // NOP
    // 0x1a5c88: 0x0
    ctx->pc = 0x1a5c88u;
    // NOP
    // 0x1a5c8c: 0x1460fffa
    ctx->pc = 0x1A5C8Cu;
    {
        const bool branch_taken_0x1a5c8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5c8c) {
            ctx->pc = 0x1A5C78u;
            goto label_1a5c78;
        }
    }
    ctx->pc = 0x1A5C94u;
    // 0x1a5c94: 0x8ec30090
    ctx->pc = 0x1a5c94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 144)));
    // 0x1a5c98: 0x2138023
    ctx->pc = 0x1a5c98u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1a5c9c: 0x751821
    ctx->pc = 0x1a5c9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a5ca0: 0xaec30090
    ctx->pc = 0x1a5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 3));
    // 0x1a5ca4: 0x8ec30070
    ctx->pc = 0x1a5ca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x1a5ca8: 0x751821
    ctx->pc = 0x1a5ca8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a5cac: 0x1e00ffe2
    ctx->pc = 0x1A5CACu;
    {
        const bool branch_taken_0x1a5cac = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1A5CB0u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 112), GPR_U32(ctx, 3));
        if (branch_taken_0x1a5cac) {
            ctx->pc = 0x1A5C38u;
            goto label_1a5c38;
        }
    }
    ctx->pc = 0x1A5CB4u;
    // 0x1a5cb4: 0x8ec30094
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x1a5cb8: 0x2328823
    ctx->pc = 0x1a5cb8u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1a5cbc: 0x741821
    ctx->pc = 0x1a5cbcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1a5cc0: 0xaec30094
    ctx->pc = 0x1a5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 3));
    // 0x1a5cc4: 0x8ec30074
    ctx->pc = 0x1a5cc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x1a5cc8: 0x741821
    ctx->pc = 0x1a5cc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1a5ccc: 0x1e20ffca
    ctx->pc = 0x1A5CCCu;
    {
        const bool branch_taken_0x1a5ccc = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x1A5CD0u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 116), GPR_U32(ctx, 3));
        if (branch_taken_0x1a5ccc) {
            ctx->pc = 0x1A5BF8u;
            goto label_1a5bf8;
        }
    }
    ctx->pc = 0x1A5CD4u;
    // 0x1a5cd4: 0x7bbf0080
    ctx->pc = 0x1a5cd4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5cd8: 0x7bb70070
    ctx->pc = 0x1a5cd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a5cdc: 0x7bb60060
    ctx->pc = 0x1a5cdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a5ce0: 0x7bb50050
    ctx->pc = 0x1a5ce0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5ce4: 0x7bb40040
    ctx->pc = 0x1a5ce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5ce8: 0x7bb30030
    ctx->pc = 0x1a5ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5cec: 0x7bb20020
    ctx->pc = 0x1a5cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5cf0: 0x7bb10010
    ctx->pc = 0x1a5cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5cf4: 0x7bb00000
    ctx->pc = 0x1a5cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5cf8: 0x3e00008
    ctx->pc = 0x1A5CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5CFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5BF8u: goto label_1a5bf8;
            case 0x1A5C10u: goto label_1a5c10;
            case 0x1A5C38u: goto label_1a5c38;
            case 0x1A5C50u: goto label_1a5c50;
            case 0x1A5C78u: goto label_1a5c78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5D00u;
}

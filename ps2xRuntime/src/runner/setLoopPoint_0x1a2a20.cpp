#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setLoopPoint
// Address: 0x1a2a20 - 0x1a2b78
void setLoopPoint_0x1a2a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setLoopPoint");


    ctx->pc = 0x1a2a20u;

    // 0x1a2a20: 0x27bdff90
    ctx->pc = 0x1a2a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a2a24: 0x7fbf0060
    ctx->pc = 0x1a2a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1a2a28: 0x7fb50050
    ctx->pc = 0x1a2a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a2a2c: 0x7fb40040
    ctx->pc = 0x1a2a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a2a30: 0x7fb30030
    ctx->pc = 0x1a2a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a2a34: 0x7fb20020
    ctx->pc = 0x1a2a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a2a38: 0x7fb10010
    ctx->pc = 0x1a2a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2a3c: 0x7fb00000
    ctx->pc = 0x1a2a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2a40: 0x70808e28
    ctx->pc = 0x1a2a40u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a2a44: 0x10a00043
    ctx->pc = 0x1A2A44u;
    {
        const bool branch_taken_0x1a2a44 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2A48u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2a44) {
            ctx->pc = 0x1A2B54u;
            goto label_1a2b54;
        }
    }
    ctx->pc = 0x1A2A4Cu;
    // 0x1a2a4c: 0x6a080
    ctx->pc = 0x1a2a4cu;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2a50: 0x214a821
    ctx->pc = 0x1a2a50u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1a2a54: 0x8eb20000
    ctx->pc = 0x1a2a54u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a2a58: 0x16400006
    ctx->pc = 0x1A2A58u;
    {
        const bool branch_taken_0x1a2a58 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2A5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1a2a58) {
            ctx->pc = 0x1A2A74u;
            goto label_1a2a74;
        }
    }
    ctx->pc = 0x1A2A60u;
    // 0x1a2a60: 0xc06878c
    ctx->pc = 0x1A2A60u;
    SET_GPR_U32(ctx, 31, 0x1A2A68u);
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A68u; }
        else if (ctx->pc != 0x1A2A68u) { ctx->pc = 0x1A2A68u; }
    }
    if (ctx->pc != 0x1A2A68u) { return; }
    ctx->pc = 0x1A2A68u;
    // 0x1a2a68: 0xac510000
    ctx->pc = 0x1a2a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1a2a6c: 0x10000035
    ctx->pc = 0x1A2A6Cu;
    {
        const bool branch_taken_0x1a2a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2A70u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2a6c) {
            ctx->pc = 0x1A2B44u;
            goto label_1a2b44;
        }
    }
    ctx->pc = 0x1A2A74u;
label_1a2a74:
    // 0x1a2a74: 0x8eb30004
    ctx->pc = 0x1a2a74u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a2a78: 0x26420001
    ctx->pc = 0x1a2a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a2a7c: 0xc06878c
    ctx->pc = 0x1A2A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A2A84u);
    ctx->pc = 0x1A2A80u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A84u; }
        else if (ctx->pc != 0x1A2A84u) { ctx->pc = 0x1A2A84u; }
    }
    if (ctx->pc != 0x1A2A84u) { return; }
    ctx->pc = 0x1A2A84u;
    // 0x1a2a84: 0xac510000
    ctx->pc = 0x1a2a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1a2a88: 0x12082a
    ctx->pc = 0x1a2a88u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 18)));
    // 0x1a2a8c: 0x70408e28
    ctx->pc = 0x1a2a8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a2a90: 0x10200029
    ctx->pc = 0x1A2A90u;
    {
        const bool branch_taken_0x1a2a90 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2A94u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2a90) {
            ctx->pc = 0x1A2B38u;
            goto label_1a2b38;
        }
    }
    ctx->pc = 0x1A2A98u;
    // 0x1a2a98: 0x2a410009
    ctx->pc = 0x1a2a98u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 9));
    // 0x1a2a9c: 0x14200018
    ctx->pc = 0x1A2A9Cu;
    {
        const bool branch_taken_0x1a2a9c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2AA0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4294967288));
        if (branch_taken_0x1a2a9c) {
            ctx->pc = 0x1A2B00u;
            goto label_1a2b00;
        }
    }
    ctx->pc = 0x1A2AA4u;
    // 0x1a2aa4: 0x72603628
    ctx->pc = 0x1a2aa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a2aa8: 0x72203e28
    ctx->pc = 0x1a2aa8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1a2aac:
    // 0x1a2aac: 0x8cc30000
    ctx->pc = 0x1a2aacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2ab0: 0x24840008
    ctx->pc = 0x1a2ab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a2ab4: 0x85102a
    ctx->pc = 0x1a2ab4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x1a2ab8: 0xace30004
    ctx->pc = 0x1a2ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1a2abc: 0x8cc30004
    ctx->pc = 0x1a2abcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a2ac0: 0xace30008
    ctx->pc = 0x1a2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1a2ac4: 0x8cc30008
    ctx->pc = 0x1a2ac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a2ac8: 0xace3000c
    ctx->pc = 0x1a2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1a2acc: 0x8cc3000c
    ctx->pc = 0x1a2accu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a2ad0: 0xace30010
    ctx->pc = 0x1a2ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x1a2ad4: 0x8cc30010
    ctx->pc = 0x1a2ad4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a2ad8: 0xace30014
    ctx->pc = 0x1a2ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x1a2adc: 0x8cc30014
    ctx->pc = 0x1a2adcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1a2ae0: 0xace30018
    ctx->pc = 0x1a2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x1a2ae4: 0x8cc30018
    ctx->pc = 0x1a2ae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a2ae8: 0xace3001c
    ctx->pc = 0x1a2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x1a2aec: 0x8cc3001c
    ctx->pc = 0x1a2aecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1a2af0: 0xace30020
    ctx->pc = 0x1a2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
    // 0x1a2af4: 0x24c60020
    ctx->pc = 0x1a2af4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x1a2af8: 0x1440ffec
    ctx->pc = 0x1A2AF8u;
    {
        const bool branch_taken_0x1a2af8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2AFCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
        if (branch_taken_0x1a2af8) {
            ctx->pc = 0x1A2AACu;
            goto label_1a2aac;
        }
    }
    ctx->pc = 0x1A2B00u;
label_1a2b00:
    // 0x1a2b00: 0x92082a
    ctx->pc = 0x1a2b00u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 18)));
    // 0x1a2b04: 0x5020000d
    ctx->pc = 0x1A2B04u;
    {
        const bool branch_taken_0x1a2b04 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2b04) {
            ctx->pc = 0x1A2B08u;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1A2B3Cu;
            goto label_1a2b3c;
        }
    }
    ctx->pc = 0x1A2B0Cu;
    // 0x1a2b0c: 0x41080
    ctx->pc = 0x1a2b0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a2b10: 0x2622821
    ctx->pc = 0x1a2b10u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a2b14: 0x2223021
    ctx->pc = 0x1a2b14u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a2b18:
    // 0x1a2b18: 0x8ca30000
    ctx->pc = 0x1a2b18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2b1c: 0x24840001
    ctx->pc = 0x1a2b1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a2b20: 0x92102a
    ctx->pc = 0x1a2b20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 18)));
    // 0x1a2b24: 0xacc30004
    ctx->pc = 0x1a2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1a2b28: 0x24a50004
    ctx->pc = 0x1a2b28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a2b2c: 0x1440fffa
    ctx->pc = 0x1A2B2Cu;
    {
        const bool branch_taken_0x1a2b2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2B30u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x1a2b2c) {
            ctx->pc = 0x1A2B18u;
            goto label_1a2b18;
        }
    }
    ctx->pc = 0x1A2B34u;
    // 0x1a2b34: 0x0
    ctx->pc = 0x1a2b34u;
    // NOP
label_1a2b38:
    // 0x1a2b38: 0x72602628
    ctx->pc = 0x1a2b38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1a2b3c:
    // 0x1a2b3c: 0xc0687c0
    ctx->pc = 0x1A2B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A2B44u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B44u; }
        else if (ctx->pc != 0x1A2B44u) { ctx->pc = 0x1A2B44u; }
    }
    if (ctx->pc != 0x1A2B44u) { return; }
    ctx->pc = 0x1A2B44u;
label_1a2b44:
    // 0x1a2b44: 0x26440001
    ctx->pc = 0x1a2b44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a2b48: 0x2901821
    ctx->pc = 0x1a2b48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1a2b4c: 0xaea40000
    ctx->pc = 0x1a2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x1a2b50: 0xac710004
    ctx->pc = 0x1a2b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_1a2b54:
    // 0x1a2b54: 0x7bbf0060
    ctx->pc = 0x1a2b54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2b58: 0x7bb50050
    ctx->pc = 0x1a2b58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2b5c: 0x7bb40040
    ctx->pc = 0x1a2b5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2b60: 0x7bb30030
    ctx->pc = 0x1a2b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2b64: 0x7bb20020
    ctx->pc = 0x1a2b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2b68: 0x7bb10010
    ctx->pc = 0x1a2b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2b6c: 0x7bb00000
    ctx->pc = 0x1a2b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2b70: 0x3e00008
    ctx->pc = 0x1A2B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2A74u: goto label_1a2a74;
            case 0x1A2AACu: goto label_1a2aac;
            case 0x1A2B00u: goto label_1a2b00;
            case 0x1A2B18u: goto label_1a2b18;
            case 0x1A2B38u: goto label_1a2b38;
            case 0x1A2B3Cu: goto label_1a2b3c;
            case 0x1A2B44u: goto label_1a2b44;
            case 0x1A2B54u: goto label_1a2b54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2B78u;
}

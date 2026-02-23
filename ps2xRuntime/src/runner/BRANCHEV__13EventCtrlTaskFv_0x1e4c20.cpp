#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BRANCHEV__13EventCtrlTaskFv
// Address: 0x1e4c20 - 0x1e4ce8
void BRANCHEV__13EventCtrlTaskFv_0x1e4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BRANCHEV__13EventCtrlTaskFv");


    ctx->pc = 0x1e4c20u;

    // 0x1e4c20: 0x8c83000c
    ctx->pc = 0x1e4c20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4c24: 0x70004628
    ctx->pc = 0x1e4c24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e4c28: 0x2409ffff
    ctx->pc = 0x1e4c28u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4c2c: 0x24630004
    ctx->pc = 0x1e4c2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e4c30: 0xac83000c
    ctx->pc = 0x1e4c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1e4c34: 0x8c83000c
    ctx->pc = 0x1e4c34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4c38: 0x8c670000
    ctx->pc = 0x1e4c38u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4c3c: 0x0
    ctx->pc = 0x1e4c3cu;
    // NOP
    // 0x1e4c40: 0x71201e28
    ctx->pc = 0x1e4c40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1e4c44: 0x71203628
    ctx->pc = 0x1e4c44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_1e4c48:
    // 0x1e4c48: 0x8c85000c
    ctx->pc = 0x1e4c48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4c4c: 0x8caa0000
    ctx->pc = 0x1e4c4cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4c50: 0x11460006
    ctx->pc = 0x1E4C50u;
    {
        const bool branch_taken_0x1e4c50 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 6));
        ctx->pc = 0x1E4C54u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x1e4c50) {
            ctx->pc = 0x1E4C6Cu;
            goto label_1e4c6c;
        }
    }
    ctx->pc = 0x1E4C58u;
    // 0x1e4c58: 0x83858bb4
    ctx->pc = 0x1e4c58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937524)));
    // 0x1e4c5c: 0x14a90003
    ctx->pc = 0x1E4C5Cu;
    {
        const bool branch_taken_0x1e4c5c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 9));
        if (branch_taken_0x1e4c5c) {
            ctx->pc = 0x1E4C6Cu;
            goto label_1e4c6c;
        }
    }
    ctx->pc = 0x1E4C64u;
    // 0x1e4c64: 0x10000008
    ctx->pc = 0x1E4C64u;
    {
        const bool branch_taken_0x1e4c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4C68u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e4c64) {
            ctx->pc = 0x1E4C88u;
            goto label_1e4c88;
        }
    }
    ctx->pc = 0x1E4C6Cu;
label_1e4c6c:
    // 0x1e4c6c: 0x8c85000c
    ctx->pc = 0x1e4c6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4c70: 0x24a50004
    ctx->pc = 0x1e4c70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e4c74: 0xac85000c
    ctx->pc = 0x1e4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1e4c78: 0x8c85000c
    ctx->pc = 0x1e4c78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4c7c: 0x8ca50000
    ctx->pc = 0x1e4c7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4c80: 0x14a3fff1
    ctx->pc = 0x1E4C80u;
    {
        const bool branch_taken_0x1e4c80 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e4c80) {
            ctx->pc = 0x1E4C48u;
            goto label_1e4c48;
        }
    }
    ctx->pc = 0x1E4C88u;
label_1e4c88:
    // 0x1e4c88: 0x15000003
    ctx->pc = 0x1E4C88u;
    {
        const bool branch_taken_0x1e4c88 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e4c88) {
            ctx->pc = 0x1E4C98u;
            goto label_1e4c98;
        }
    }
    ctx->pc = 0x1E4C90u;
    // 0x1e4c90: 0x10000002
    ctx->pc = 0x1E4C90u;
    {
        const bool branch_taken_0x1e4c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4C94u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937520), (uint8_t)GPR_U32(ctx, 7));
        if (branch_taken_0x1e4c90) {
            ctx->pc = 0x1E4C9Cu;
            goto label_1e4c9c;
        }
    }
    ctx->pc = 0x1E4C98u;
label_1e4c98:
    // 0x1e4c98: 0xa3888bb0
    ctx->pc = 0x1e4c98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937520), (uint8_t)GPR_U32(ctx, 8));
label_1e4c9c:
    // 0x1e4c9c: 0x83868ba8
    ctx->pc = 0x1e4c9cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1e4ca0: 0x83858bac
    ctx->pc = 0x1e4ca0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x1e4ca4: 0x3c0101fc
    ctx->pc = 0x1e4ca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1e4ca8: 0x83838bb0
    ctx->pc = 0x1e4ca8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937520)));
    // 0x1e4cac: 0x63080
    ctx->pc = 0x1e4cacu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e4cb0: 0xc10821
    ctx->pc = 0x1e4cb0u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x1e4cb4: 0x8c262000
    ctx->pc = 0x1e4cb4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 8192)));
    // 0x1e4cb8: 0x53880
    ctx->pc = 0x1e4cb8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e4cbc: 0x32880
    ctx->pc = 0x1e4cbcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4cc0: 0xc71821
    ctx->pc = 0x1e4cc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1e4cc4: 0x8c630000
    ctx->pc = 0x1e4cc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4cc8: 0x3c010050
    ctx->pc = 0x1e4cc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e4ccc: 0x651821
    ctx->pc = 0x1e4cccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e4cd0: 0x8c630000
    ctx->pc = 0x1e4cd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4cd4: 0xac83000c
    ctx->pc = 0x1e4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1e4cd8: 0xa3808bb4
    ctx->pc = 0x1e4cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937524), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4cdc: 0xa020e4f7
    ctx->pc = 0x1e4cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294960375), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4ce0: 0x3e00008
    ctx->pc = 0x1E4CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4CE4u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4C48u: goto label_1e4c48;
            case 0x1E4C6Cu: goto label_1e4c6c;
            case 0x1E4C88u: goto label_1e4c88;
            case 0x1E4C98u: goto label_1e4c98;
            case 0x1E4C9Cu: goto label_1e4c9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4CE8u;
}

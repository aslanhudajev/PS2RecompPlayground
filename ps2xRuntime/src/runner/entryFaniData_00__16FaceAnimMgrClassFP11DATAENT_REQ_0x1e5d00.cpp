#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaniData_00__16FaceAnimMgrClassFP11DATAENT_REQ
// Address: 0x1e5d00 - 0x1e5d9c
void entryFaniData_00__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaniData_00__16FaceAnimMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e5d00u;

    // 0x1e5d00: 0x27bdffe0
    ctx->pc = 0x1e5d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5d04: 0x7fbf0010
    ctx->pc = 0x1e5d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e5d08: 0x7fb00000
    ctx->pc = 0x1e5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5d0c: 0x8ca30008
    ctx->pc = 0x1e5d0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5d10: 0x3c020050
    ctx->pc = 0x1e5d10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e5d14: 0x244208b0
    ctx->pc = 0x1e5d14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2224));
    // 0x1e5d18: 0xaf838b30
    ctx->pc = 0x1e5d18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 3));
    // 0x1e5d1c: 0x8f848b30
    ctx->pc = 0x1e5d1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e5d20: 0x41880
    ctx->pc = 0x1e5d20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e5d24: 0x431021
    ctx->pc = 0x1e5d24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5d28: 0x8c420000
    ctx->pc = 0x1e5d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5d2c: 0x14400016
    ctx->pc = 0x1E5D2Cu;
    {
        const bool branch_taken_0x1e5d2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E5D30u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e5d2c) {
            ctx->pc = 0x1E5D88u;
            goto label_1e5d88;
        }
    }
    ctx->pc = 0x1E5D34u;
    // 0x1e5d34: 0x41040
    ctx->pc = 0x1e5d34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e5d38: 0x441021
    ctx->pc = 0x1e5d38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e5d3c: 0x21880
    ctx->pc = 0x1e5d3cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5d40: 0x3c020027
    ctx->pc = 0x1e5d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e5d44: 0x2442b240
    ctx->pc = 0x1e5d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x1e5d48: 0x431021
    ctx->pc = 0x1e5d48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5d4c: 0x3c010050
    ctx->pc = 0x1e5d4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5d50: 0x8c450000
    ctx->pc = 0x1e5d50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5d54: 0x8c240c78
    ctx->pc = 0x1e5d54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3192)));
    // 0x1e5d58: 0xc05af94
    ctx->pc = 0x1E5D58u;
    SET_GPR_U32(ctx, 31, 0x1E5D60u);
    ctx->pc = 0x1E5D5Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D60u; }
        else if (ctx->pc != 0x1E5D60u) { ctx->pc = 0x1E5D60u; }
    }
    if (ctx->pc != 0x1E5D60u) { return; }
    ctx->pc = 0x1E5D60u;
    // 0x1e5d60: 0x8f848b30
    ctx->pc = 0x1e5d60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e5d64: 0x3c020050
    ctx->pc = 0x1e5d64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e5d68: 0x244308b0
    ctx->pc = 0x1e5d68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2224));
    // 0x1e5d6c: 0x2405ffff
    ctx->pc = 0x1e5d6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5d70: 0x24020001
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5d74: 0x42080
    ctx->pc = 0x1e5d74u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e5d78: 0x641821
    ctx->pc = 0x1e5d78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5d7c: 0xac650000
    ctx->pc = 0x1e5d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1e5d80: 0x10000002
    ctx->pc = 0x1E5D80u;
    {
        const bool branch_taken_0x1e5d80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5D84u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1e5d80) {
            ctx->pc = 0x1E5D8Cu;
            goto label_1e5d8c;
        }
    }
    ctx->pc = 0x1E5D88u;
label_1e5d88:
    // 0x1e5d88: 0x2402ffff
    ctx->pc = 0x1e5d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e5d8c:
    // 0x1e5d8c: 0x7bbf0010
    ctx->pc = 0x1e5d8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5d90: 0x7bb00000
    ctx->pc = 0x1e5d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5d94: 0x3e00008
    ctx->pc = 0x1E5D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5D88u: goto label_1e5d88;
            case 0x1E5D8Cu: goto label_1e5d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5D9Cu;
}

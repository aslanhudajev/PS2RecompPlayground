#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetBpFromPos
// Address: 0x1a9ce0 - 0x1a9e50
void GetBpFromPos_0x1a9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetBpFromPos");


    ctx->pc = 0x1a9ce0u;

    // 0x1a9ce0: 0x24030014
    ctx->pc = 0x1a9ce0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a9ce4: 0x10c30044
    ctx->pc = 0x1A9CE4u;
    {
        const bool branch_taken_0x1a9ce4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A9CE8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9ce4) {
            ctx->pc = 0x1A9DF8u;
            goto label_1a9df8;
        }
    }
    ctx->pc = 0x1A9CECu;
    // 0x1a9cec: 0x24030013
    ctx->pc = 0x1a9cecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a9cf0: 0x50c30030
    ctx->pc = 0x1A9CF0u;
    {
        const bool branch_taken_0x1a9cf0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a9cf0) {
            ctx->pc = 0x1A9CF4u;
            SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2));
            ctx->pc = 0x1A9DB4u;
            goto label_1a9db4;
        }
    }
    ctx->pc = 0x1A9CF8u;
    // 0x1a9cf8: 0x24030002
    ctx->pc = 0x1a9cf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9cfc: 0x50c30019
    ctx->pc = 0x1A9CFCu;
    {
        const bool branch_taken_0x1a9cfc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a9cfc) {
            ctx->pc = 0x1A9D00u;
            SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x1A9D64u;
            goto label_1a9d64;
        }
    }
    ctx->pc = 0x1A9D04u;
    // 0x1a9d04: 0x50c00003
    ctx->pc = 0x1A9D04u;
    {
        const bool branch_taken_0x1a9d04 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9d04) {
            ctx->pc = 0x1A9D08u;
            SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2));
            ctx->pc = 0x1A9D14u;
            goto label_1a9d14;
        }
    }
    ctx->pc = 0x1A9D0Cu;
    // 0x1a9d0c: 0x1000004e
    ctx->pc = 0x1A9D0Cu;
    {
        const bool branch_taken_0x1a9d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9d0c) {
            ctx->pc = 0x1A9E48u;
            goto label_1a9e48;
        }
    }
    ctx->pc = 0x1A9D14u;
label_1a9d14:
    // 0x1a9d14: 0x30830001
    ctx->pc = 0x1a9d14u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
    // 0x1a9d18: 0x21040
    ctx->pc = 0x1a9d18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9d1c: 0x621821
    ctx->pc = 0x1a9d1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9d20: 0x30820004
    ctx->pc = 0x1a9d20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 4));
    // 0x1a9d24: 0x21080
    ctx->pc = 0x1a9d24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9d28: 0x431821
    ctx->pc = 0x1a9d28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d2c: 0x410c3
    ctx->pc = 0x1a9d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a9d30: 0x21140
    ctx->pc = 0x1a9d30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a9d34: 0x431821
    ctx->pc = 0x1a9d34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d38: 0x30a20001
    ctx->pc = 0x1a9d38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 1));
    // 0x1a9d3c: 0x21040
    ctx->pc = 0x1a9d3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9d40: 0x431821
    ctx->pc = 0x1a9d40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d44: 0x30a20002
    ctx->pc = 0x1a9d44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 2));
    // 0x1a9d48: 0x21080
    ctx->pc = 0x1a9d48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9d4c: 0x431821
    ctx->pc = 0x1a9d4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d50: 0x51083
    ctx->pc = 0x1a9d50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1a9d54: 0x21140
    ctx->pc = 0x1a9d54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a9d58: 0x471018
    ctx->pc = 0x1a9d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1a9d5c: 0x1000003a
    ctx->pc = 0x1A9D5Cu;
    {
        const bool branch_taken_0x1a9d5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9D60u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1a9d5c) {
            ctx->pc = 0x1A9E48u;
            goto label_1a9e48;
        }
    }
    ctx->pc = 0x1A9D64u;
label_1a9d64:
    // 0x1a9d64: 0x21840
    ctx->pc = 0x1a9d64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9d68: 0x30820002
    ctx->pc = 0x1a9d68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2));
    // 0x1a9d6c: 0x21080
    ctx->pc = 0x1a9d6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9d70: 0x621821
    ctx->pc = 0x1a9d70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9d74: 0x41083
    ctx->pc = 0x1a9d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1a9d78: 0x21140
    ctx->pc = 0x1a9d78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a9d7c: 0x431821
    ctx->pc = 0x1a9d7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d80: 0x30a20001
    ctx->pc = 0x1a9d80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 1));
    // 0x1a9d84: 0x431821
    ctx->pc = 0x1a9d84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d88: 0x30a20002
    ctx->pc = 0x1a9d88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 2));
    // 0x1a9d8c: 0x21040
    ctx->pc = 0x1a9d8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9d90: 0x431821
    ctx->pc = 0x1a9d90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d94: 0x30a20004
    ctx->pc = 0x1a9d94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 4));
    // 0x1a9d98: 0x21080
    ctx->pc = 0x1a9d98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9d9c: 0x431821
    ctx->pc = 0x1a9d9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9da0: 0x510c3
    ctx->pc = 0x1a9da0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 3));
    // 0x1a9da4: 0x21140
    ctx->pc = 0x1a9da4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a9da8: 0x471018
    ctx->pc = 0x1a9da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1a9dac: 0x10000026
    ctx->pc = 0x1A9DACu;
    {
        const bool branch_taken_0x1a9dac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9DB0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1a9dac) {
            ctx->pc = 0x1A9E48u;
            goto label_1a9e48;
        }
    }
    ctx->pc = 0x1A9DB4u;
label_1a9db4:
    // 0x1a9db4: 0x30830001
    ctx->pc = 0x1a9db4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
    // 0x1a9db8: 0x21040
    ctx->pc = 0x1a9db8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9dbc: 0x621821
    ctx->pc = 0x1a9dbcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9dc0: 0x41083
    ctx->pc = 0x1a9dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1a9dc4: 0x21100
    ctx->pc = 0x1a9dc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a9dc8: 0x431821
    ctx->pc = 0x1a9dc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9dcc: 0x30a20001
    ctx->pc = 0x1a9dccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 1));
    // 0x1a9dd0: 0x21040
    ctx->pc = 0x1a9dd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9dd4: 0x431821
    ctx->pc = 0x1a9dd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9dd8: 0x30a20002
    ctx->pc = 0x1a9dd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 2));
    // 0x1a9ddc: 0x21080
    ctx->pc = 0x1a9ddcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9de0: 0x431821
    ctx->pc = 0x1a9de0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9de4: 0x51083
    ctx->pc = 0x1a9de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1a9de8: 0x21100
    ctx->pc = 0x1a9de8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a9dec: 0x471018
    ctx->pc = 0x1a9decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1a9df0: 0x10000015
    ctx->pc = 0x1A9DF0u;
    {
        const bool branch_taken_0x1a9df0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9DF4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1a9df0) {
            ctx->pc = 0x1A9E48u;
            goto label_1a9e48;
        }
    }
    ctx->pc = 0x1A9DF8u;
label_1a9df8:
    // 0x1a9df8: 0x30820001
    ctx->pc = 0x1a9df8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x1a9dfc: 0x21840
    ctx->pc = 0x1a9dfcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9e00: 0x30820002
    ctx->pc = 0x1a9e00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2));
    // 0x1a9e04: 0x21080
    ctx->pc = 0x1a9e04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9e08: 0x621821
    ctx->pc = 0x1a9e08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9e0c: 0x41083
    ctx->pc = 0x1a9e0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1a9e10: 0x21140
    ctx->pc = 0x1a9e10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a9e14: 0x431821
    ctx->pc = 0x1a9e14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9e18: 0x30a20001
    ctx->pc = 0x1a9e18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 1));
    // 0x1a9e1c: 0x431821
    ctx->pc = 0x1a9e1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9e20: 0x30a20002
    ctx->pc = 0x1a9e20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 2));
    // 0x1a9e24: 0x21040
    ctx->pc = 0x1a9e24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9e28: 0x431821
    ctx->pc = 0x1a9e28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9e2c: 0x30a20004
    ctx->pc = 0x1a9e2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 4));
    // 0x1a9e30: 0x21080
    ctx->pc = 0x1a9e30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9e34: 0x431821
    ctx->pc = 0x1a9e34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9e38: 0x510c3
    ctx->pc = 0x1a9e38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 3));
    // 0x1a9e3c: 0x21100
    ctx->pc = 0x1a9e3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a9e40: 0x471018
    ctx->pc = 0x1a9e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1a9e44: 0x621021
    ctx->pc = 0x1a9e44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a9e48:
    // 0x1a9e48: 0x3e00008
    ctx->pc = 0x1A9E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D14u: goto label_1a9d14;
            case 0x1A9D64u: goto label_1a9d64;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9DF8u: goto label_1a9df8;
            case 0x1A9E48u: goto label_1a9e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9E50u;
}

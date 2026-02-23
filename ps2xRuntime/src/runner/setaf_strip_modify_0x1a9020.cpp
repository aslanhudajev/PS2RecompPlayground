#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setaf_strip_modify
// Address: 0x1a9020 - 0x1a90d0
void setaf_strip_modify_0x1a9020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setaf_strip_modify");


    ctx->pc = 0x1a9020u;

    // 0x1a9020: 0x8cc80004
    ctx->pc = 0x1a9020u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a9024: 0x1100000d
    ctx->pc = 0x1A9024u;
    {
        const bool branch_taken_0x1a9024 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9028u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9024) {
            ctx->pc = 0x1A905Cu;
            goto label_1a905c;
        }
    }
    ctx->pc = 0x1A902Cu;
    // 0x1a902c: 0x8cc70008
    ctx->pc = 0x1a902cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a9030: 0x4e00007
    ctx->pc = 0x1A9030u;
    {
        const bool branch_taken_0x1a9030 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1A9034u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a9030) {
            ctx->pc = 0x1A9050u;
            goto label_1a9050;
        }
    }
    ctx->pc = 0x1A9038u;
    // 0x1a9038: 0x8cc3000c
    ctx->pc = 0x1a9038u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a903c: 0x24e50004
    ctx->pc = 0x1a903cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a9040: 0x65082a
    ctx->pc = 0x1a9040u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x1a9044: 0x10200004
    ctx->pc = 0x1A9044u;
    {
        const bool branch_taken_0x1a9044 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9048u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 3));
        if (branch_taken_0x1a9044) {
            ctx->pc = 0x1A9058u;
            goto label_1a9058;
        }
    }
    ctx->pc = 0x1A904Cu;
    // 0x1a904c: 0x2403ffff
    ctx->pc = 0x1a904cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9050:
    // 0x1a9050: 0x1000001d
    ctx->pc = 0x1A9050u;
    {
        const bool branch_taken_0x1a9050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9054u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x1a9050) {
            ctx->pc = 0x1A90C8u;
            goto label_1a90c8;
        }
    }
    ctx->pc = 0x1A9058u;
label_1a9058:
    // 0x1a9058: 0x1033821
    ctx->pc = 0x1a9058u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1a905c:
    // 0x1a905c: 0x8c85000c
    ctx->pc = 0x1a905cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a9060: 0x3c030020
    ctx->pc = 0x1a9060u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
    // 0x1a9064: 0xa31824
    ctx->pc = 0x1a9064u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a9068: 0x14600017
    ctx->pc = 0x1A9068u;
    {
        const bool branch_taken_0x1a9068 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a9068) {
            ctx->pc = 0x1A90C8u;
            goto label_1a90c8;
        }
    }
    ctx->pc = 0x1A9070u;
    // 0x1a9070: 0x10e0000e
    ctx->pc = 0x1A9070u;
    {
        const bool branch_taken_0x1a9070 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9074u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 12));
        if (branch_taken_0x1a9070) {
            ctx->pc = 0x1A90ACu;
            goto label_1a90ac;
        }
    }
    ctx->pc = 0x1A9078u;
    // 0x1a9078: 0xace30000
    ctx->pc = 0x1a9078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1a907c: 0x8c85000c
    ctx->pc = 0x1a907cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a9080: 0x24830010
    ctx->pc = 0x1a9080u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a9084: 0xace50004
    ctx->pc = 0x1a9084u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x1a9088: 0x8cc50008
    ctx->pc = 0x1a9088u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a908c: 0x24a50001
    ctx->pc = 0x1a908cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a9090: 0xacc50008
    ctx->pc = 0x1a9090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1a9094: 0xace30008
    ctx->pc = 0x1a9094u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1a9098: 0x8c830010
    ctx->pc = 0x1a9098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a909c: 0xace3000c
    ctx->pc = 0x1a909cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1a90a0: 0x8cc30008
    ctx->pc = 0x1a90a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a90a4: 0x24630001
    ctx->pc = 0x1a90a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a90a8: 0xacc30008
    ctx->pc = 0x1a90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1a90ac:
    // 0x1a90ac: 0x8c83000c
    ctx->pc = 0x1a90acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a90b0: 0x3c050020
    ctx->pc = 0x1a90b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32 << 16));
    // 0x1a90b4: 0x651825
    ctx->pc = 0x1a90b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a90b8: 0xac83000c
    ctx->pc = 0x1a90b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1a90bc: 0x8c830010
    ctx->pc = 0x1a90bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a90c0: 0x651825
    ctx->pc = 0x1a90c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a90c4: 0xac830010
    ctx->pc = 0x1a90c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_1a90c8:
    // 0x1a90c8: 0x3e00008
    ctx->pc = 0x1A90C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9050u: goto label_1a9050;
            case 0x1A9058u: goto label_1a9058;
            case 0x1A905Cu: goto label_1a905c;
            case 0x1A90ACu: goto label_1a90ac;
            case 0x1A90C8u: goto label_1a90c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A90D0u;
}

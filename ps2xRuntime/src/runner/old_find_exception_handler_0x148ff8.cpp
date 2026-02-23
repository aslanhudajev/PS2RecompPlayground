#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: old_find_exception_handler
// Address: 0x148ff8 - 0x1490d0
void old_find_exception_handler_0x148ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("old_find_exception_handler");


    ctx->pc = 0x148ff8u;

    // 0x148ff8: 0xa0682d
    ctx->pc = 0x148ff8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ffc: 0x11a00032
    ctx->pc = 0x148FFCu;
    {
        const bool branch_taken_0x148ffc = (GPR_U32(ctx, 13) == GPR_U32(ctx, 0));
        ctx->pc = 0x149000u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x148ffc) {
            ctx->pc = 0x1490C8u;
            goto label_1490c8;
        }
    }
    ctx->pc = 0x149004u;
    // 0x149004: 0x3c02ffff
    ctx->pc = 0x149004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x149008: 0x8da30000
    ctx->pc = 0x149008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x14900c: 0x3442ffff
    ctx->pc = 0x14900cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x149010: 0x10620026
    ctx->pc = 0x149010u;
    {
        const bool branch_taken_0x149010 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x149014u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149010) {
            ctx->pc = 0x1490ACu;
            goto label_1490ac;
        }
    }
    ctx->pc = 0x149018u;
    // 0x149018: 0x3c09ffff
    ctx->pc = 0x149018u;
    SET_GPR_U32(ctx, 9, ((uint32_t)65535 << 16));
    // 0x14901c: 0x240c000c
    ctx->pc = 0x14901cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 12));
    // 0x149020: 0x240bffff
    ctx->pc = 0x149020u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149024: 0x3529ffff
    ctx->pc = 0x149024u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 65535));
    // 0x149028: 0x1a0302d
    ctx->pc = 0x149028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14902c: 0x0
    ctx->pc = 0x14902cu;
    // NOP
label_149030:
    // 0x149030: 0x8cc70000
    ctx->pc = 0x149030u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149034: 0x87102b
    ctx->pc = 0x149034u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x149038: 0x14400012
    ctx->pc = 0x149038u;
    {
        const bool branch_taken_0x149038 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x149038) {
            ctx->pc = 0x149084u;
            goto label_149084;
        }
    }
    ctx->pc = 0x149040u;
    // 0x149040: 0x8cc50004
    ctx->pc = 0x149040u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x149044: 0x85102b
    ctx->pc = 0x149044u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x149048: 0x1040000e
    ctx->pc = 0x149048u;
    {
        const bool branch_taken_0x149048 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x149048) {
            ctx->pc = 0x149084u;
            goto label_149084;
        }
    }
    ctx->pc = 0x149050u;
    // 0x149050: 0x110b000a
    ctx->pc = 0x149050u;
    {
        const bool branch_taken_0x149050 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 11));
        ctx->pc = 0x149054u;
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        if (branch_taken_0x149050) {
            ctx->pc = 0x14907Cu;
            goto label_14907c;
        }
    }
    ctx->pc = 0x149058u;
    // 0x149058: 0x4d1821
    ctx->pc = 0x149058u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x14905c: 0x8c620004
    ctx->pc = 0x14905cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x149060: 0x45102b
    ctx->pc = 0x149060u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x149064: 0x5440000e
    ctx->pc = 0x149064u;
    {
        const bool branch_taken_0x149064 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x149064) {
            ctx->pc = 0x149068u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 12));
            ctx->pc = 0x1490A0u;
            goto label_1490a0;
        }
    }
    ctx->pc = 0x14906Cu;
    // 0x14906c: 0x8c620000
    ctx->pc = 0x14906cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149070: 0xe2102b
    ctx->pc = 0x149070u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x149074: 0x5440000a
    ctx->pc = 0x149074u;
    {
        const bool branch_taken_0x149074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x149074) {
            ctx->pc = 0x149078u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 12));
            ctx->pc = 0x1490A0u;
            goto label_1490a0;
        }
    }
    ctx->pc = 0x14907Cu;
label_14907c:
    // 0x14907c: 0x10000007
    ctx->pc = 0x14907Cu;
    {
        const bool branch_taken_0x14907c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x149080u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14907c) {
            ctx->pc = 0x14909Cu;
            goto label_14909c;
        }
    }
    ctx->pc = 0x149084u;
label_149084:
    // 0x149084: 0x5020006
    ctx->pc = 0x149084u;
    {
        const bool branch_taken_0x149084 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x149084) {
            ctx->pc = 0x149088u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 12));
            ctx->pc = 0x1490A0u;
            goto label_1490a0;
        }
    }
    ctx->pc = 0x14908Cu;
    // 0x14908c: 0x8cc20000
    ctx->pc = 0x14908cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149090: 0x82102b
    ctx->pc = 0x149090u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x149094: 0x14400006
    ctx->pc = 0x149094u;
    {
        const bool branch_taken_0x149094 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x149098u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x149094) {
            ctx->pc = 0x1490B0u;
            goto label_1490b0;
        }
    }
    ctx->pc = 0x14909Cu;
label_14909c:
    // 0x14909c: 0x24c6000c
    ctx->pc = 0x14909cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 12));
label_1490a0:
    // 0x1490a0: 0x8cc20000
    ctx->pc = 0x1490a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1490a4: 0x1449ffe2
    ctx->pc = 0x1490A4u;
    {
        const bool branch_taken_0x1490a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 9));
        ctx->pc = 0x1490A8u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x1490a4) {
            ctx->pc = 0x149030u;
            goto label_149030;
        }
    }
    ctx->pc = 0x1490ACu;
label_1490ac:
    // 0x1490ac: 0x2402ffff
    ctx->pc = 0x1490acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1490b0:
    // 0x1490b0: 0x11020005
    ctx->pc = 0x1490B0u;
    {
        const bool branch_taken_0x1490b0 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x1490B4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x1490b0) {
            ctx->pc = 0x1490C8u;
            goto label_1490c8;
        }
    }
    ctx->pc = 0x1490B8u;
    // 0x1490b8: 0x1031018
    ctx->pc = 0x1490b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1490bc: 0x4d1821
    ctx->pc = 0x1490bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1490c0: 0x3e00008
    ctx->pc = 0x1490C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149030u: goto label_149030;
            case 0x14907Cu: goto label_14907c;
            case 0x149084u: goto label_149084;
            case 0x14909Cu: goto label_14909c;
            case 0x1490A0u: goto label_1490a0;
            case 0x1490ACu: goto label_1490ac;
            case 0x1490B0u: goto label_1490b0;
            case 0x1490C8u: goto label_1490c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1490C8u;
label_1490c8:
    // 0x1490c8: 0x3e00008
    ctx->pc = 0x1490C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149030u: goto label_149030;
            case 0x14907Cu: goto label_14907c;
            case 0x149084u: goto label_149084;
            case 0x14909Cu: goto label_14909c;
            case 0x1490A0u: goto label_1490a0;
            case 0x1490ACu: goto label_1490ac;
            case 0x1490B0u: goto label_1490b0;
            case 0x1490C8u: goto label_1490c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1490D0u;
}

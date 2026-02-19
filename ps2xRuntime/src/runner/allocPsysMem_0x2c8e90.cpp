#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: allocPsysMem
// Address: 0x2c8e90 - 0x2c8fa0
void allocPsysMem_0x2c8e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8e90u;

    // 0x2c8e90: 0x3c02003a
    ctx->pc = 0x2c8e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c8e94: 0x18800013
    ctx->pc = 0x2C8E94u;
    {
        const bool branch_taken_0x2c8e94 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2C8E98u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294945372));
        if (branch_taken_0x2c8e94) {
            ctx->pc = 0x2C8EE4u;
            goto label_2c8ee4;
        }
    }
    ctx->pc = 0x2C8E9Cu;
    // 0x2c8e9c: 0x8cc20008
    ctx->pc = 0x2c8e9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c8ea0: 0x44102b
    ctx->pc = 0x2c8ea0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8ea4: 0x1440000f
    ctx->pc = 0x2C8EA4u;
    {
        const bool branch_taken_0x2c8ea4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C8EA8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31));
        if (branch_taken_0x2c8ea4) {
            ctx->pc = 0x2C8EE4u;
            goto label_2c8ee4;
        }
    }
    ctx->pc = 0x2C8EACu;
    // 0x2c8eac: 0x2402fff0
    ctx->pc = 0x2c8eacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c8eb0: 0x822024
    ctx->pc = 0x2c8eb0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c8eb4: 0x8cc30020
    ctx->pc = 0x2c8eb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c8eb8: 0x8c620000
    ctx->pc = 0x2c8eb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8ebc: 0x0
    ctx->pc = 0x2c8ebcu;
    // NOP
label_2c8ec0:
    // 0x2c8ec0: 0x44102a
    ctx->pc = 0x2c8ec0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2c8ec4: 0x50400009
    ctx->pc = 0x2C8EC4u;
    {
        const bool branch_taken_0x2c8ec4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c8ec4) {
            ctx->pc = 0x2C8EC8u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->pc = 0x2C8EECu;
            goto label_2c8eec;
        }
    }
    ctx->pc = 0x2C8ECCu;
    // 0x2c8ecc: 0x8c630004
    ctx->pc = 0x2c8eccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c8ed0: 0x50600001
    ctx->pc = 0x2C8ED0u;
    {
        const bool branch_taken_0x2c8ed0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c8ed0) {
            ctx->pc = 0x2C8ED4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->pc = 0x2C8ED8u;
            goto label_2c8ed8;
        }
    }
    ctx->pc = 0x2C8ED8u;
label_2c8ed8:
    // 0x2c8ed8: 0x8cc20020
    ctx->pc = 0x2c8ed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c8edc: 0x5462fff8
    ctx->pc = 0x2C8EDCu;
    {
        const bool branch_taken_0x2c8edc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2c8edc) {
            ctx->pc = 0x2C8EE0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x2C8EC0u;
            goto label_2c8ec0;
        }
    }
    ctx->pc = 0x2C8EE4u;
label_2c8ee4:
    // 0x2c8ee4: 0x3e00008
    ctx->pc = 0x2C8EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8EE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8EC0u: goto label_2c8ec0;
            case 0x2C8ED8u: goto label_2c8ed8;
            case 0x2C8EE4u: goto label_2c8ee4;
            case 0x2C8EECu: goto label_2c8eec;
            case 0x2C8F1Cu: goto label_2c8f1c;
            case 0x2C8F20u: goto label_2c8f20;
            case 0x2C8F58u: goto label_2c8f58;
            case 0x2C8F64u: goto label_2c8f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C8EECu;
label_2c8eec:
    // 0x2c8eec: 0x8c620000
    ctx->pc = 0x2c8eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8ef0: 0x441023
    ctx->pc = 0x2c8ef0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8ef4: 0x2c420131
    ctx->pc = 0x2c8ef4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 305));
    // 0x2c8ef8: 0x14400017
    ctx->pc = 0x2C8EF8u;
    {
        const bool branch_taken_0x2c8ef8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C8EFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        if (branch_taken_0x2c8ef8) {
            ctx->pc = 0x2C8F58u;
            goto label_2c8f58;
        }
    }
    ctx->pc = 0x2C8F00u;
    // 0x2c8f00: 0x642821
    ctx->pc = 0x2c8f00u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8f04: 0xac650004
    ctx->pc = 0x2c8f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2c8f08: 0xaca30008
    ctx->pc = 0x2c8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2c8f0c: 0x10400003
    ctx->pc = 0x2C8F0Cu;
    {
        const bool branch_taken_0x2c8f0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8F10u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2c8f0c) {
            ctx->pc = 0x2C8F1Cu;
            goto label_2c8f1c;
        }
    }
    ctx->pc = 0x2C8F14u;
    // 0x2c8f14: 0x10000002
    ctx->pc = 0x2C8F14u;
    {
        const bool branch_taken_0x2c8f14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8F18u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        if (branch_taken_0x2c8f14) {
            ctx->pc = 0x2C8F20u;
            goto label_2c8f20;
        }
    }
    ctx->pc = 0x2C8F1Cu;
label_2c8f1c:
    // 0x2c8f1c: 0xacc5001c
    ctx->pc = 0x2c8f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
label_2c8f20:
    // 0x2c8f20: 0xacc50020
    ctx->pc = 0x2c8f20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
    // 0x2c8f24: 0x8c620000
    ctx->pc = 0x2c8f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8f28: 0x441023
    ctx->pc = 0x2c8f28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8f2c: 0xaca20000
    ctx->pc = 0x2c8f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2c8f30: 0x41023
    ctx->pc = 0x2c8f30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2c8f34: 0xac620000
    ctx->pc = 0x2c8f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c8f38: 0x8cc20010
    ctx->pc = 0x2c8f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c8f3c: 0x24420001
    ctx->pc = 0x2c8f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c8f40: 0xacc20010
    ctx->pc = 0x2c8f40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x2c8f44: 0x8cc20008
    ctx->pc = 0x2c8f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c8f48: 0x441023
    ctx->pc = 0x2c8f48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8f4c: 0xacc20008
    ctx->pc = 0x2c8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2c8f50: 0x3e00008
    ctx->pc = 0x2C8F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8F54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8EC0u: goto label_2c8ec0;
            case 0x2C8ED8u: goto label_2c8ed8;
            case 0x2C8EE4u: goto label_2c8ee4;
            case 0x2C8EECu: goto label_2c8eec;
            case 0x2C8F1Cu: goto label_2c8f1c;
            case 0x2C8F20u: goto label_2c8f20;
            case 0x2C8F58u: goto label_2c8f58;
            case 0x2C8F64u: goto label_2c8f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C8F58u;
label_2c8f58:
    // 0x2c8f58: 0x54400002
    ctx->pc = 0x2C8F58u;
    {
        const bool branch_taken_0x2c8f58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c8f58) {
            ctx->pc = 0x2C8F5Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->pc = 0x2C8F64u;
            goto label_2c8f64;
        }
    }
    ctx->pc = 0x2C8F60u;
    // 0x2c8f60: 0x8cc20018
    ctx->pc = 0x2c8f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_2c8f64:
    // 0x2c8f64: 0xacc20020
    ctx->pc = 0x2c8f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x2c8f68: 0x8c640000
    ctx->pc = 0x2c8f68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8f6c: 0x41023
    ctx->pc = 0x2c8f6cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2c8f70: 0xac620000
    ctx->pc = 0x2c8f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c8f74: 0x8cc20010
    ctx->pc = 0x2c8f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c8f78: 0x24420001
    ctx->pc = 0x2c8f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c8f7c: 0xacc20010
    ctx->pc = 0x2c8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x2c8f80: 0x8cc2000c
    ctx->pc = 0x2c8f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2c8f84: 0x2442ffff
    ctx->pc = 0x2c8f84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c8f88: 0xacc2000c
    ctx->pc = 0x2c8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2c8f8c: 0x8cc20008
    ctx->pc = 0x2c8f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c8f90: 0x441023
    ctx->pc = 0x2c8f90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8f94: 0xacc20008
    ctx->pc = 0x2c8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2c8f98: 0x3e00008
    ctx->pc = 0x2C8F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8F9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8EC0u: goto label_2c8ec0;
            case 0x2C8ED8u: goto label_2c8ed8;
            case 0x2C8EE4u: goto label_2c8ee4;
            case 0x2C8EECu: goto label_2c8eec;
            case 0x2C8F1Cu: goto label_2c8f1c;
            case 0x2C8F20u: goto label_2c8f20;
            case 0x2C8F58u: goto label_2c8f58;
            case 0x2C8F64u: goto label_2c8f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C8FA0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: decode_motion_vector
// Address: 0x2f1ff0 - 0x2f2078
void decode_motion_vector_0x2f1ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f1ff0u;

    // 0x2f1ff0: 0x80502d
    ctx->pc = 0x2f1ff0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ff4: 0x24020010
    ctx->pc = 0x2f1ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f1ff8: 0x8d440000
    ctx->pc = 0x2f1ff8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2f1ffc: 0xa24804
    ctx->pc = 0x2f1ffcu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2f2000: 0x41843
    ctx->pc = 0x2f2000u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2f2004: 0x18c0000c
    ctx->pc = 0x2F2004u;
    {
        const bool branch_taken_0x2f2004 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2F2008u;
        if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x2f2004) {
            ctx->pc = 0x2F2038u;
            goto label_2f2038;
        }
    }
    ctx->pc = 0x2F200Cu;
    // 0x2f200c: 0x24c2ffff
    ctx->pc = 0x2f200cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f2010: 0x24840001
    ctx->pc = 0x2f2010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f2014: 0xa21004
    ctx->pc = 0x2f2014u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2f2018: 0x471021
    ctx->pc = 0x2f2018u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f201c: 0x822021
    ctx->pc = 0x2f201cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f2020: 0x89182a
    ctx->pc = 0x2f2020u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 9)));
    // 0x2f2024: 0x14600011
    ctx->pc = 0x2F2024u;
    {
        const bool branch_taken_0x2f2024 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F2028u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2f2024) {
            ctx->pc = 0x2F206Cu;
            goto label_2f206c;
        }
    }
    ctx->pc = 0x2F202Cu;
    // 0x2f202c: 0x91040
    ctx->pc = 0x2f202cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
    // 0x2f2030: 0x1000000d
    ctx->pc = 0x2F2030u;
    {
        const bool branch_taken_0x2f2030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2034u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x2f2030) {
            ctx->pc = 0x2F2068u;
            goto label_2f2068;
        }
    }
    ctx->pc = 0x2F2038u;
label_2f2038:
    // 0x2f2038: 0x4c1000c
    ctx->pc = 0x2F2038u;
    {
        const bool branch_taken_0x2f2038 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2F203Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2f2038) {
            ctx->pc = 0x2F206Cu;
            goto label_2f206c;
        }
    }
    ctx->pc = 0x2F2040u;
    // 0x2f2040: 0x61027
    ctx->pc = 0x2f2040u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2f2044: 0x2484ffff
    ctx->pc = 0x2f2044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f2048: 0xa21004
    ctx->pc = 0x2f2048u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2f204c: 0x91823
    ctx->pc = 0x2f204cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x2f2050: 0x471021
    ctx->pc = 0x2f2050u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f2054: 0x822023
    ctx->pc = 0x2f2054u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f2058: 0x83182a
    ctx->pc = 0x2f2058u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x2f205c: 0x10600002
    ctx->pc = 0x2F205Cu;
    {
        const bool branch_taken_0x2f205c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2060u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x2f205c) {
            ctx->pc = 0x2F2068u;
            goto label_2f2068;
        }
    }
    ctx->pc = 0x2F2064u;
    // 0x2f2064: 0x822021
    ctx->pc = 0x2f2064u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2f2068:
    // 0x2f2068: 0x41040
    ctx->pc = 0x2f2068u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
label_2f206c:
    // 0x2f206c: 0x88100a
    ctx->pc = 0x2f206cu;
    if (GPR_U32(ctx, 8) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x2f2070: 0x3e00008
    ctx->pc = 0x2F2070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2074u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2038u: goto label_2f2038;
            case 0x2F2068u: goto label_2f2068;
            case 0x2F206Cu: goto label_2f206c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2078u;
}

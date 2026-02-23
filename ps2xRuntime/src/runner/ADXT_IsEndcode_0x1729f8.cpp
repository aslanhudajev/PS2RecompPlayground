#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_IsEndcode
// Address: 0x1729f8 - 0x172a30
void ADXT_IsEndcode_0x1729f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_IsEndcode");


    ctx->pc = 0x1729f8u;

    // 0x1729f8: 0x28a20002
    ctx->pc = 0x1729f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x1729fc: 0x50400003
    ctx->pc = 0x1729FCu;
    {
        const bool branch_taken_0x1729fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1729fc) {
            ctx->pc = 0x172A00u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x172A0Cu;
            goto label_172a0c;
        }
    }
    ctx->pc = 0x172A04u;
label_172a04:
    // 0x172a04: 0x3e00008
    ctx->pc = 0x172A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172A08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A04u: goto label_172a04;
            case 0x172A0Cu: goto label_172a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172A0Cu;
label_172a0c:
    // 0x172a0c: 0x34048001
    ctx->pc = 0x172a0cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32769));
    // 0x172a10: 0x21a00
    ctx->pc = 0x172a10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x172a14: 0x21202
    ctx->pc = 0x172a14u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x172a18: 0x431025
    ctx->pc = 0x172a18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172a1c: 0x3042ffff
    ctx->pc = 0x172a1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x172a20: 0x1444fff8
    ctx->pc = 0x172A20u;
    {
        const bool branch_taken_0x172a20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x172A24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x172a20) {
            ctx->pc = 0x172A04u;
            goto label_172a04;
        }
    }
    ctx->pc = 0x172A28u;
    // 0x172a28: 0x3e00008
    ctx->pc = 0x172A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172A2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A04u: goto label_172a04;
            case 0x172A0Cu: goto label_172a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172A30u;
}

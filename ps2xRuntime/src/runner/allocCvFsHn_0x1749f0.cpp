#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: allocCvFsHn
// Address: 0x1749f0 - 0x174a48
void allocCvFsHn_0x1749f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("allocCvFsHn");


    ctx->pc = 0x1749f0u;

    // 0x1749f0: 0x3c05002e
    ctx->pc = 0x1749f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x1749f4: 0x24a4f1a8
    ctx->pc = 0x1749f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294963624));
    // 0x1749f8: 0x8c820004
    ctx->pc = 0x1749f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1749fc: 0x1040000a
    ctx->pc = 0x1749FCu;
    {
        const bool branch_taken_0x1749fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174A00u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1749fc) {
            ctx->pc = 0x174A28u;
            goto label_174a28;
        }
    }
    ctx->pc = 0x174A04u;
    // 0x174a04: 0x24840004
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x174a08: 0x24630001
    ctx->pc = 0x174a08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x174a0c: 0x0
    ctx->pc = 0x174a0cu;
    // NOP
label_174a10:
    // 0x174a10: 0x28620028
    ctx->pc = 0x174a10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 40));
    // 0x174a14: 0x10400004
    ctx->pc = 0x174A14u;
    {
        const bool branch_taken_0x174a14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174A18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x174a14) {
            ctx->pc = 0x174A28u;
            goto label_174a28;
        }
    }
    ctx->pc = 0x174A1Cu;
    // 0x174a1c: 0x8c820000
    ctx->pc = 0x174a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174a20: 0x5440fffb
    ctx->pc = 0x174A20u;
    {
        const bool branch_taken_0x174a20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x174a20) {
            ctx->pc = 0x174A24u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x174A10u;
            goto label_174a10;
        }
    }
    ctx->pc = 0x174A28u;
label_174a28:
    // 0x174a28: 0x24020028
    ctx->pc = 0x174a28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
    // 0x174a2c: 0x14620003
    ctx->pc = 0x174A2Cu;
    {
        const bool branch_taken_0x174a2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x174A30u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x174a2c) {
            ctx->pc = 0x174A3Cu;
            goto label_174a3c;
        }
    }
    ctx->pc = 0x174A34u;
    // 0x174a34: 0x3e00008
    ctx->pc = 0x174A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174A10u: goto label_174a10;
            case 0x174A28u: goto label_174a28;
            case 0x174A3Cu: goto label_174a3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174A3Cu;
label_174a3c:
    // 0x174a3c: 0x24a2f1a8
    ctx->pc = 0x174a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294963624));
    // 0x174a40: 0x3e00008
    ctx->pc = 0x174A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A44u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174A10u: goto label_174a10;
            case 0x174A28u: goto label_174a28;
            case 0x174A3Cu: goto label_174a3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174A48u;
}

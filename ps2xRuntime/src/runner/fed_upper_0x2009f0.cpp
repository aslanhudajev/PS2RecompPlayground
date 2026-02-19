#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fed_upper
// Address: 0x2009f0 - 0x200a2c
void fed_upper_0x2009f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2009f0u;

    // 0x2009f0: 0x90820000
    ctx->pc = 0x2009f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2009f4: 0x1040000b
    ctx->pc = 0x2009F4u;
    {
        const bool branch_taken_0x2009f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2009F8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2009f4) {
            ctx->pc = 0x200A24u;
            goto label_200a24;
        }
    }
    ctx->pc = 0x2009FCu;
    // 0x2009fc: 0x0
    ctx->pc = 0x2009fcu;
    // NOP
label_200a00:
    // 0x200a00: 0x2462ff9f
    ctx->pc = 0x200a00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x200a04: 0x2c42001a
    ctx->pc = 0x200a04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x200a08: 0x10400002
    ctx->pc = 0x200A08u;
    {
        const bool branch_taken_0x200a08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x200A0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967264));
        if (branch_taken_0x200a08) {
            ctx->pc = 0x200A14u;
            goto label_200a14;
        }
    }
    ctx->pc = 0x200A10u;
    // 0x200a10: 0xa0820000
    ctx->pc = 0x200a10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_200a14:
    // 0x200a14: 0x24840001
    ctx->pc = 0x200a14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x200a18: 0x80820000
    ctx->pc = 0x200a18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200a1c: 0x1440fff8
    ctx->pc = 0x200A1Cu;
    {
        const bool branch_taken_0x200a1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x200A20u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x200a1c) {
            ctx->pc = 0x200A00u;
            goto label_200a00;
        }
    }
    ctx->pc = 0x200A24u;
label_200a24:
    // 0x200a24: 0x3e00008
    ctx->pc = 0x200A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200A00u: goto label_200a00;
            case 0x200A14u: goto label_200a14;
            case 0x200A24u: goto label_200a24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200A2Cu;
}

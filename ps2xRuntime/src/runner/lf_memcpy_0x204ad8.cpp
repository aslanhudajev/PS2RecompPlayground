#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: lf_memcpy
// Address: 0x204ad8 - 0x204b14
void lf_memcpy_0x204ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x204ad8u;

    // 0x204ad8: 0x10c0000c
    ctx->pc = 0x204AD8u;
    {
        const bool branch_taken_0x204ad8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x204ADCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x204ad8) {
            ctx->pc = 0x204B0Cu;
            goto label_204b0c;
        }
    }
    ctx->pc = 0x204AE0u;
    // 0x204ae0: 0x2402ffff
    ctx->pc = 0x204ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204ae4: 0x10c20009
    ctx->pc = 0x204AE4u;
    {
        const bool branch_taken_0x204ae4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x204AE8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x204ae4) {
            ctx->pc = 0x204B0Cu;
            goto label_204b0c;
        }
    }
    ctx->pc = 0x204AECu;
    // 0x204aec: 0x0
    ctx->pc = 0x204aecu;
    // NOP
label_204af0:
    // 0x204af0: 0x90a20000
    ctx->pc = 0x204af0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x204af4: 0xa0820000
    ctx->pc = 0x204af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x204af8: 0x24a50001
    ctx->pc = 0x204af8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x204afc: 0x24840001
    ctx->pc = 0x204afcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x204b00: 0x24c6ffff
    ctx->pc = 0x204b00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x204b04: 0x14c3fffa
    ctx->pc = 0x204B04u;
    {
        const bool branch_taken_0x204b04 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        if (branch_taken_0x204b04) {
            ctx->pc = 0x204AF0u;
            goto label_204af0;
        }
    }
    ctx->pc = 0x204B0Cu;
label_204b0c:
    // 0x204b0c: 0x3e00008
    ctx->pc = 0x204B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204AF0u: goto label_204af0;
            case 0x204B0Cu: goto label_204b0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204B14u;
}

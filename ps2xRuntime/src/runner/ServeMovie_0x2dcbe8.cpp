#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ServeMovie
// Address: 0x2dcbe8 - 0x2dcc78
void ServeMovie_0x2dcbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dcbe8u;

    // 0x2dcbe8: 0x27bdffe0
    ctx->pc = 0x2dcbe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dcbec: 0xffbf0010
    ctx->pc = 0x2dcbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dcbf0: 0xffb00000
    ctx->pc = 0x2dcbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dcbf4: 0x3c03003a
    ctx->pc = 0x2dcbf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dcbf8: 0x8c6229d8
    ctx->pc = 0x2dcbf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10712)));
    // 0x2dcbfc: 0x24420001
    ctx->pc = 0x2dcbfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dcc00: 0xc0b722a
    ctx->pc = 0x2DCC00u;
    SET_GPR_U32(ctx, 31, 0x2DCC08u);
    ctx->pc = 0x2DCC04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10712), GPR_U32(ctx, 2));
    ctx->pc = 0x2DC8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ThreadIsHung_0x2dc8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC08u; }
    }
    if (ctx->pc != 0x2DCC08u) { return; }
    ctx->pc = 0x2DCC08u;
    // 0x2dcc08: 0x14400017
    ctx->pc = 0x2DCC08u;
    {
        const bool branch_taken_0x2dcc08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DCC0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc08) {
            ctx->pc = 0x2DCC68u;
            goto label_2dcc68;
        }
    }
    ctx->pc = 0x2DCC10u;
    // 0x2dcc10: 0x3c02003a
    ctx->pc = 0x2dcc10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcc14: 0x3c04003a
    ctx->pc = 0x2dcc14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dcc18: 0x24842a40
    ctx->pc = 0x2dcc18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10816));
    // 0x2dcc1c: 0x8c452a04
    ctx->pc = 0x2dcc1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 10756)));
    // 0x2dcc20: 0x3c06003a
    ctx->pc = 0x2dcc20u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2dcc24: 0xc0b73c4
    ctx->pc = 0x2DCC24u;
    SET_GPR_U32(ctx, 31, 0x2DCC2Cu);
    ctx->pc = 0x2DCC28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 10768));
    ctx->pc = 0x2DCF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        readMpeg_0x2dcf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC2Cu; }
    }
    if (ctx->pc != 0x2DCC2Cu) { return; }
    ctx->pc = 0x2DCC2Cu;
    // 0x2dcc2c: 0x40802d
    ctx->pc = 0x2dcc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc30: 0x5a000006
    ctx->pc = 0x2DCC30u;
    {
        const bool branch_taken_0x2dcc30 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2dcc30) {
            ctx->pc = 0x2DCC34u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DCC4Cu;
            goto label_2dcc4c;
        }
    }
    ctx->pc = 0x2DCC38u;
    // 0x2dcc38: 0xc0b722a
    ctx->pc = 0x2DCC38u;
    SET_GPR_U32(ctx, 31, 0x2DCC40u);
    ctx->pc = 0x2DC8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ThreadIsHung_0x2dc8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC40u; }
    }
    if (ctx->pc != 0x2DCC40u) { return; }
    ctx->pc = 0x2DCC40u;
    // 0x2dcc40: 0x10400003
    ctx->pc = 0x2DCC40u;
    {
        const bool branch_taken_0x2dcc40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCC44u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcc40) {
            ctx->pc = 0x2DCC50u;
            goto label_2dcc50;
        }
    }
    ctx->pc = 0x2DCC48u;
    // 0x2dcc48: 0x802d
    ctx->pc = 0x2dcc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dcc4c:
    // 0x2dcc4c: 0x3c04003a
    ctx->pc = 0x2dcc4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2dcc50:
    // 0x2dcc50: 0x8c832d9c
    ctx->pc = 0x2dcc50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 11676)));
    // 0x2dcc54: 0x2031024
    ctx->pc = 0x2dcc54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2dcc58: 0x10400002
    ctx->pc = 0x2DCC58u;
    {
        const bool branch_taken_0x2dcc58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCC5Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2dcc58) {
            ctx->pc = 0x2DCC64u;
            goto label_2dcc64;
        }
    }
    ctx->pc = 0x2DCC60u;
    // 0x2dcc60: 0xac822d9c
    ctx->pc = 0x2dcc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11676), GPR_U32(ctx, 2));
label_2dcc64:
    // 0x2dcc64: 0x200102d
    ctx->pc = 0x2dcc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcc68:
    // 0x2dcc68: 0xdfbf0010
    ctx->pc = 0x2dcc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcc6c: 0xdfb00000
    ctx->pc = 0x2dcc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcc70: 0x3e00008
    ctx->pc = 0x2DCC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCC74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DCC4Cu: goto label_2dcc4c;
            case 0x2DCC50u: goto label_2dcc50;
            case 0x2DCC64u: goto label_2dcc64;
            case 0x2DCC68u: goto label_2dcc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DCC78u;
}

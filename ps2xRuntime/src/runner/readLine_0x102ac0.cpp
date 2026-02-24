#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readLine
// Address: 0x102ac0 - 0x102b10
void readLine_0x102ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102ac0u;

    // 0x102ac0: 0x90830000
    ctx->pc = 0x102ac0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102ac4: 0x2402000a
    ctx->pc = 0x102ac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x102ac8: 0x306600ff
    ctx->pc = 0x102ac8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 255));
    // 0x102acc: 0x50c2000e
    ctx->pc = 0x102ACCu;
    {
        const bool branch_taken_0x102acc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x102acc) {
            ctx->pc = 0x102AD0u;
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x102B08u;
            goto label_102b08;
        }
    }
    ctx->pc = 0x102AD4u;
    // 0x102ad4: 0x10c0000b
    ctx->pc = 0x102AD4u;
    {
        const bool branch_taken_0x102ad4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x102AD8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x102ad4) {
            ctx->pc = 0x102B04u;
            goto label_102b04;
        }
    }
    ctx->pc = 0x102ADCu;
    // 0x102adc: 0x2c620020
    ctx->pc = 0x102adcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 32));
label_102ae0:
    // 0x102ae0: 0x50400001
    ctx->pc = 0x102AE0u;
    {
        const bool branch_taken_0x102ae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x102ae0) {
            ctx->pc = 0x102AE4u;
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->pc = 0x102AE8u;
            goto label_102ae8;
        }
    }
    ctx->pc = 0x102AE8u;
label_102ae8:
    // 0x102ae8: 0x24840001
    ctx->pc = 0x102ae8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x102aec: 0x90830000
    ctx->pc = 0x102aecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102af0: 0x306200ff
    ctx->pc = 0x102af0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x102af4: 0x10460003
    ctx->pc = 0x102AF4u;
    {
        const bool branch_taken_0x102af4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x102AF8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x102af4) {
            ctx->pc = 0x102B04u;
            goto label_102b04;
        }
    }
    ctx->pc = 0x102AFCu;
    // 0x102afc: 0x1440fff8
    ctx->pc = 0x102AFCu;
    {
        const bool branch_taken_0x102afc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102B00u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x102afc) {
            ctx->pc = 0x102AE0u;
            goto label_102ae0;
        }
    }
    ctx->pc = 0x102B04u;
label_102b04:
    // 0x102b04: 0xa0a00000
    ctx->pc = 0x102b04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_102b08:
    // 0x102b08: 0x3e00008
    ctx->pc = 0x102B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102B0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102AE0u: goto label_102ae0;
            case 0x102AE8u: goto label_102ae8;
            case 0x102B04u: goto label_102b04;
            case 0x102B08u: goto label_102b08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102B10u;
}

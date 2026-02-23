#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AB048
// Address: 0x1ab048 - 0x1ab090
void sub_001AB048_0x1ab048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AB048");


    ctx->pc = 0x1ab048u;

label_1ab048:
    // 0x1ab048: 0x80a20000
    ctx->pc = 0x1ab048u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ab04c: 0x20c6ffff
    ctx->pc = 0x1ab04cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x1ab050: 0x20a50001
    ctx->pc = 0x1ab050u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1ab054: 0xa0820000
    ctx->pc = 0x1ab054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ab058: 0x0
    ctx->pc = 0x1ab058u;
    // NOP
    // 0x1ab05c: 0x1406fffa
    ctx->pc = 0x1AB05Cu;
    {
        const bool branch_taken_0x1ab05c = (GPR_U32(ctx, 0) != GPR_U32(ctx, 6));
        ctx->pc = 0x1AB060u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        if (branch_taken_0x1ab05c) {
            ctx->pc = 0x1AB048u;
            goto label_1ab048;
        }
    }
    ctx->pc = 0x1AB064u;
    // 0x1ab064: 0x3e00008
    ctx->pc = 0x1AB064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB048u: goto label_1ab048;
            case 0x1AB06Cu: goto label_1ab06c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB06Cu;
label_1ab06c:
    // 0x1ab06c: 0x84a20000
    ctx->pc = 0x1ab06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ab070: 0x20c6ffff
    ctx->pc = 0x1ab070u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x1ab074: 0x20a50002
    ctx->pc = 0x1ab074u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1ab078: 0xa4820000
    ctx->pc = 0x1ab078u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ab07c: 0x0
    ctx->pc = 0x1ab07cu;
    // NOP
    // 0x1ab080: 0x1406fffa
    ctx->pc = 0x1AB080u;
    {
        const bool branch_taken_0x1ab080 = (GPR_U32(ctx, 0) != GPR_U32(ctx, 6));
        ctx->pc = 0x1AB084u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        if (branch_taken_0x1ab080) {
            ctx->pc = 0x1AB06Cu;
            goto label_1ab06c;
        }
    }
    ctx->pc = 0x1AB088u;
    // 0x1ab088: 0x3e00008
    ctx->pc = 0x1AB088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB048u: goto label_1ab048;
            case 0x1AB06Cu: goto label_1ab06c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB090u;
}

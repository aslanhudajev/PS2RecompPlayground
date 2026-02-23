#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AB090
// Address: 0x1ab090 - 0x1ab0d8
void sub_001AB090_0x1ab090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AB090");


    ctx->pc = 0x1ab090u;

label_1ab090:
    // 0x1ab090: 0x8ca20000
    ctx->pc = 0x1ab090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ab094: 0x20c6ffff
    ctx->pc = 0x1ab094u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x1ab098: 0x20a50004
    ctx->pc = 0x1ab098u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1ab09c: 0xac820000
    ctx->pc = 0x1ab09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ab0a0: 0x0
    ctx->pc = 0x1ab0a0u;
    // NOP
    // 0x1ab0a4: 0x1406fffa
    ctx->pc = 0x1AB0A4u;
    {
        const bool branch_taken_0x1ab0a4 = (GPR_U32(ctx, 0) != GPR_U32(ctx, 6));
        ctx->pc = 0x1AB0A8u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        if (branch_taken_0x1ab0a4) {
            ctx->pc = 0x1AB090u;
            goto label_1ab090;
        }
    }
    ctx->pc = 0x1AB0ACu;
    // 0x1ab0ac: 0x3e00008
    ctx->pc = 0x1AB0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB090u: goto label_1ab090;
            case 0x1AB0B4u: goto label_1ab0b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB0B4u;
label_1ab0b4:
    // 0x1ab0b4: 0xdca20000
    ctx->pc = 0x1ab0b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ab0b8: 0x20c6ffff
    ctx->pc = 0x1ab0b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x1ab0bc: 0x20a50008
    ctx->pc = 0x1ab0bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1ab0c0: 0xfc820000
    ctx->pc = 0x1ab0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1ab0c4: 0x0
    ctx->pc = 0x1ab0c4u;
    // NOP
    // 0x1ab0c8: 0x1406fffa
    ctx->pc = 0x1AB0C8u;
    {
        const bool branch_taken_0x1ab0c8 = (GPR_U32(ctx, 0) != GPR_U32(ctx, 6));
        ctx->pc = 0x1AB0CCu;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        if (branch_taken_0x1ab0c8) {
            ctx->pc = 0x1AB0B4u;
            goto label_1ab0b4;
        }
    }
    ctx->pc = 0x1AB0D0u;
    // 0x1ab0d0: 0x3e00008
    ctx->pc = 0x1AB0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB090u: goto label_1ab090;
            case 0x1AB0B4u: goto label_1ab0b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB0D8u;
}

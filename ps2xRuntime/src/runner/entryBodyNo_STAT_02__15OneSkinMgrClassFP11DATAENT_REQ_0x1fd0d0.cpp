#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBodyNo_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fd0d0 - 0x1fd124
void entryBodyNo_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBodyNo_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fd0d0u;

    // 0x1fd0d0: 0x27bdffe0
    ctx->pc = 0x1fd0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd0d4: 0x7fbf0010
    ctx->pc = 0x1fd0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fd0d8: 0x7fb00000
    ctx->pc = 0x1fd0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd0dc: 0x3c010052
    ctx->pc = 0x1fd0dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd0e0: 0x8c2294cc
    ctx->pc = 0x1fd0e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939852)));
    // 0x1fd0e4: 0x14400008
    ctx->pc = 0x1FD0E4u;
    {
        const bool branch_taken_0x1fd0e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FD0E8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fd0e4) {
            ctx->pc = 0x1FD108u;
            goto label_1fd108;
        }
    }
    ctx->pc = 0x1FD0ECu;
    // 0x1fd0ec: 0x3c010052
    ctx->pc = 0x1fd0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd0f0: 0x8c2694c4
    ctx->pc = 0x1fd0f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fd0f4: 0x3c010050
    ctx->pc = 0x1fd0f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd0f8: 0x8c240c80
    ctx->pc = 0x1fd0f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fd0fc: 0x3c010052
    ctx->pc = 0x1fd0fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd100: 0xc05aeba
    ctx->pc = 0x1FD100u;
    SET_GPR_U32(ctx, 31, 0x1FD108u);
    ctx->pc = 0x1FD104u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939840)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD108u; }
        else if (ctx->pc != 0x1FD108u) { ctx->pc = 0x1FD108u; }
    }
    if (ctx->pc != 0x1FD108u) { return; }
    ctx->pc = 0x1FD108u;
label_1fd108:
    // 0x1fd108: 0x24020003
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd10c: 0xae02000c
    ctx->pc = 0x1fd10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1fd110: 0x7bbf0010
    ctx->pc = 0x1fd110u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd114: 0x7bb00000
    ctx->pc = 0x1fd114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd118: 0x24020001
    ctx->pc = 0x1fd118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd11c: 0x3e00008
    ctx->pc = 0x1FD11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD120u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD108u: goto label_1fd108;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD124u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskBank_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fdba0 - 0x1fdbe8
void entryOskBank_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskBank_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fdba0u;

    // 0x1fdba0: 0x27bdffe0
    ctx->pc = 0x1fdba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fdba4: 0x7fbf0010
    ctx->pc = 0x1fdba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fdba8: 0x7fb00000
    ctx->pc = 0x1fdba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdbac: 0x3c010052
    ctx->pc = 0x1fdbacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdbb0: 0x8c2694c4
    ctx->pc = 0x1fdbb0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fdbb4: 0x70a08628
    ctx->pc = 0x1fdbb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fdbb8: 0x3c010050
    ctx->pc = 0x1fdbb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fdbbc: 0x8c240c80
    ctx->pc = 0x1fdbbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fdbc0: 0x3c010052
    ctx->pc = 0x1fdbc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdbc4: 0xc05aeba
    ctx->pc = 0x1FDBC4u;
    SET_GPR_U32(ctx, 31, 0x1FDBCCu);
    ctx->pc = 0x1FDBC8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939840)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBCCu; }
        else if (ctx->pc != 0x1FDBCCu) { ctx->pc = 0x1FDBCCu; }
    }
    if (ctx->pc != 0x1FDBCCu) { return; }
    ctx->pc = 0x1FDBCCu;
    // 0x1fdbcc: 0x24020002
    ctx->pc = 0x1fdbccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fdbd0: 0xae02000c
    ctx->pc = 0x1fdbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1fdbd4: 0x7bbf0010
    ctx->pc = 0x1fdbd4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdbd8: 0x7bb00000
    ctx->pc = 0x1fdbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdbdc: 0x24020001
    ctx->pc = 0x1fdbdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdbe0: 0x3e00008
    ctx->pc = 0x1FDBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDBE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDBE8u;
}

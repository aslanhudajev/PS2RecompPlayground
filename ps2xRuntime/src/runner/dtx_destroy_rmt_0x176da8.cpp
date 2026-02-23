#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dtx_destroy_rmt
// Address: 0x176da8 - 0x176df4
void dtx_destroy_rmt_0x176da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dtx_destroy_rmt");


    ctx->pc = 0x176da8u;

    // 0x176da8: 0x3c07002e
    ctx->pc = 0x176da8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)46 << 16));
    // 0x176dac: 0x27bdffe0
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176db0: 0xace4f640
    ctx->pc = 0x176db0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294964800), GPR_U32(ctx, 4));
    // 0x176db4: 0x3c020024
    ctx->pc = 0x176db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x176db8: 0x3c09002e
    ctx->pc = 0x176db8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)46 << 16));
    // 0x176dbc: 0xffbf0010
    ctx->pc = 0x176dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176dc0: 0x24448ff0
    ctx->pc = 0x176dc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x176dc4: 0x24e7f640
    ctx->pc = 0x176dc4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294964800));
    // 0x176dc8: 0x2529f740
    ctx->pc = 0x176dc8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294965056));
    // 0x176dcc: 0xafa00000
    ctx->pc = 0x176dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x176dd0: 0x24050003
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x176dd4: 0x302d
    ctx->pc = 0x176dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176dd8: 0x24080004
    ctx->pc = 0x176dd8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x176ddc: 0x502d
    ctx->pc = 0x176ddcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176de0: 0xc055e72
    ctx->pc = 0x176DE0u;
    SET_GPR_U32(ctx, 31, 0x176DE8u);
    ctx->pc = 0x176DE4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DE8u; }
        else if (ctx->pc != 0x176DE8u) { ctx->pc = 0x176DE8u; }
    }
    if (ctx->pc != 0x176DE8u) { return; }
    ctx->pc = 0x176DE8u;
    // 0x176de8: 0xdfbf0010
    ctx->pc = 0x176de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176dec: 0x3e00008
    ctx->pc = 0x176DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176DF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176DF4u;
}

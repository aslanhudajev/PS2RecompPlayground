#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTR_Destroy
// Address: 0x176b38 - 0x176b60
void DTR_Destroy_0x176b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTR_Destroy");


    ctx->pc = 0x176b38u;

    // 0x176b38: 0x27bdffe0
    ctx->pc = 0x176b38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176b3c: 0xffb00000
    ctx->pc = 0x176b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176b40: 0xffbf0010
    ctx->pc = 0x176b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176b44: 0xc05efbc
    ctx->pc = 0x176B44u;
    SET_GPR_U32(ctx, 31, 0x176B4Cu);
    ctx->pc = 0x176B48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B4Cu; }
        else if (ctx->pc != 0x176B4Cu) { ctx->pc = 0x176B4Cu; }
    }
    if (ctx->pc != 0x176B4Cu) { return; }
    ctx->pc = 0x176B4Cu;
    // 0x176b4c: 0xa2000000
    ctx->pc = 0x176b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x176b50: 0xdfbf0010
    ctx->pc = 0x176b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176b54: 0xdfb00000
    ctx->pc = 0x176b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176b58: 0x805efc2
    ctx->pc = 0x176B58u;
    ctx->pc = 0x176B5Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x176B60u;
}

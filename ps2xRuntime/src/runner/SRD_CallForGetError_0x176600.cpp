#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_CallForGetError
// Address: 0x176600 - 0x17662c
void SRD_CallForGetError_0x176600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_CallForGetError");


    ctx->pc = 0x176600u;

    // 0x176600: 0x27bdffe0
    ctx->pc = 0x176600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176604: 0xffb00000
    ctx->pc = 0x176604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176608: 0xffbf0010
    ctx->pc = 0x176608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17660c: 0xc05d940
    ctx->pc = 0x17660Cu;
    SET_GPR_U32(ctx, 31, 0x176614u);
    ctx->pc = 0x176610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176500u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_WaitForExecServer_0x176500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176614u; }
        else if (ctx->pc != 0x176614u) { ctx->pc = 0x176614u; }
    }
    if (ctx->pc != 0x176614u) { return; }
    ctx->pc = 0x176614u;
    // 0x176614: 0x3c020024
    ctx->pc = 0x176614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x176618: 0xdfbf0010
    ctx->pc = 0x176618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17661c: 0xac5087a8
    ctx->pc = 0x17661cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936488), GPR_U32(ctx, 16));
    // 0x176620: 0xdfb00000
    ctx->pc = 0x176620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176624: 0x3e00008
    ctx->pc = 0x176624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176628u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17662Cu;
}

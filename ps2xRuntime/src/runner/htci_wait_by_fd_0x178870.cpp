#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_wait_by_fd
// Address: 0x178870 - 0x178890
void htci_wait_by_fd_0x178870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_wait_by_fd");


    ctx->pc = 0x178870u;

    // 0x178870: 0x27bdfff0
    ctx->pc = 0x178870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178874: 0xffbf0000
    ctx->pc = 0x178874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178878: 0xc05d82e
    ctx->pc = 0x178878u;
    SET_GPR_U32(ctx, 31, 0x178880u);
    ctx->pc = 0x1760B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_WaitComplete_0x1760b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178880u; }
        else if (ctx->pc != 0x178880u) { ctx->pc = 0x178880u; }
    }
    if (ctx->pc != 0x178880u) { return; }
    ctx->pc = 0x178880u;
    // 0x178880: 0xdfbf0000
    ctx->pc = 0x178880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178884: 0x102d
    ctx->pc = 0x178884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178888: 0x3e00008
    ctx->pc = 0x178888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17888Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178890u;
}

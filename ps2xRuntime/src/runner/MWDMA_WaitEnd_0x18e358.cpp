#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWDMA_WaitEnd
// Address: 0x18e358 - 0x18e39c
void MWDMA_WaitEnd_0x18e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWDMA_WaitEnd");


    ctx->pc = 0x18e358u;

    // 0x18e358: 0x27bdffe0
    ctx->pc = 0x18e358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e35c: 0xffb00000
    ctx->pc = 0x18e35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e360: 0xffbf0010
    ctx->pc = 0x18e360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e364: 0xc0547e4
    ctx->pc = 0x18E364u;
    SET_GPR_U32(ctx, 31, 0x18E36Cu);
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E36Cu; }
        else if (ctx->pc != 0x18E36Cu) { ctx->pc = 0x18E36Cu; }
    }
    if (ctx->pc != 0x18E36Cu) { return; }
    ctx->pc = 0x18E36Cu;
    // 0x18e36c: 0x40802d
    ctx->pc = 0x18e36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e370: 0x200202d
    ctx->pc = 0x18e370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e374: 0x0
    ctx->pc = 0x18e374u;
    // NOP
label_18e378:
    // 0x18e378: 0x24050001
    ctx->pc = 0x18e378u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e37c: 0xc054a0c
    ctx->pc = 0x18E37Cu;
    SET_GPR_U32(ctx, 31, 0x18E384u);
    ctx->pc = 0x18E380u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x152830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x152830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E384u; }
        else if (ctx->pc != 0x18E384u) { ctx->pc = 0x18E384u; }
    }
    if (ctx->pc != 0x18E384u) { return; }
    ctx->pc = 0x18E384u;
    // 0x18e384: 0x1440fffc
    ctx->pc = 0x18E384u;
    {
        const bool branch_taken_0x18e384 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18E388u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e384) {
            ctx->pc = 0x18E378u;
            goto label_18e378;
        }
    }
    ctx->pc = 0x18E38Cu;
    // 0x18e38c: 0xdfbf0010
    ctx->pc = 0x18e38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e390: 0xdfb00000
    ctx->pc = 0x18e390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e394: 0x3e00008
    ctx->pc = 0x18E394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E398u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E378u: goto label_18e378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E39Cu;
}
